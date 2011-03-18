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
<<<<<<< HEAD
  printf("Hello, this is Sam Allen\n");
=======
  printf("Hi this is Aaron Bamberger\n");
  printf("Hi this is Stephen Mayhew\n");
  printf("Hi this is Michael Lester\n"); 
  printf("Hi this is Lei Liu\n"); 
  /* Stephen and I have the same number of letters in both
     of our names, that satisfies my OCD :) */
  printf("Ty Strayer\n");
>>>>>>> c698c075f4eb1a35de4e8f2f7563737a51d1b3c1

  return 0;
}
