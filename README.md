# NestedDSV

![GitHub](https://img.shields.io/github/license/shriprem/NestedDSV)
![GitHub release (latest by date)](https://img.shields.io/github/v/release/shriprem/NestedDSV)
![GitHub all releases](https://img.shields.io/github/downloads/shriprem/NestedDSV/total)
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
![GitHub last commit (by committer)](https://img.shields.io/github/last-commit/shriprem/NestedDSV)
![GitHub Workflow Status (with event)](https://img.shields.io/github/actions/workflow/status/shriprem/NestedDSV/CI_build.yml)
![GitHub issues](https://img.shields.io/github/issues/shriprem/NestedDSV)

## NestedDSV Data Visualizer plugin for Notepad++
[Current Version: 1.1.0.1](https://github.com/shriprem/NestedDSV/blob/main/VersionHistory.md)

![image](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/foldable_apollo_pipe.png)
**Apollo Missions (Pipe) Sample File, with folding applied.**

NestedDSV is a plugin for visualizing Nested (i.e., hierarchical) delimiter-separated values (DSV) data in Notepad++. For more information on NestedDSV data files, see: [Nested DSV Primer](https://github.com/shriprem/NestedDSV/blob/main/docs/nested_dsv_primer.md)

In addition, NestedDSV plugin offers these features: Display cursor position data; Jump to specific fields; Foldable Tree View; Data Extraction.

NestedDSV plugin has builtin dialogs to configure File-type, Record-type & Field metadata; Themes & Color definitions; and Folding structure.

NestedDSV's [File Type Metadata Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md) offers these immediately usable delimiters: `Comma (,), Pipe (|), Tab (ASCII 9), Semicolon (;), Colon (:), Tilde (~), Caret (^), Unit Separator (ASCII 31), Double Pipe (||), Double Colon (::)`. In addition, NestedDSV offers support for custom delimiters that can be manually entered in the viewer configuration file. See: [Delimiter Choices](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md#delimiter-choices)

### Features at the Panel
* Visualization of fields in NestedDSV data files with distinct colors and font styles. With or optionally without distinct background colors.

* [Display of record, field and byte information at cursor position](#plugin-panel) on the panel. Also, optionally, inside a calltip within the Notepad++ editor pane.

* [Foldable Record Blocks](https://github.com/shriprem/NestedDSV/blob/main/docs/foldable_record_blocks.md)

* [Quick Field Navigation](https://github.com/shriprem/NestedDSV/blob/main/docs/field_navigation.md) to [Jump](https://github.com/shriprem/NestedDSV/blob/main/docs/field_navigation.md#jump-to-field) to any field of the current record or [Hop](https://github.com/shriprem/NestedDSV/blob/main/docs/field_navigation.md#hop-field) to the left or right edge of the current field or adjacent fields.

* [Field Copy](https://github.com/shriprem/NestedDSV/blob/main/docs/field_copy_paste.md#field-copy) and [Field Paste](https://github.com/shriprem/NestedDSV/blob/main/docs/field_copy_paste.md#field-paste)

* [Default Style Field Types](https://github.com/shriprem/NestedDSV/blob/main/docs/field_type_dialog.md#default-style) for turning off visualization for specific fields like spaces or separators.

* [Menu Items with Keyboard Shortcuts](https://github.com/shriprem/NestedDSV/blob/main/docs/menu_shortcuts.md) for quick and easy access of frequently used actions.

* [Sample Data files](#sample-nesteddsv-data-files) in the plugin package demonstrating:
   * [Various delimiters](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md#delimiter-choices)
   * [Foldable Record Blocks](https://github.com/shriprem/NestedDSV/blob/main/docs/foldable_record_blocks.md)

### Features beyond the Panel

* [File Type Metadata Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md) to intuitively define and customize file type metadata with record types and fields.

* [Visualizer Theme Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/theme_config_dialog.md) to intuitively define and customize themes and colors for data visualization.

* [Fold Structures Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/fold_structs_editor.md) to intuitively define and customize Fold Structure definitions.

* Easy sharing of customized File Type or Visualizer Theme or Fold Structure definitions with [Extract Configuration Data](https://github.com/shriprem/NestedDSV/blob/main/docs/config_extract_dialog.md) and [Append Configuration Data](https://github.com/shriprem/NestedDSV/blob/main/docs/config_append_dialog.md).

* [Data Extraction](https://github.com/shriprem/NestedDSV/blob/main/docs/data_extract_dialog.md) to extract a handful data fields into an easily readable, quick report.

* Full support for multi-byte characters in File Type metadata, Theme Labels, Data Extraction Prefix and Suffix Labels.

* [Dark mode rendering of the plugin UI.](https://github.com/shriprem/NestedDSV/blob/main/docs/dark_mode_ui.md)

---

## Plugin Panel
![Plugin_Panel](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/plugin_panel.png)

* Click on the _View Sample Files_ icon: ![View Sample Files](https://raw.githubusercontent.com/shriprem/NestedDSV/main/src/Resources/file_samples.bmp), and choose from the menu options to view various [sample files](#sample-nesteddsv-data-files).

* Click on the _File Type Metadata Editor_ icon: ![File Type Metadata Editor](https://raw.githubusercontent.com/shriprem/NestedDSV/main/src/Resources/file_config.bmp), to view, modify or create your custom File Type definitions. For more information, see: [File Type Metadata Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md).

* Click on the _Visualizer Theme Editor_ icon: ![Visualizer Theme Editor](https://raw.githubusercontent.com/shriprem/NestedDSV/main/src/Resources/color_config.bmp), to view, modify or create your custom Visualizer Theme definitions. For more information, see: [Visualizer Theme Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/theme_config_dialog.md).

* Click the _Preferences_ button to specify preferences for the plugin. For more information, see: [Preferences](https://github.com/shriprem/NestedDSV/blob/main/docs/preferences_dialog.md).

* Check the _Auto-detect File Type_ box to automatically visualize files with matching file type from the defined list. For more information, see: [Auto-Detect File Type Configuration](https://github.com/shriprem/NestedDSV/blob/main/docs/auto_detect_file_type.md).

* Check the _Default Background_ box to render the NestedDSV fields with just the text colors while suppressing the background colors of the theme styles.

* Check the _Show Calltip_ box to display the _Cursor Position Data_ in a calltip within the editor, right below the current cursor position. The calltip will be useful during presentations and other situations when there is a need to avoid an additional glance towards the side panel to view the same _Cursor Position Data_.

  > :bulb: To display the calltip text in bold, check the option for _**Use DirectWrite**_ in Notepad++ _Settings » Preferences » MISC._

* For more information on the _Jump to Field_ and left & right hop buttons, see: [Quick Field Navigation](https://github.com/shriprem/NestedDSV/blob/main/docs/field_navigation.md).

* For more information on _Field Copy_ and _Field Paste_ buttons, see: [Field Copy and Field Paste](https://github.com/shriprem/NestedDSV/blob/main/docs/field_copy_paste.md).

* For more information on the _Data Extraction_ button, see: [Data Extraction](https://github.com/shriprem/NestedDSV/blob/main/docs/data_extract_dialog.md).

* For more information on the buttons in the _Folding_ section, see: [Foldable Record Blocks](https://github.com/shriprem/NestedDSV/blob/main/docs/foldable_record_blocks.md) and [Fold Structures Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/fold_structs_editor.md).

* Clicking the `…` button at the right-bottom corner of the plugin panel will display the refreshed list of file paths for the INI files active for the current NestedDSV file. Just hovering over this button will display the last refreshed list.

---

## Sample NestedDSV data files

The sample data files can be accessed by clicking on the _View Sample Files_ icon: ![View Sample Files](https://raw.githubusercontent.com/shriprem/NestedDSV/main/src/Resources/file_samples.bmp), and then choosing an option in the menu.

![View Demo Files](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/view_demo_files.png)

Here is a peek at some of the sample files:

### Apollo Missions (Caret delimiter; default back color)

![Apollo Missions (Caret)](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/foldable_apollo_caret.png)

### Planets and Moons Sampler (Unit Separator delimiter)

![Planets and Moons Sampler (Unit Separator)](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/foldable_planets_us.png)

### Geological Regions Sampler (Double Colon delimiter; default back color)

![Geological Regions Sampler (Double Colon)](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/foldable_regions_dcolon.png)

### Linnaeus Taxonomy Sampler (Pipe delimiter)

![Linnaeus Taxonomy Sampler (Pipe)](https://raw.githubusercontent.com/shriprem/NestedDSV/main/images/foldable_taxonomy_pipe.png)

---

## Installation
1. Install Notepad++ version 8.8 or higher.
2. Open Notepad++.
3. In Notepad++, go to menu **Plugins** » **Plugins Admin...**.
4. In the **Available** tab, check the box for **NestedDSV Data Visualizer**.
5. Click the **Install** button.

## Attributions
* Several of the icons used in this plugin are the originals or derivatives of the [*Fugue Icons*](https://p.yusukekamiyamane.com) designed by **Yusuke Kamiyamane**.

* All screen clippings in this repository were made using [FastStone Capture](https://www.faststone.org/FSCaptureDetail.htm). Small-size application with awesome features!

## See Also
While NestedDSV is meant for Nested DSV data files, [FWDataViz](https://github.com/shriprem/FWDataViz) is for fixed-width data files. The two plugins have similar interfaces with minimal changes. See: [Nested DSV Primer](https://github.com/shriprem/NestedDSV/blob/main/docs/nested_dsv_primer.md)

* NestedDSV has a slightly simpler [File Type Metadata Editor](https://github.com/shriprem/NestedDSV/blob/main/docs/file_type_config_dialog.md) compared to the one in [FWDataViz](https://github.com/shriprem/FWDataViz/blob/master/docs/file_type_config_dialog.md).

* The [sample files](https://github.com/shriprem/NestedDSV?tab=readme-ov-file#sample-nesteddsv-data-files) packaged with NestedDSV are also simpler and much more interesting.

Due to their similarities and minor differences, reviewing the documentation and sample files of both these plugins may benefit some users by reinforcing the underlying concepts.

---

<a href='https://ko-fi.com/S6S417WICS' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://storage.ko-fi.com/cdn/kofi5.png?v=6' border='0' alt='Buy Me a Coffee at ko-fi.com' /></a>
