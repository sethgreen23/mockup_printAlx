#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_s(char *str, char *buffer, int *index);
int _strlen(char *s);
int print_d(int n, char *global_buffer, int *index);
int print_b(unsigned int n, char *global_buffer, int *index);
int choose_func(char ch, va_list lst, char *buffer, int *index);
int print_percent(char *buffer, int *index);
int print_ns(char ch, char *buffer, int *index);
int print_char(va_list lst, char *buffer, int *index);
int print_o(unsigned int n, char *global_buffer, int *index);
unsigned int print_u(int n, char *global_buffer, int *index);
int print_hexa(unsigned int n, char x, char *global_buffer, int *index);
char print_hc(int n, char x);
void empty_buffer(char *buffer, int *index);
void store_character(char *buffer, int *index, char chr);
void print_buffer(char *buffer, int *index);
void store_string(char *buffer, int *index, char *str);
#endif
