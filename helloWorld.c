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
<<<<<<< HEAD:helloBeagle.c
  printf("Greg Harrison\n");
  printf("Jack Ma :-D\n");
  printf("Guanqun Wang (^_^)V \n");
  printf("Ziyi Zhang\n");
  printf("Mona, Hello Galaxy\n");
  printf("MIB is back\n");
printf("Venkatesh G M");
=======
  printf("Put your name here.\n");
>>>>>>> ea4ade09e6c0290d1b521d590b97adbe7ac4a84f:helloWorld.c

=======
  printf("Ankit \n");
>>>>>>> 9eca1540f4940207b8afc5698f2bbece873f0417
  return 0;
}
