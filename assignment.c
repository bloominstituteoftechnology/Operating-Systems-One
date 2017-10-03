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
#include <string.h>
// declarations by TYPE
int integer = 1234;
char character = 'a';
float floating_point = 32767.0;
long double double_double_animal_style = 4503489.240534523423;

/* struct */
struct helloArray{
  char sentence[50];
};

/* array */
int oneToFive[6] = {0,1,2,3,4,5};

int main (void) {
  puts("Hello there, Earth!\a");

  /* struct implementation */
  struct helloArray test;
  strcpy( test.sentence, "Where is my Lambda swag?");
  printf( "%s\n", test.sentence);

  /* print out primitive types */
  printf("Integer %d\nThe Character is: %c\nThe Floater: %f\nThe Double: %Le\n", integer, character, floating_point, double_double_animal_style);
  /* local variable definition */
  int a = 10;
  while( a < 25 ) {
    if( a == 15) {
       /* skip the iteration */
       printf("%d you were skipped\n", a);
       a = a + 1;
       continue;
    }
    if( a == 18) {
      /* skip the iteration */
      printf("%d you were skipped\n", a);
      a = a + 1;
      continue;
    }
    if( a == 21) {
      /* break out of the loop */
      printf("%d WE broke out of the loop bye bye\n", a);
      a = a + 1;
      break;
    }   
    printf("value of a: %d\n", a);
    a++;      
  }

  for (int i=0;i<6;i++) {
    printf("%d\n",oneToFive[i]);
  }

  return 0;
}