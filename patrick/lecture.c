// every C program is an operating system process/executable

// argc is argument count
// char** is a pointer to a pointer

/*
 * Multi line comments
 */

// #includes allow us to combine different files into a single program
// #including can be pointed at a file you wrote, or it can be pointed
// at a file somebody else wrote. You have to know where the file is. And
// whether or not it is the one you need.

// examples of return values and strictly types function definitiona
int integerFunction (int input) {
  return 0;
}
float floatFunction (float input) {
  return 0.0;
}
// overloading functions?
float mixedFunction (int input) {
  return 0;
}
float mixedFunction (float input) {
  return 0.0;
}
float mixedFunction (char* input) {
  return 'a'; // <~~~ equals '97' on ASCII table
}


// structures in C - objects
// snake case
struct lat_lon {
  float lat;
  float lon;
};
// camel case
struct latLon {
  float lat;
  float lon;
};


#include <stdio.h>

int main (int argc, char** argv) {
  // char** means one of two things: someone is doing a complicated algorithm with this object

  // or it means it is a two dimensional array like this char[][]
  //
  // argv = [
  //  ['g','c','c'],
  //  ['c','f','i','l','e']
  //  ['H', 'i']
  // ]
  // in C a string is an array of characters
  // a string is in 'double quotes'
  // a character (char) is in 'single quotes'

  // return 0;
  // vs
  // return 100;
  // use console 4 echo $? to display return value

  // printf REQUIRES the standard Input Output (stdio.h) library
  printf("argc is: ");
  // what is argc???
  printf("%d\n", argc);
  printf("%f\n", argc); // <~~~ prints 0.0000 WHY?

  // dynamic!!!!
  for(int i = 0; i < argc; ++i) {
    printf("%s\n", argc[i]);
  }

  printf("%f\n", mixedFunction(0.0));
  printf("%c\n", (int)mixedFunction(0.0)); // forced type conversion
}

lat_lon myLocation;
myLocation.lat = 22.5;
myLocation.lon = 21.3;
printf("%p\n", myLocation);
printf("%p\n", &myLocation); //& memory location
