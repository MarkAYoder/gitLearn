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
  printf("Stephen Shinn checking-in from the Beagle\n");
  printf("Hello from Josh Dugan\n");
  printf("Hi all, from Ross Hansen\n");
  printf("Hello from Tom Atnip\n");
  printf("Hi this is Greg Larmore\n");
  printf("Hello from Kevin Geisler\n");
  printf("Hello from Andrew Miller\n");
  printf("Hello from Matthew Moravec\n");
  printf("Hello from James Popenhagen\n");
  printf("Hello from Michael Junge\n");
  printf("Hello from Ruffin White\n");
  printf("Hello from Peter Ngo\n");
  printf("Hello from Sean Richardson\n");
  printf("Hello from Elias White\n");

 return 0;
}
