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
  int myNum = 5;
  char myChar = 'a';
  float myFloat = 2.1;
  double myDouble = 56789.87654321;
  char myName[] = "Ryan Sherrill";
  struct People {
    long long int age;
    int iq;
    char name[700];
  } ryan;
  ryan.iq = 1;
  ryan.age = 764387460328726403;
  printf("%d", ryan.iq);
  printf("%lld", ryan.age);
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i);
    while (myNum > myFloat && myNum > 0) {
      myNum--;
      printf("%c\n", myName[myNum]);
      continue;
      if (myNum == 3) {
        printf("three\n");
      } else if (myNum == 2) {
        printf("two\n");
      } else {
        printf("roundandroundandround\n");
      } break;
    }
  }
}
