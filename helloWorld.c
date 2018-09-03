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
  // Add your name below here.  Be sure it still compiles.
  printf("Hello my name is Devon G. Adair!!");
  printf("Wesley Van Pelt\n");
  printf("Hi this is Thad J. Hughes\n");
  printf("Hi this is Russell Johnson\n");
  printf("Hi this is Matthew Howlett\n");
  printf("Hi this is Joseph A. Lemmond\n");
  printf("Hi this is Manoj Kurapati\n");
  printf("Hi this is Brian Jennings\n");
  printf("Hi this is Marius Schwab\n");
  printf("Hi here ist Vinzenz Felder\n");
  printf("Hi this is Anne Boxeth\n");
  printf("Hi this is Kuanghi Lu\n");
  printf("Hi this is Andrew Lund");
  printf("Hi this is Michael Rosier");

  return 0;
}
