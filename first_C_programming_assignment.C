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
 * memory malloc/free
 * constnagement ma
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

int main(int argc, char** argv) {
  printf("Hello world!\n");
  // for loop with ints.
  for (int i = 0; i < 5; i++) {
    printf("%d", i);
  }
  printf("\n");


  for (int i = 5; i < 10; i++) {
    if(i == 7) continue;
    else if(i == 9) break;
    else {
      printf("%d", i);
    }
  }
  printf("\n");
  int array[5] = {11, 12, 13, 14, 15};
  // have to do sizeof array / sizeof int because sizeof gives you bits
  for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }
  printf("\n");


  struct LSPerson {
    int classNumber;
    char* name;
  };

  struct LSPerson Jesh;
  Jesh.classNumber = 1;
  Jesh.name = "Jesh";
  printf("%s from class cs%d", Jesh.name, Jesh.classNumber);

}

