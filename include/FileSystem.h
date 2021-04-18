#ifndef FILE_SYSTEM_API_H
#define FILE_SYSTEM_API_H
#include<stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct {
    void    *file;
    size_t  file_size;
}EntireFile;

size_t get_file_size(const char *file_path);

int8_t load_entire_file(const char *file_path,EntireFile *file);
void free_file(EntireFile *file);


#ifdef __cplusplus
} // extern "C"
#endif

#endif FILE_SYSTEM_API_H
