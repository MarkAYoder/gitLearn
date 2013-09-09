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


  printf("Hi this is David Savrda\n");


	printf("And Eric Ames!\n");

  printf("Hi this is James Savage\n");
  printf("Hi this is Will Elswick\n");

  // Add your name here.  Be sure it still compiles.
  printf("Hey, this is Mike McDonald!!!\n");
  printf("Hello, this is Alex Alvarez\n");

 return 0;
}
