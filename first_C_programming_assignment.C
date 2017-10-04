/**
 * primitives (int char float double)
 * loops, break, continue
 * branches if else else if, while
 * arrays
 * structs (to become classes)
 * ^^^ ^^^ ^^^ ^^^ ^^^
 * Operating Systems C Lesson Assignment 1
 * 
 * Operating Systems and C and Theory and Algorithms Lessons
 * \/\/\/\/
 * extended types
 * pointers, references, dereferencers
 * memory management malloc/free
 * const
 * meta programming (#ifdef)
 * declaration
 * definition
 * initialization
 * faults - SIGSEGV, SIG, et
 * header files
 * file scope
 * extern
 * includes
 * libraries
 * objects
 * compilation
 * compilation arguments
 * files within directories, linked and built
 * linking
 * printf formatting
 * comparisons && || !
 * bit shifting >> <<
 * binary operators &, |, ~
 */

// In order to run a program, you must:
// Write this C file
// Make it syntactically correct
// Compile the program with gcc my_first_C_program.C -o my_output
// ./my_output

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  printf("Hello world!\n");
  printf("%d \n", 32); // integer
  printf("%ld \n", 312322323123); // large integer
  printf("%f \n", 32.2); // float
  printf("%lf \n", 3234234.22); // large float
  printf("%c \n", 'a'); // character (char)
  printf("%s \n", "Hello World!"); // string

  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  struct Person {
    char name[100];
    char height[100];
    char favoriteColor[100];
  };

  struct Person FirstPerson;

  strcpy( FirstPerson.name, "Thomson");
  strcpy( FirstPerson.height, "7ft, 13in");
  strcpy( FirstPerson.favoriteColor, "clear");

  printf("Hi, my name is: %s\n", FirstPerson.name);
  printf("I am: %s tall\n", FirstPerson.height);
  printf("%s is my favorite color\n", FirstPerson.favoriteColor);
}

