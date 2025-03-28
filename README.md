# **C - PRINTF - Holbertonschool Toulouse**


## **Summary**
* [Authors](#authors)  
* [Installation](#installation)   
* [Flowchart](#flowchart)  
* [Resources](#resources)  
* [Requirements](#requirements)  
* [Files](#files)
* [Compilation](#compilation)
* [Authorized_functions_and_macros](#authorized_functions_and_macros)  
* [Prototypes](#prototypes)
* [Functions](#functions)
* [Specifier formats](#specifier-formats)
* [Tools to help](#tools-to-help)  
  
--------------------------  


## **Background Context**
Write our own printf function in C language, according to the requirements.  
The challenge : this is a group project, with a important collaboration, a good communication and the respect of each of our team.   


# **Authors**
This project is done in team :  
@Théo Dessaigne  
@Ingrid Mornac


## **Installation**
We created a git repository for our team's project for which we both created a "dev" branch, for developing and testing. 
We created a test folder in each of our branches to test code within main.c file.


## **Flowchart**
![Flowchart of the printf](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Flowchart%20Printf.drawio%20(1).png)


## **Resources**
**Read or watch:**  
- [Secrets of printf](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Secrets%20of%20printf.pdf)  
- [Group Projects concept page](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Group%20project.pdf)  
- [Flowcharts concept page](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Flowcharts%20concept%20page.pdf)  


**Man or help:**  
printf (3) ![man_3_printf](https://github.com/Theo-D/holbertonschool-printf/blob/main/man_3_printf)  


## **Requirements**
The code should use the Betty style.  
It will be checked using betty-style.pl and betty-doc.pl  
We are not allowed to use global variables  
No more than 5 functions per file  
Allowed editors : vi, vim, emacs  
The main.c in the project are shown as examples, they can be used to test functions  
Push the header file  
All the header files should be include guarded  
[Requirements Holberton](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Requirements_printf.pdf)  


## **Files**
- main.h
- _printf.c    
- README.md
- man_3_printf
- _putchar.c  
- getPrintFun.c  
- printBin.c  
- printChar.c  
- printHexaLow.c  
- printHexaUp.c  
- printInt.c  
- printOctal.c  
- printStr.c  
- printStrPrintable.c  
- printUInt.c  


## **Compilation**
All the files will be compiled on Ubuntu 20.04 LTS  
The code will be compiled this way:  
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c  
Each file should include the main header file (main.h): #include main.h  


## **Authorized functions and macros**
- write (man 2 write) [click to read](https://www.man7.org/linux/man-pages/man2/write.2.html)  
- malloc (man 3 malloc) [click to read](https://www.man7.org/linux/man-pages/man3/malloc.3.html)  
- free (man 3 free) [click to read](https://www.man7.org/linux/man-pages/man1/free.1.html)  
- va_start (man 3 va_start) [click to read](https://fr.manpages.org/va_start/3)  
- va_end (man 3 va_end) [click to read](https://fr.manpages.org/va_end/3)  
- va_copy (man 3 va_copy) [click to read](https://fr.manpages.org/va_copy/3)  
- va_arg (man 3 va_arg) [click to read](https://fr.manpages.org/va_arg/3)


## **Prototypes**
The prototypes of all the functions are included in the header file called main.h.  


## **Functions**
|Function | Description |
|---------|-------------|
|int _putchar(char c) | Writes char to std out. |
|int _printf(const char *format, ...) | Prints data passed as args according to format by calling getPrintFun().|
|int getPrintFun(char c, va_list args) | Calls function through a function pointer according to given format specifier. |
|int printStrPrintable(va_list args) | Prints a string passed as args. |
|int printChar(va_list args) | Prints character passed as args. |
|int printStr(va_list args) | Prints a string passed as args. |  
|int printInt(va_list args) | Converts int to string and prints it. |
|int printBin(va_list args) | Convert a given unsigned int from base 10 to base 2 and prints it. |
|int printOctal(va_list args) | Converts usingned int from base 10 to base 8 and prints it. |
|int printUInt(va_list args | Prints an unsigned int passed as args. |
|int printHexaLow(va_list args) | Converts unsigned int from base 10 to base 16 and prints it lowercase. |
|int printHexaUp(va_list args) | Converts unsigned int from base 10 to base 16 and prints it uppercase. |
|int printStrPrintable(va_list args) | Prints a given string. If character is printable, prints it. Otherwise prints "\x" followed by hex code of character. |


## **Specifier formats**
|Format Specifier|   Designation       | Example of use| 
|------------|---------------------|---------------|
|c          | character           | char c; _printf("The character is %c\n", c); ==> The charracter is c |
|s          | string              | char name[] = "Betty"; _printf("Hello %s !\n", Betty) ==> Hello Betty ! |
|S          | string              | char name[] = "Betty\n"; _printf("Hello %S !\n", Betty) ==> Hello Betty\x0A ! |
|d, i       | decimal integer     | int year = 2025; _printf("Happy new year %d\n", year); ==> Happy new year 2025 | 
|b          | unsigned binary     | unsigned int toBinary = 1234; _printf("1234 to binary is: \"%b\"", toBinary) ==> 1234 to binary is "10011010010" |
|o          | unsigned octal      | unsigned int toOctal = 1234; _printf("1234 to octal is: \"%o\"", toOctal) ==> 1234 to OCtal is "2322"| 
|u          | unsigned int        | unsigned int toUInt = 1234; _printf("1234 to unsigned int is: \"%u\"", toUInt) ==> 1234 to unsigned int is "1234" | 
|x          | unsigned hex lower  | unsigned int toHexLow = 1234; _printf("1234 to hexadecimal lowercase is \"%x\"", toHexLow) ==> 1234 to hexadecimal lowercase is "4d2" |  
|X          | unsigned hex upper  | unsigned int toHexUp = 1234; _printf("1234 to hexadecimal uppercase is \"%X\"", toHexUp) ==> 1234 to hexadecimal uppercase is "4D2" | 
Others [format specifier in C](https://www.bing.com/images/search?view=detailV2&ccid=k%2bt%2frOsh&id=DB38FDA226ABC0F704EBE53C555EB027A93AE3BD&thid=OIP.k-t_rOsh7LhzS5FU_WicxAHaEK&mediaurl=https%3a%2f%2fcdn.shortpixel.ai%2fclient%2fq_glossy%2cret_img%2cw_1536%2ch_864%2fhttps%3a%2f%2fcodewindow.in%2fwp-content%2fuploads%2f2021%2f03%2fScreenshot-99-1536x864.png&cdnurl=https%3a%2f%2fth.bing.com%2fth%2fid%2fR.93eb7faceb21ecb8734b9154fd689cc4%3frik%3dveM6qSewXlU85Q%26pid%3dImgRaw%26r%3d0&exph=864&expw=1536&q=tableau+des+sp%c3%a9cifier+format+inc&simid=608015319718960468&FORM=IRPRST&ck=67AB991A421359E6247497FA704FF95D&selectedIndex=0&itb=0&idpp=overlayview&ajaxhist=0&ajaxserp=0)


## **Example of code**

```c
#include "main.h"

int main()
{
        int count = 0;
        count += _printf("This is a character: \"%c\"\n", 'c');
        count += _printf("This is a string: \"%s\"\n", "Hello, I am string");
        count += _printf("This is a string terminated by a newline: \"%S\"\n", "I am, indeed, terminated by a new line \n");
        count += _printf("This is an integer: \"%d\", and a second one: \"%i\"\n", 1234, 3421);
        count += _printf("1234 converted to unsigned binary is: \"%b\"\n", 1234);
        count += _printf("1234 converted to unsigned octal is: \"%o\"\n", 1234);
        count += _printf("1234 converted to unsigned int is: \"%u\"\n", 1234);
        count += _printf("1234 converted to unsigned hexadecimal to lowercase is: \"%x\"\n", 1234);
        count += _printf("1234 converted to unsigned hexadecimal to uppercase is: \"%X\"\n", 1234);
        count += _printf("In the end, %d characters were printed in this function.\n", count);
        return (0);
}
```

```
This is a character: "c"
This is a string: "Hello, I am string"
This is a string terminated by a newline: "I am, indeed, terminated by a new line \x0A"
This is an integer: "1234", and a second one: "3421"
1234 converted to unsigned binary is: "10011010010"
1234 converted to unsigned octal is: "2322"
1234 converted to unsigned int is: "1234"
1234 converted to unsigned hexadecimal to lowercase is: "4d2"
1234 converted to unsigned hexadecimal to uppercase is: "4D2"
In the end, 467 characters were printed in this function.
```


## **Tools to help**
Steps of a project [Holberton Pages](https://github.com/Theo-D/holbertonschool-printf/blob/main/Image/Approching%20project.pdf).  
Ascii table [Ascii table](https://computersciencewiki.org/images/3/3d/Ascii_table.png).  
Printf en C - [Wikipedia](https://fr.wikipedia.org/wiki/Printf#C).
