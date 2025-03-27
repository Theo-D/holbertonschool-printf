# **C - PRINTF - Holbertonschool Toulouse**
 
 
## **Background Context**
Write our own printf function in C language


## **Authors**
This project is done in team :  
Théo Dessaigne et Ingrid Mornac.


## **Installation**
Create 1 project repository for our team with the main branch and a "dev" branch on our Github  
We could have a test folder containing all our tests files uncluding main functons.


## *Flowchart**
Flowchart to inser

## **Resources**
**Read or watch:**
- Secrets of printf  
- Group Projects concept page  
- Flowcharts concept page  

**Man or help:**
printf (3)


## **Requirements**
The code should use the Betty style.  
It will be checked using betty-style.pl and betty-doc.pl  
We are not allowed to use global variables  
No more than 5 functions per file  
Allowed editors : vi, vim, emacs  
All the files should end with a new line  
The main.c in the project are shown as examples, they can be used to test functions  
Push the header file  
All the header files should be include guarded  


## **Files**
*main.h -  
Contains declaration for all the functions in this repo.*  
*_printf.c -  
Contains the definition for _printf() that print string to standard output according to format.*


## **Compilation**
All the files will be compiled on Ubuntu 20.04 LTS  
The code will be compiled this way:  
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c  
The main files will include the main header file (main.h): #include main.h  


## **Authorized functions and macros**
write (man 2 write)  
malloc (man 3 malloc)  
free (man 3 free)  
va_start (man 3 va_start)  
va_end (man 3 va_end)  
va_copy (man 3 va_copy)  
va_arg (man 3 va_arg)


## **Prototypes**
The prototypes of all the functions should be included in the header file called main.h.  
int _printf(const char *format, ...)  
function that produces output according to a format.  
int _putchar(char c)  
function that writes the character c to stdout.


## **Functions**
int printChar(va_list args)  
function that prints number of characters  
in printString(va_list args)  
function that  
int printInt(va_list args)  
function that  


## **Specifier formats**
|Specifier f.|   Designation       | Example of use| 
|------------|---------------------|---------------|
|%c          | char character      | char c; printf("The character is %c\n", c); ==> The charracter is c |
|%s          | string              | char name[] = "Betty"; printf("Hello %s !\n", Betty) ==> Hello Betty ! |
|%d          | decimal integer     | int year = 2025; printf("Happy new year %d\n", year); --> Happy new year 2025 |
|%i          | integer in any base | int age = 25; printf("I'm %i\n", age); ==> I'm 25 |


## **

