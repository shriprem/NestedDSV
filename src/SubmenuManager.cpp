#include "SubmenuManager.h"
#include "Dialogs/NestedDSVPanel.h"
#include "Resources/SamplesMenuDefs.h"

extern FuncItem pluginMenuItems[MI_COUNT];
extern NestedDSVPanel _dsvPanel;

void SubmenuManager::listSampleFiles() {
   HMENU hSubMenu = getPluginSubMenu();
   if (hSubMenu == NULL) return;

   HMENU hMenuSampleFiles = CreatePopupMenu();
   ModifyMenu(hSubMenu, MI_DEMO_SAMPLE_DATA_FILES, MF_BYPOSITION | MF_POPUP, (UINT_PTR)hMenuSampleFiles, MENU_DEMO_SAMPLE_DATA_FILES);

   itemCount = std::size(gSampleFiles);
   if (!NppMessage(NPPM_ALLOCATECMDID, itemCount, (LPARAM)&itemIDStart)) return;

   NppMessage(NPPM_GETPLUGINHOMEPATH, MAX_PATH, (LPARAM)pluginSamplesDir);
   PathAppend(pluginSamplesDir, PLUGIN_FOLDER_NAME);
   PathAppend(pluginSamplesDir, L"Samples");

   TCHAR sampleFile[MAX_PATH];

   for (size_t i{}; i < itemCount; ++i) {
      PathCombine(sampleFile, pluginSamplesDir, gSampleFiles[i].file_name.c_str());
      if (Utils::checkFileExists(sampleFile))
         AppendMenu(hMenuSampleFiles, MF_STRING, itemIDStart + i, Utils::NarrowToWide(gSampleFiles[i].display_name).c_str());
   }
}

void SubmenuManager::loadSampleFile(WPARAM wParam, LPARAM) const {
   size_t cmdID{ LOWORD(wParam) - itemIDStart };
   if (cmdID < 0 || cmdID >= itemCount) return;

   TCHAR sampleFile[MAX_PATH];

   PathCombine(sampleFile, pluginSamplesDir, gSampleFiles[cmdID].file_name.c_str());
   if (!Utils::checkFileExists(sampleFile)) return;

   NppMessage(NPPM_DOOPEN, 0, (LPARAM)sampleFile);
   ShowNestedDSVPanel(TRUE);

   _configIO.defaultVizConfig();
   _dsvPanel.visualizeFile(gSampleFiles[cmdID].file_type, FALSE, FALSE, TRUE);
}

void SubmenuManager::initSamplesPopup(HMENU hPopup) {
   HMENU hPluginMenu = getPluginSubMenu();
   if (hPluginMenu == NULL) return;

   HMENU hMenuSample = GetSubMenu(hPluginMenu, MI_DEMO_SAMPLE_DATA_FILES);
   int menuItemCount = GetMenuItemCount(hMenuSample);

   for (int i{}; i < menuItemCount; ++i) {
      TCHAR pluginItemText[MAX_PATH];

      int pluginItemLen = GetMenuString(hMenuSample, i, pluginItemText, MAX_PATH, MF_BYPOSITION);
      if (pluginItemLen < 1) continue;

      AppendMenu(hPopup, MF_STRING, itemIDStart + i, pluginItemText);
   }
}


HMENU SubmenuManager::getPluginSubMenu() {
   HMENU hPluginMenu = (HMENU)NppMessage(NPPM_GETMENUHANDLE);
   int menuItemCount = GetMenuItemCount(hPluginMenu);

   for (int i{}; i < menuItemCount; ++i) {
      TCHAR pluginItemText[MAX_PATH];
      int pluginItemLen{};

      pluginItemLen = GetMenuString(hPluginMenu, i, pluginItemText, MAX_PATH, MF_BYPOSITION);
      if (pluginItemLen > 0 && wstring{ pluginItemText } == MENU_PANEL_NAME) {
         HMENU hSubMenu = GetSubMenu(hPluginMenu, i);

         if (GetMenuState(hSubMenu, (UINT)pluginMenuItems[0]._cmdID, MF_BYCOMMAND) != -1)
            return hSubMenu;
      }
   }

   return NULL;
}
