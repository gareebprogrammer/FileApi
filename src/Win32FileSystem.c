#include "FileSystem.h"
#include <windows.h>

#ifdef __cplusplus
extern "C"
{
#endif

size_t get_file_size(const char *file_path) {
  WIN32_FILE_ATTRIBUTE_DATA    fileInfo;
  if(GetFileAttributesEx(file_path, GetFileExInfoStandard, &fileInfo))
    {
        size_t nSize = (size_t)fileInfo.nFileSizeLow;
        return nSize;
    }else {
       return -1;
    } 
}

#ifdef __cplusplus
} // extern "C"

#endif
