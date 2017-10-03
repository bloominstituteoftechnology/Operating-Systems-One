/**
 * primitives (int char float double)
 * loops, break, continue
 * branches if else else if, while
 * arrays
 * structs (to become classes)
 * ^^^ ^^^ ^^^ ^^^ ^^^
 * Operating Systems C Lesson Assignment 1
**/

#include <stdio.h>

int main (void) {
  puts("Hello there, Earth!\a");

  int c;
  int finite_state;

  while ( (c = getchar()) != EOF ) {
    finite_state = 0;
    if (c == '\t') {
      putchar('\\');
      putchar('t');
      finite_state = 1;
    }
    // if (c == '\b') {
    //   putchar('\\');
    //   putchar('b');
    //   finite_state = 1;
    // }
    if (c == '\\') {
      putchar('\\');
      putchar('\\');
      finite_state = 1;
    }
    if (c == ' ') {
      printf("*SPACE, THE FINAL FRONTIER...*\a");
      finite_state =1;
    }
    if (c == '\n') {
      puts("*ENTER*");
      finite_state =1;
    }
    if (finite_state == 0)
      putchar(c);
  }

  return 0;
}
