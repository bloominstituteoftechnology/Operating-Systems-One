// Every C program is an operating system process/executable
// C uses the same kind of comments as JavaScript

// #includes allow us to combine different files into a single program
// #including can be pointed at a file that you wrote, or it can be 
// pointed at a file someone else wrote. You have to know where the
// file is, and whether or not it is the one you need!
#include <stdio.h>
/*Lines 10 - 18 are an example of various C primitives
int integerFunction(int input) {
  return 0;
}
float floatFunction(float input) {
  return 0.0;
}
float mixedFunction(float input) {
  return 0.0; 
}
*/

int main(int argc, char** argv) {
/* char** means one of two things:
  (1) someone is doing something complicated
  aka an algorithm with this object (it is a pointer to a pointer)
  (2) or it means it is a two-dimensional array >> argv[][]

  argv = [['g', 'c', 'c'], ['a', 'b', 'c'], ['g', 'c', 'c'],['h', 'i']];

NOTE: In C, a string is an array of characters.
(1) a string is in double quotes
(2) a character (char) is in single quotes
*/

// vvv the simplest possible C program 
  return 100;

  // printf("argc is: ");
  // printf("%d\n", argc);
  
  // for(int i = 0; i < argc; ++i) {
  //   printf("%s\n", argv[i]);
  // }
}