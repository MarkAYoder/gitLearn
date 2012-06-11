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
  printf("Yoder was here!");

<<<<<<< HEAD

  printf("Just playing around again, too.\n");

 printf("Yifei in D115--modified");

printf("Venkatesh G M");

  printf("Put your name here.\n");




  printf("Ankit \n");

=======
  printf("Venkatesh G M");
  printf("Put your name here.\n");
  printf("rathna and kavitha\n");
  printf("Ankit \n");
  printf("Anbu Eashver \n");
 printf("Pravin Tavagad");
>>>>>>> 417017f21fc3063afa4dd070623e4444e0d4bd24
  return 0;
}
