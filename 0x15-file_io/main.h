#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define READ_BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);



#endif /*_MAIN_H*/
