/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** lib protos
*/

#ifndef MY_H
#define MY_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

//lib funcs
char *my_strndup(char const *str, int n);
char *my_strdup(char const *str);
int my_compute_power_rec(int nb, int p);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char *my_strcapitalize(char *str);
void my_sort_int_array(int *array, int size);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_revstr(char *str);
void my_putstr(char *str);
int my_putnbr(int nb);
void my_putchar(char c);
int my_notconststrlen(char *str);
char *my_notconststrcat(char *dest, char *src);
int my_is_prime(int nb);
int my_isneg(int n);
int my_strlen(char const *str);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int my_getnbr(char *str);
void my_putnbr_base(int n, char *base);
void my_uputnbr_base(unsigned int n, char *base);
int my_put2d_arr(char * const *array);
char **mem_alloc_2d_array(int letter, int strings);
char **split_string(char const *str);
int case_flags(const char *str, int z, long var);
int case_flags2(const char *str, int z, long var);
int case_flags3(const char *str, int z, long var);
int my_printf(const char *str, ...);
int my_put_unsigned_int(unsigned int nbr);

#endif