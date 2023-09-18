#ifndef _PRINTF_H
#define _PRINTF_H

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
int print_b(unsigned int n);
int choose_func(char ch, va_list lst);
int print_percent(int num);
int print_ns(char ch);
int print_char(va_list lst);
int print_o(unsigned int n);
unsigned int print_u(int n);
int print_hexa(unsigned int n, char x);
char print_hc(int n, char x);
int print_S(va_list lst);
#endif
