#ifndef _files_h
#define _files_h

#include "../common.h"
#include "../utils/utils.h"

#include <filesystem>
#include <fstream>
#include <sstream>
#include <vector>

namespace Files
{
    std::string Read(std::string path);
    void Append(std::string path, std::string content, bool hasdate = true);
    void Write(std::string path, std::string content, bool hasdate = true);
    void Delete(std::string path);
    std::string getBase(std::string filePath);
    bool ExistsPath(std::string path);
    bool IsDirectory(std::string path);
    std::vector<std::string> FetchFileNames(std::string path);
    std::vector<std::string> FetchDirectories(std::string path);
    bool CreateDirectory(std::string path);
};

#endif