#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_memst(char *s, char b, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char *argv[]);
void print_int(unsigned long int n);
int _atoi(const char *s);
void _puts(char *str);


#endif
