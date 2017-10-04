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

int main(int argc, char** argv) {
  // Size of a variable
    printf("***************************************************************\n");
    printf("* Program to find the size of an int, float, double, and char *\n");
    printf("***************************************************************\n");

    int integerNum;
    float floatNum;
    double doubleNum;
    char character;

    printf("Size of int: %ld bytes\n",sizeof(integerNum));
    printf("Size of float: %ld bytes\n",sizeof(floatNum));
    printf("Size of double: %ld bytes\n",sizeof(doubleNum));
    printf("Size of char: %ld byte\n",sizeof(character));

    printf("**************************************************************\n");

    printf("**********************************************************\n");
    printf("* Program to check if user entered an even or odd number *\n");
    printf("**********************************************************\n");
    
    int number;
    printf("Enter a number:  ");
    scanf("%d", &number);

    if (number % 2 == 0) {
       printf("%d is an even number.\n", number);
    }
    else if (number % 2 != 0) {
       printf("%d is an odd number.\n", number);
   } else {
      printf("You didn't enter a valid number\n");
   }
   printf("*********************************************************\n");

   printf("***********************************************************\n");
   printf("*                    Print the Alphabet                   *\n");
   printf("***********************************************************\n");

   char c;

    for(c = 'A'; c <= 'Z'; ++c)
       printf("%c", c);

   printf("\n***********************************************************\n");

   printf("***********************************************************\n");
   printf("*                  Armstrong Number                       *\n");
   printf("***********************************************************\n");
   int digit, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &digit);

    originalNumber = digit;

    while (originalNumber != 0) {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == digit)
        printf("%d is an Armstrong number.",digit);
    else
        printf("%d is not an Armstrong number.",digit);
   printf("\n*********************************************************\n");

   printf("***********************************************************\n");
   printf("*FInd the smallest element and its position using an array*\n");
   printf("***********************************************************\n");
   int a[20],n,smallest = 0,smallestPosition, i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the terms in Array : \n");
	for(i=1; i <= n; i++)
	  scanf("%d",&a[i]);
	smallest = a[i];
	for(i=1; i <= n; i++) {
	  if(a[i] <= smallest) {
	    smallest = a[i];
	    smallestPosition = i-1;
	  }
	}
	printf("\nPosition of smallest element is: %d",smallestPosition);
	printf("\nSmallest Number is : %d",smallest);

   printf("\n*********************************************************\n");

   printf("***********************************************************\n");
   printf("*                Using break and continue                 *\n");
   printf("***********************************************************\n");
   int array[] = {1, 2, 3, 4, 5, 7, 10, 6, 3, 11, 8, 4, 0};
   int j = 0;
   while (j < 10) {
      if (array[j] < 5) {
         j++;
         continue;
      }
      if (array[j] > 10) {
         break;
      }
      printf("%d\n", array[j]);
      j++;
   }
   printf("\n*********************************************************\n");

   printf("***********************************************************\n");
   printf("*                          struct                         *\n");
   printf("***********************************************************\n");
   typedef struct {
    const  char * make;
    const  char * model;
    const  char * color;
    int year;
   } vehicle;
     vehicle car;

    car.make = "Mercedes Benz";
    car.model = "G550";
    car.color = "Black";
    car.year = 2015;
    printf("Your vehicle is a %s %d %s %s.\n", car.color, car.year, car.make, car.model);
   printf("\n*********************************************************\n");

return 0;
}
