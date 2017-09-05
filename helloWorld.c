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
  printf("Hi this is Ryan Evans\n");
  // Add your name below here.  Be sure it still compiles.

  printf("Hello I am Andrew Mueller\n");
  printf("Hello I am Adam Wiesler\n");
  printf("Hi this is Daniel Neelappa\n");
  printf("Hello I am Curits Humm\n");
  printf("Hello I am Joey Pierce\n");
  printf("Hello I am Donglai Guo\n");
  printf("Hello I am Chace Beard\n");
  return 0;
}
