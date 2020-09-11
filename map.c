#include <stdio.h>
 #include <malloc.h>
 #include <unistd.h>

  extern void p(void);
  int a;
  int b = 63;
int main(int argc, char argv)
  {
      printf("Address of main: %p\nAddress of stack: %p\n", main, p);
      p();
      printf("Address of b: %p\nAddress of a: %p\n", & b, & a);
      while (1) {}
  }

  void p(void)
  {
      static int level = 0;
      auto int stack_var;
if (++level == 5)
          return;
printf("\tStack level %d: address of stack_var: %p\n", level, & stack_var);
      p();
  }
