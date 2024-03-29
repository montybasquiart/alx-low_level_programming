 0x18-dynamic_libraries

## A README file describing what each script is doing

# Resources
__Read or watch:__

 * [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
 * [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)

# General
  * What is a dynamic library, how does it work, how to create one, and how to use it
  * What is the environment variable **$LD_LIBRARY_PATH** and how to use it
  * What are the differences between static and shared libraries
  * Basic usage **nm, ldd, ldconfig**

# Tasks

__0. A library is not a luxury but one of the necessities of life__ - [libdynamic.so](./libdynamic.so) - A dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
_If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your ```main.h``` file in your repository, containing at least all the prototypes of the above functions._

## Why Dynamic Library?
A Dynamic Library is like a collection of useful tools that different programs can share. It's a way to organize code so that you don't have to rewrite the same things for every program you create.

## How To Create a Dynamic Library
To make a Dynamic Library in Linux, use the 'gcc' command. It's like a recipe. First, it uses '-c' to create special building blocks called object files (.o) from your program's recipe book called source files (.c). Then, it adds a special touch with '-fPIC' to make sure the code is flexible.

So, the command is like asking the computer to make a bunch of building blocks (.o files) from each recipe (.c file) you have in your current folder.

*Note:* Once you've made these building blocks (.o files), you can combine them into a Dynamic Library. It's like building a library of tools that you can reuse in various projects. Other programs can then borrow these tools from your library.

```
gcc -c -fPIC *.c
```
Now, let's take those building blocks we made earlier and assemble them into one big library. To do this and make it a Dynamic Library, we still use 'gcc', but this time we add a special **'-shared'** trick. The **'-o'** part is like telling the computer the name you want to give to your big library file.

```
gcc -shared -o libdynamic.so *.o
```
To check if everything is set up correctly and your library has the right tools (functions), you can use a command below:

```
nm -D libdynamic.so
```

It's like asking the computer to show you a list of all the cool tools inside your library.
At this point, you've successfully created your Dynamic Library, and it's ready to be used by different programs. Think of it like having a toolbox that you've filled with special tools, and now you can share these tools with various projects.

We used 'gcc' to compile our code:
```
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
```
We then used the command 'ldd len' to print the shared library dependencies of an executable named len.
```
ldd len
```
When you run 'ldd len', it will show a list of shared libraries that the executable 'len' depends on

## How to use
Time to use your toolbox! Combine your main program with the toolbox you made. Tell your computer where to find the tools by adding their location to a special list. It's like giving your computer directions to the toolbox so it can use the tools when your program runs.
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```
 We use the 'ldd len' to confirm the library dependencies again to be sure we have the right tools.

##
__1. Without libraries what have we? We have no past and no future__ - [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) - A script that creates a dynamic library called *liball.so* from all the .c files that are in the current directory.

* We will be using a bash script to create a Dynamic Library called 'liball.so' from all the **.c** files, using the [ gcc -c -fPIC *.c ] command and [ gcc -shared -o liball.so *.o ] to assemble the files in one big library.

* We will create a [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) file to contain the script created for the above Dynamic Library.
* After successfully creating the shell script, it's time to make the file executable to be able to run the script.
We will be using the command below.
```
chmod u+x 1-create_dynamic_lib.sh
```
Let's run this command:
```
./1-create_dynamic_lib.sh

nm -D --defined-only liball.so
```

* The command [ **./1-create_dynamic_lib.sh** ] is executing the shell script named [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) in the current directory.
* Then we go ahead to run the command [ **nm -D --defined-only liball.so** ] to display information about only the defined dynamic symbols in the 'liball.so' shared library.

##
__2. Let's call C functions from Python__ - [operations.c](./operations.c) - A dynamic library that contains C functions that can be called from Python.
* We will be creating a function with a file [operations.c](./operations.c) that adds, subtracts, multiply, divide and check the modulus of a number.
* Once we have our function, we'll test our functions by calling them from Python.
* Let's create a test file called [100-tests.py](./100-tests.py) and copy the code below to test our function(s).
vagrant@ubuntu-focal:~$ cat 100-tests.py
```
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
```
* Once we have our files created, we can test our code to see if properly working:
```
python3 100-tests.py
```
c'est fini :)

__3. Code injection: Win the Giga Millions!__ - [101-make_me_win.sh](./101-make_me_win.sh) - Run two commands on the same server the Giga Millions program runs.
* We are given a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9.
  * Our mole got us a copy of the program, you can download it [here](./https://github.com/alx-tools/0x18.c). Our mole also gave us a piece of documentation:
  ```
  /* Giga Millions program
  * Players may pick six numbers from two separate pools of numbers:
  * - five different numbers from 1 to 75 and        
  * - one number from 1 to 15
  * You win the jackpot by matching all six winning numbers in a drawing.      
  * Your chances to win the jackpot is 1 in 258,890,850          
  *                                   
  * usage: ./gm n1 n2 n3 n4 n5 bonus
  ```
  ## Instructions
     * You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
     * The system is an Linux Ubuntu 16.04
     * The server has internet access
     * Our mole will be only able to run two commands from a shell script, without being detected by MSS
     * Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
     * Our mole has only the authorization to upload one file on the server. It will be your shell script
     * Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
     * Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
     * MSS will use the same terminal and session than our mole
     * Before running the gm program, MSS always check the content of the directory
     * MSS always exit after running the program gm
     * TL;DR; This is what is going to happen

Tip: LD_PRELOAD