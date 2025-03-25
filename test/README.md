**C - printf**

**Background Context**
Write your own printf function
Project to be done in team

**Requirements**
The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Not allowed to use global variables, and no more than 5 functions per file
The prototypes of all the functions should be included in the header file called main.h

**Files**
*main.h - Contains declaration for all the functions in this repo.*
*_printf.c - Contains the definition for _printf() that print string to standard output according to format.*


**Compilation**
All the files will be compiled on Ubuntu 20.04 LTS
The code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
int _printf(const char *format, ...);The main files will include the main header file (main.h): #include main.h

**Authorized functions and macros**
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

**Prototypes**
int _printf(const char *format, ...) 
function that produces output according to a format.
int _putchar(char c)
function that writes the character c to stdout.


