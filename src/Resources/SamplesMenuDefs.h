#pragma once

#include <string>

using std::wstring;

struct SampleFileInfo {
   string display_name;
   wstring file_name;
   string file_type;
};

const SampleFileInfo gSampleFiles[] =
{
   {
      "Apollo Missions [Pipe]",
      L"ApolloMissions-pipe.dsv",
      "FT001_APOLLO_MISSIONS_-_CREWED_(PIPE)"
   },
   {
      "Apollo Missions [Caret]",
      L"ApolloMissions-caret.dsv",
      "FT002_APOLLO_MISSIONS_-_CREWED_(CARET)"
   },
   {
      "Planets and Moons Sampler [Pipe]",
      L"PlanetsMoons-pipe.dsv",
      "FT003_PLANETS_&_MOONS_(PIPE)"
   },
   {
      "Planets and Moons Sampler [Unit Separator]",
      L"PlanetsMoons-us.dsv",
      "FT004_PLANETS_&_MOONS_(US)"
   },
   {
      "Geological Regions Sampler [Comma]",
      L"GeoRegions-comma.dsv",
      "FT005_GEOLOGICAL_REGIONS_(COMMA)"
   },
   {
      "Geological Regions Sampler [Double Colons]",
      L"GeoRegions-dcolon.dsv",
      "FT006_GEOLOGICAL_REGIONS_(2_COLONS)"
   },
   {
      "Linnaeus Taxonomy Sampler [Pipe]",
      L"Linaeus-pipe.dsv",
      "FT007_LINNAEUS_TAXONOMY_(PIPE)"
   },
   {
      "Linnaeus Taxonomy Sampler [Tilde]",
      L"Linaeus-tilde.dsv",
      "FT008_LINNAEUS_TAXONOMY_(TILDE)"
   }
};
