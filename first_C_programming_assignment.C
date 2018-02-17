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
  for (int i = 0; i < 5; i++) {
    if (i == 4) break;
    printf("%d\n", i);
  }
  for (int j = 5; j < 10; j++) {
    if(j == 7)continue;
    else if (j == 8) {
      printf("eight!");
    }
    else {
      printf("%d", j);
    }
  }
  printf("\n");

  int n[10];
  int a, b;
  for (a = 0; a < 10; a++) {
    n[a] = a + 50;
  }
  for (b = 0; b < 10; b++) {
    printf("Element[%d] = %d\n", b, n[b]);
  }

  struct Monkeys {
    char species[50];
    char name[50];
    char favMovie[50];
  };
  struct Monkeys Monkey1;

  strcpy( Monkey1.species, "Great Ape");
  strcpy( Monkey1.name, "Magilla the Gorilla");
  strcpy( Monkey1.favMovie, "Maid in Manhattan");

  printf( "Monkey 1 species: %s\n", Monkey1.species);
  printf( "Monkey 1 name: %s\n", Monkey1.name);
  printf( "Monkey 1 favMovie: %s\n", Monkey1.favMovie);

  float q;
  q = 80.0/30.0;
  printf("value of q: %f \n", q);

  double d;
  d = 678765.87868778;
  printf("value of d: %f \n", d);
}

