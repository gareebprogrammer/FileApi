#include "FileSystem.h"
#include <stdio.h>

int main(int argc,const char **argv) {
    printf("%s\n", argv[1]);
    EntireFile file;
    if(load_entire_file(argv[1],&file)) {
        printf("File size: %zd\n", file.file_size);
    }else {
        printf("File load failed\n");
    }    
    return 0;
}