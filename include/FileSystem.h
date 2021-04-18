#ifndef FILE_SYSTEM_API_H
#define FILE_SYSTEM_API_H
#include<stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

size_t get_file_size(const char *file_path); 

#ifdef __cplusplus
} // extern "C"
#endif

#endif FILE_SYSTEM_API_H
