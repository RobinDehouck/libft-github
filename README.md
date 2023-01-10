# libft

This is a C library that provides a set of basic functions that can be used in C programming.

## Getting Started

To use the library, include the `libft.h` header file in your project and link to the `libft.a` file during compilation.

## Function List
The following functions are provided by the library:

## Character Testing
int ft_isalpha(int n): tests for an alphabetic character.
int ft_isdigit(int n): tests for a digit.
int ft_isalnum(int n): tests for an alphanumeric character.
int ft_isascii(int n): tests for an ASCII character.
int ft_isprint(int n): tests for a printing character.

## String Processing
size_t ft_strlen(const char *str): returns the length of a string.

void *ft_memset(void *buf, int c, size_t len): fills a block of memory with a given value.

void ft_bzero(void *string, size_t byte_length): write zeroes to a string

void *ft_memcpy(void *dest, const void *source, size_t bit_size): copies memory from one location to another.

void *ft_memmove(void *dest, const void *src, size_t len): copies bytes from memory area src to memory area dest

size_t ft_strlcpy(char *dest, const char *source, size_t length): copy and concatenates

size_t ft_strlcat(char *dst, const char *src, size_t dstsize): copy and concatenates

int ft_toupper(int c): converts a lower-case letter to upper-case.

int ft_tolower(int c): converts an upper-case letter to lower-case.

char *ft_strchr(char *s, int c): locate character in a string

char *ft_strrchr(const char *source, int c): locate last occurrence of a character

int ft_strncmp(const char *source1, const char *source2, size_t n): compare at most n characters from two strings

void *ft_memchr(const void *source, int c, size_t n): search for a byte in an area of memory

int ft_memcmp(const void *source1, const void *source2, size_t n): compare byte sequences

char *ft_strnstr(const char *haystack, const char *needle, size_t len): Locate a substring

int ft_atoi(const char *number): convert a string to an integer.
