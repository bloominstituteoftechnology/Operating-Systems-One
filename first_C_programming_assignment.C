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

// (1) * primitives (int char float double)
int integerAddFunction() 
{ 
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;
  
  sum = a + b + c;
// printf stands for 'print formatted'
  printf("The sum of a, b, and c is float %f. \n", sum);
  printf("\n");
  return 0;
}
// (2) * loops, break, continue

int forLoopFunction()
{
  int A[] = {2, 4, 6, 8};




  int i;

  for (i = 0; i < 4; i++)
  {
    printf("Address = %d\n", &A[i]);
    printf("Address = %d\n", A + i);
    printf("Pointer Value = %d\n", A[i]);
    printf("Pointer Value = %d\n", *(A + i));
    printf("\n");
  }
    printf("Total Array Size in Bytes = %d\n", sizeof(A));
    printf("\n");
  return 0;
}

int whileLoopFunction()
{
  return 0;
}

// (3) * branches if else else if, while

// (4) * arrays
int printArray() 
{
  printf("Start of PrintArray Function: \n");

  int A[] = {2, 4, 6, 8};
  printf("Memory Address = %d\n", A);
  printf("Memory Address = %d\n", &A[0]);
  printf("Pointer Value = %d\n", A[0]);
  printf("Pointer Value = %d\n", *A);
  printf("\n");

/* defines an array of 6 integers */
  int numbers[6];
/* populates the array */
  numbers[0] = 0;
  numbers[1] = 1;
  numbers[2] = 2;
  numbers[3] = 3;
  numbers[4] = 4;
  numbers[5] = 5;
/* print the 3rd number from the array */
  return printf("The 3rd number in the array is: %d. \n", numbers[3]);
  
  char name[] = "Stevie Magic";


}

// (5) * structs (to become classes)


// the main() f(x) invokes other functions within it
// it is the first f(x) to be called when program starts execution
// the diff btwn int main() VS. void main() is the return type 
// (i.e., VOID will not return a value to the OS
int main(int argc, char** argv) {
// READ ABOUT: Program Status Variable Integer
  integerAddFunction();

  forLoopFunction();
  
  printArray();

  printf("Hello world!\n");
  return 0; 
}

