#include <stdio.h>

int bss_var;        /* Uninitialized global variable */
int data_var = 1;   /* Initialized global variable */
int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */
  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */
  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);
  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);
  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  printf("Hi I am Anand K Parmar\n");
  printf("Hi! I am Gopal Krishan Aggarwal\n"); 
<<<<<<< HEAD
  printf("Hey, I'm Kansul Mahrifa\n");
=======
  printf("Hello I'm Ahmed\n");
>>>>>>> d90b51b1d1fed6ec6aad60066d57521eca74373d
  // Add your name here.  Be sure it still compiles.

  return 0;
}
