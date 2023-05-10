#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/*
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/* create_file - function that creates a file. */
int create_file(const char *filename, char *text_content);

/* append_text_to_file - appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

/* copy_file - copies the content of a file to another file */
int copy_file(const char *file_from, const char *file_to);

/* print_error - prints error message to stderr */
void print_error(int code, const char *file);

/*
 * print_elf_info - prints information contained in the ELF header 
 * at the start of an ELF file.
 */
void print_elf_info(unsigned char *header);

#endif /* MAIN_H */
