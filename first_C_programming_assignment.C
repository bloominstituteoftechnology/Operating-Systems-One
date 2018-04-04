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

/**
* Weather program that is given a city, a week of temperatures F, and the
* historical average for the month. It will convert the temps F into C and
* count the number of days the temp was higher than the avg. It will print out
* the name of the city, the average daily temperature in F, the average daily
* temperature in C, the historical average temperature for the month in F,
* the historical average temperature for the month in C, and the number of days
* that the average daily temperature was higher than the monthly historical
* average.
*/

/**
* Sample data for Minneapolis from September 14-20 2017
* Avg Historical Temp: 62.0F
* High(F): 91.0 84.0 80.1 66.9 59.0 80.1 75.0
* Low(F): 66.0 70.0 57.9 52.0 55.0 59.0 57.9
*/

/**
* Data should be input in the following format:
* ./my_output City Avg H1 H2 H3 H4 H5 H6 H7 L1 L2 L3 L4 L5 L6 L7
* ex: ./my_output Minneapolis 62.0 91.0 84.0 80.1 66.9 59.0 80.1 75.0 66.0 70.0 57.9 52.0 55.0 59.0 57.9
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  struct data {
    double hiF[7];
    double lowF[7];
    double avgF[7];
    double avgC[7];
    double histAvgF;
    double histAvgC;
    char *city;
    int daysAboveAvg;
  } temps;
  int h = 3;
  int l = 10;
  temps.histAvgF = strtod(argv[2],NULL);
  temps.histAvgC = ((5.0 / 9.0) * (temps.histAvgF - 32.0));
  temps.city = argv[1];
  for( int i = 0; i < 7; ++i) {
    temps.hiF[i] = strtod(argv[h], NULL);
    ++h;
  }
  for( int i = 0; i < 7; ++i) {
    temps.lowF[i] = strtod(argv[l], NULL);
    ++l;
  }
  for( int i = 0; i < 7; ++i) {
    temps.avgF[i] = (temps.hiF[i] + temps.lowF[i]) / 2;
  }
  for( int i = 0; i < 7; ++i) {
    temps.avgC[i] = ((5.0 / 9.0) * (temps.avgF[i] - 32.0));
  }
  for( int i = 0; i < 7; ++i) {
    if(temps.avgC[i] > temps.daysAboveAvg)
      ++temps.daysAboveAvg;
  }
  printf("\nCity: %s\n", temps.city);
  printf("Avg. Temp F: ");
  for( int i = 0; i < 7; ++i) {
    printf("%3.1f ", temps.avgF[i]);
  }
  printf("\nAvg. Temp C: ");
  for( int i = 0; i < 7; ++i) {
    printf("%3.1f ", temps.avgC[i]);
  }
  printf("\nHistorical AvgF: %3.1f\n", temps.histAvgF);
  printf("Historical AvgC: %3.1f\n", temps.histAvgC);
  printf("# of Days hotter than historical avg: %d\n\n", temps.daysAboveAvg);
}
