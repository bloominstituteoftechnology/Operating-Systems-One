#include <stdio.h>
#include <string.h>

typedef struct {
  char lastName[30];
  char firstName[20];
  float gpa;
  int class_num;
} student_record;

int main(int argc, char** argv) {
  student_record record01, record02, record03, record04, record05;
  student_record student_array[5] = {record01, record02, record03, record04, record05};
  int records = 0;

  while(records > 5 || records <= 0) {
    printf("\nHow many Student Records would you like to enter? (Max 5): ");
    scanf(" %d", &records);
    printf("You have selected %d records to record.\n", records);
  }

  for(int i = 0; i < records; i++) {
    printf("Enter Last Name, First Name, GPA, and number of classes for student: ");
    scanf(" %s %s %f %d",
          student_array[i].lastName, student_array[i].firstName, &student_array[i].gpa, &student_array[i].class_num);
    if (student_array[i].gpa == 4.00) {
      printf("Wow! A perfect GPA from student, %s %s!\n", student_array[i].firstName, student_array[i].lastName);
    }
    printf("Student, %s %s with a GPA of %.2f, enrolled in %d classes, has been recorded.\n\n",
          student_array[i].lastName, student_array[i].firstName, student_array[i].gpa, student_array[i].class_num);
  }

  return 0;
}
