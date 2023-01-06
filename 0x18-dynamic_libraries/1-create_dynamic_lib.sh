root@c19c74fc7850:/alx-low_level_programming# cd 0x18-dynamic_libraries
root@c19c74fc7850:/alx-low_level_programming/0x18-dynamic_libraries# cat > 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
        printf("%d\n", _strlen("My Dyn Lib"));
        return (EXIT_SUCCESS);
}
^C
root@c19c74fc7850:/alx-low_level_programming/0x18-dynamic_libraries# cat > main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int mod(int a, int b);
extern div_t div(int __numer, int __denom);

#endif /* MAIN_H */
^C
root@c19c74fc7850:/alx-low_level_programming/0x18-dynamic_libraries# cat > 1-create_dynamic_lib.sh
#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
