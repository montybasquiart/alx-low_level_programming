# A README file describing what each script is doing
##
# Resources
Read or watch:
 * [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240218%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240218T223050Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d2d30b9c01e9d071c294b828b5e2b945412b268470470c70787b7634d11937f9]
 * [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
 * [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
 * [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
 * [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=XGxbXMP6k8k)
 ##
#  Additional Resources
 * [Recursion & Recursive functions in C Programming](https://www.youtube.com/watch?feature=shared&v=0BtTPJOLPj0)
##
0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget - [0-puts_recursion.c](./0-puts_recursion.c) - A function that prints a string, followed by a new line.
* Prototype: void _puts_recursion(char *s);
_FYI: The standard library provides a similar function: puts. Run man puts to learn more.
##
1. Why is it so important to dream? Because, in my dreams we are together - [1-print_rev_recursion.c](./1-print_rev_recursion.c) - A function that prints a string in reverse.
* Prototype: void _print_rev_recursion(char *s);_
##
2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange - [2-strlen_recursion.c](./2-strlen_recursion.c) - A  function that returns the length of a string.
* Prototype: int _strlen_recursion(char *s);
_FYI: The standard library provides a similar function: **strlen**. Run **man strlen** to learn more._
##
3. You mustn't be afraid to dream a little bigger, darling - [3-factorial.c](./3-factorial.c) - A function that returns the factorial of a given number.
* Prototype: **int factorial(int n);**
* If **n** is lower than **0**, the function should return **-1** to indicate an error
* Factorial of **0** is **1**
##
4. Once an idea has taken hold of the brain it's almost impossible to eradicate - [4-pow_recursion.c](./4-pow_recursion.c) - A  function that returns the value of **x** raised to the power of **y**.
* Prototype: **int _pow_recursion(int x, int y);**
* If **y** is lower than **0**, the function should return **-1**
_FYI: The standard library provides a different function: **pow**. Run **man pow** to learn more.__**
##
5. Your subconscious is looking for the dreamer - [5-sqrt_recursion.c](./5-sqrt_recursion.c) - A function that returns the natural square root of a number.
* Prototype: int **_sqrt_recursion(int n);_**
* If **n** does not have a natural square root, the function should return **-1**
_FYI: The standard library provides a different function: **sqrt**. Run **man sqrt** to learn more_
##
6. Inception. Is it possible? - [6-is_prime_number.c](./6-is_prime_number.c) - A function that returns **1** if the input integer is a **prime number**, otherwise return **0**.
* Prototype: **int is_prime_number(int n);**
##
7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything - [100-is_palindrome.c](./100-is_palindrome.c) - A function that returns **1** if a string is a palindrome and **0** if not.
* Prototype: **int is_palindrome(char *s);**
* *An empty string is a palindrome**
##
8. Inception. Now, before you bother telling me it's impossible... - [101-wildcmp.c](./101-wildcmp.c) - A  function that compares two strings and returns **1** if the strings can be considered identical, otherwise return **0**.
* Prototype: **int wildcmp(char *s1, char *s2);**
* **s2** can contain the special character *.
* The special char * can replace any string (including an empty string)
