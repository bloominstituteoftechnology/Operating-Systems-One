// In order to run a program, you must:
// Write this C file
// Make it syntactically correct
// Compile the program with gcc my_first_C_program.C -o my_output
// ./my_output

/*
 * primitives (int char float double)
 * loops, break, continue
 * branches if else else if, while
 * arrays
 * structs (to become classes)
 * ^^^ ^^^ ^^^ ^^^ ^^^
 * Operating Systems C Lesson Assignment 1
 */

#include <stdio.h>

// primitives (int char float double)
int intFunc(int integer) {
  return integer;
}
char charFunc(char character) {
  return character;
}
float floatFunc(float floatNum) {
  return floatNum;
}
double doubleFunc(double doubleNum) {
  return doubleNum;
}

int main(int argc, char** argv) {
  printf("Hello world!\n");

  // primitives (int char float double)
  printf("%d\n", intFunc(15));
  printf("%c\n", charFunc('L'));
  printf("%f\n", floatFunc(3.141592));
  printf("%0.12lf\n", doubleFunc(3.1415926535897932));

  // loops, break, continue
  // branches if else else if, while
  for(int i = 0; i < 10; i++) {
    int numberDoubled = 2 * i;
    if(numberDoubled < 11) {
      printf("%d\n", i);
      // continue moves to beginning of loop
      continue;
    } else if(i > 7) {
      // break exits loop
      break;
    } else {
      printf("%d\n", numberDoubled);  
    }
  }
  int counter = 1;
  while(counter < 6) {
    printf("The counter is %d\n", counter);
    counter++;
  }

  // arrays
  char myName [10] = {'L', 'o', 'i', 's', ' ', 'T', 'r', 'u', 'b', 'y'};
  for (int i = 0; i < 10; i++) {
    printf("%c", myName[i]);
  }
  printf("\n");
  // structs (to become classes)
}
