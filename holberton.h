#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _isdigit(int c);
int _strlen(char *);
void _puts(char *w);
void print_rev(char *s);
int _putchar(char c);
char *rot13(char *str);
char get_spec(char letter);
int switch_help(char, char *); 
int _printf(const char *format, ...);
#endif