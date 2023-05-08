#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Description: Header file containining all the prototypes
 * 		needed for the functions needed in the 
 * 		0x15-file_io directory.
 */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
