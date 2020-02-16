#pragma once

#include <string>
#include <vector>

#include <dirent.h>

#ifndef _WIN32
  #include <fnmatch.h>
#endif

class Dir {
public:
  Dir(const std::string& path);
  ~Dir();

  // Returns files matching specified pattern.
  std::vector<std::string> matchFiles(const std::string& pattern);

protected:
  std::string path_;
  DIR* dir_;
};
