/*
Purpose: to calculate the price of burger purchases including a discount.
concepts: if, else if, else
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int choice;
  do {
    char choiceStr[10], radiusStr[256], cont[256], widthStr[256], lengthStr[256],
    lengthTriangleStr[256], heightStr[256];
    double radius, width, length, lengthTriangle, height;
    double circle_area, triangle_area, rectangle_area;
    const double PI = 3.14159;

    printf("1. Calculate the area of a circle \n");
    printf("2. Calculate the area of a rectangle \n");
    printf("3. Calculate the area of a Triangle \n");
    printf("4. Quit \n\n");
    printf("Enter you choice (1-4): ");

    fgets(choiceStr, 10, stdin);
    choice = atoi(choiceStr);

    // input validation
    while (choice < 1 || choice > 4) {
      printf("ERROR!! \n");
      printf("Enter a choice between 1-4 : ");
      fgets(choiceStr, 10, stdin);
      choice = atoi(choiceStr);
    }

    // if valid input
    switch (choice) {
    case 1:
      printf("\nEnter the radius of the circle: ");
      fgets(radiusStr, 256, stdin);
      radius = atof(radiusStr);
      while (radius < 0) {
        printf("Error! \n");
        printf("Enter a positive value for the radius: ");
        fgets(radiusStr, 256, stdin);
        radius = atoi(radiusStr);
      }
      if (radius > 0) {
        circle_area = PI * radius * radius;
        printf("\nThe area of the circle is: %.2f \n", circle_area);
        printf("**********************************************\n\n");
        printf("Calculate another area, or press (4) to quit\n\n");
      }
      break;

    case 2:
      printf("Enter the width of the rectangle: ");
      fgets(widthStr, 256, stdin);
      width = atof(widthStr);
      while (width < 0) {
        printf("Error!\n\n");
        printf("Enter a positive value for the width: ");
        fgets(widthStr, 256, stdin);
        width = atof(widthStr);
      }
      printf("Enter the length of the rectangle: ");
      fgets(lengthStr, 256, stdin);
      length = atof(lengthStr);
      while (length < 0) {
        printf("Error!\n\n");
        printf("Enter a positive value for the length: ");
        fgets(lengthStr, 256, stdin);
        length = atof(lengthStr);
      }
      if (width > 0 && length > 0) {
        rectangle_area = width * length;
        printf("\nThe area of the rectangle is: %.2f \n", rectangle_area);
        printf("**********************************************\n\n");
        printf("Calculate another area, or press (4) to quit\n\n");
      }
      break;
    case 3:
      printf("Enter the base of the triangle: ");
      fgets(lengthTriangleStr, 256, stdin);
      lengthTriangle = atof(lengthTriangleStr);
      while (lengthTriangle < 0) {
        printf("Error!\n\n");
        printf("Enter a positive value for the base: ");
        fgets(lengthTriangleStr, 256, stdin);
        width = atof(lengthTriangleStr);
      }
      printf("Enter the height of the triangle: ");
      fgets(heightStr, 256, stdin);
      height = atof(heightStr);
      while (heightStr < 0) {
        printf("Error!\n\n");
        printf("Enter a positive value for the height: ");
        fgets(heightStr, 256, stdin);
        height = atof(heightStr);
      }
      if (lengthTriangle > 0 && height > 0) {
        triangle_area = lengthTriangle * height / 2;
        printf("\nThe area of the triangle is: %.2f \n", triangle_area);
        printf("**********************************************\n\n");
        printf("Calculate another area, or press (4) to quit\n\n");
      }
      break;

    case 4:
      printf("program terminated \n");
      break;
    }
  } while (choice != 4); //{
}
