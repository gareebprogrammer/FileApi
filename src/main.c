#include "FileSystem.h"
#include <stdio.h>

int main(int argc,const char **argv) {
    size_t file_size = get_file_size(argv[1]);
    printf("File size: %d\n", file_size);    
    return 0;
}