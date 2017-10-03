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
// Compile the program with gcc first_C_programming_assignment.C -o my_output
// ./my_output

// READ ABOUT: vvv Popular Header Files
#include <stdio.h>


//  * primitives (int char float double)
int integerAddFunction() 
{ 
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;
  
  sum = a + b + c;

  printf("The sum of a, b, and c is %f. \n", sum);
  return 0;
}
//  * loops, break, continue

//  * branches if else else if, while

//  * arrays

//  * structs (to become classes)


// the main() f(x) invokes other functions within it
// it is the first f(x) to be called when program starts execution
// the diff btwn int main() VS. void main() is the return type 
// (i.e., VOID will not return a value to the OS
int main(int argc, char** argv) {
// READ ABOUT: Program Status Variable Integer
  integerAddFunction();

  printf("Hello world!\n");
  return 0; 
}

