#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_s(char *str);
int _strlen(char *s);
int print_d(int n);
int print_b(int n);
int switch_op(const char *format, va_list lst, int printed);
#endif
