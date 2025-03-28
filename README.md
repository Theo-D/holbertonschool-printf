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


## **Authors**
This project is done in team :  
@Théo Dessaigne  
@Ingrid Mornac


## **Installation**
Create 1 project repository for our team with the main branch and a "dev" branch on our Github  
We could have a test folder containing all our tests files uncluding main functons.


## *Flowchart*
```[Flowchart of the printf](https://github.com/Theo-D/holbertonschool-printf/blob/devIngrid/Image/Flowchart%20Printf.drawio.png)


## **Resources**
**Read or watch:**  
- [Secrets of printf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20250327%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20250327T110820Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ff189e6b3d46ba37af27234b1a5a403b843a2e93bbdd9571a7744d8dcba8156b)  
- [Group Projects concept page](https://intranet.hbtn.io/concepts/893)  
- [Flowcharts concept page](https://intranet.hbtn.io/concepts/895)  

**Man or help:**  
printf (3) [man_3_printf](https://github.com/Theo-D/holbertonschool-printf/blob/main/man_3_printf)  


## **Requirements**
The code should use the Betty style.  
It will be checked using betty-style.pl and betty-doc.pl  
We are not allowed to use global variables  
No more than 5 functions per file  
Allowed editors : vi, vim, emacs  
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
- write (man 2 write) [click to read](https://www.man7.org/linux/man-pages/man2/write.2.html)  
- malloc (man 3 malloc) [click to read](https://www.man7.org/linux/man-pages/man3/malloc.3.html)  
- free (man 3 free) [click to read](https://www.man7.org/linux/man-pages/man1/free.1.html)  
- va_start (man 3 va_start) [click to read](https://fr.manpages.org/va_start/3)  
- va_end (man 3 va_end) [click to read](https://fr.manpages.org/va_end/3)  
- va_copy (man 3 va_copy) [click to read](https://fr.manpages.org/va_copy/3)  
- va_arg (man 3 va_arg) [click to read](https://fr.manpages.org/va_arg/3)


## **Prototypes**
The prototypes of all the functions should be included in the header file called main.h.  
int _printf(const char *format, ...)  
function that produces output according to a format.  
int _putchar(char c)  
function that writes the character c to stdout.
int getPrintFun(char c, va_list args)
call function thanks to a function pointer according to given format specifier


## **Functions**
|Function | Description |
|int printChar(va_list args) | function that prints number of characters |
|int printStr(va_list args) | function that prints a string passed as arguments |  
|int printInt(va_list args) | function that handles the conversion specifier |  
  
**Advanced functions**  
|Function | Description |
|


## **Specifier formats**
|Specifier f.|   Designation       | Example of use| 
|------------|---------------------|---------------|
|%c          | char character      | char c; printf("The character is %c\n", c); ==> The charracter is c |
|%s          | string              | char name[] = "Betty"; printf("Hello %s !\n", Betty) ==> Hello Betty ! |
|%d          | decimal integer     | int year = 2025; printf("Happy new year %d\n", year); ==> Happy new year 2025 |
|%i          | integer in any base | int age = 25; printf("I'm %i years old \n", age); ==> I'm 25 years old |  
Others [format specifier in C](https://www.bing.com/images/search?view=detailV2&ccid=k%2bt%2frOsh&id=DB38FDA226ABC0F704EBE53C555EB027A93AE3BD&thid=OIP.k-t_rOsh7LhzS5FU_WicxAHaEK&mediaurl=https%3a%2f%2fcdn.shortpixel.ai%2fclient%2fq_glossy%2cret_img%2cw_1536%2ch_864%2fhttps%3a%2f%2fcodewindow.in%2fwp-content%2fuploads%2f2021%2f03%2fScreenshot-99-1536x864.png&cdnurl=https%3a%2f%2fth.bing.com%2fth%2fid%2fR.93eb7faceb21ecb8734b9154fd689cc4%3frik%3dveM6qSewXlU85Q%26pid%3dImgRaw%26r%3d0&exph=864&expw=1536&q=tableau+des+sp%c3%a9cifier+format+inc&simid=608015319718960468&FORM=IRPRST&ck=67AB991A421359E6247497FA704FF95D&selectedIndex=0&itb=0&idpp=overlayview&ajaxhist=0&ajaxserp=0)


## **Example**


## **Tools to help**
Steps of a project [Holberton Pages](https://intranet.hbtn.io/concepts/881).  
Ascii table [Ascii table](https://computersciencewiki.org/images/3/3d/Ascii_table.png).  
Printf en C - [Wikipedia](https://fr.wikipedia.org/wiki/Printf#C).
