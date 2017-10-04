#include <stdio.h>
#include <string.h>

#define MYNAME "Jason Campbell"

int globalVar = 100;

int main(int argc, char *argv[]){

    char firstLetter = 'J';
    int age = 34;
    long int superBigNum = -327670000;
    float piValue = 3.1459;
    double reallyBigPi = 3.1459145914591459;
    printf("\n");

    printf("This will print to screen \n\n");

    printf("Hello world. \n\n");

    printf("I am %d years old\n\n", age);

    printf("Big Number %ld\n\n", superBigNum);

    printf("Pi = %.5f\n\n", piValue);

    printf("Big Pi = %15f\n\n", reallyBigPi);

    int array[50];
    int i;
    for(i = 0 ; i < 50 ; ++i ) {
      array[i] = i*i;
    }
    int ii;
    for(ii = 0 ; ii < 50 ; ii++ ) {
      printf("%d\n", array[ii]);
    }


 return 0;
}

// int main(int argc, char *argv[]) {
//  printf("Hello world. \n\n");

