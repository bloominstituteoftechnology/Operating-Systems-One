/*
Purpose: to calculate the price of burger purchases including a discount.
concepts: if, else if, else
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  char burgerSoldChar[100];
  int burgerSold;
  int burgerTotal, discount;
  int finalPrice;
  const int zero_discount = 19,
            ten_discount = 20,
            twentyFive_discount = 50,
            fifty_discount = 75,
            seventyFive_Discount = 100,
            burgerPrice = 8;
  printf("Enter # of burgers sold: ");
  gets (burgerSoldChar);
  burgerSold = atoi(burgerSoldChar);

  // rules to calculate discount prices
  if (burgerSold >= 1)
  {
    if (burgerSold >= seventyFive_Discount)
    {
      burgerTotal = (burgerSold * burgerPrice);
      discount = (burgerTotal) * (.75);
      finalPrice = (burgerTotal - discount);

      printf("# of burgers sold: %d \n", burgerSold);
      printf("Final Price: $%d \n", burgerTotal);
      printf("Discount $%d \n", discount);
      printf("Final Price after Discount: $%d \n", finalPrice);
    }
    else if (burgerSold >= fifty_discount)
    {
      burgerTotal = (burgerSold * burgerPrice);
      discount = (burgerTotal) * (.50);
      finalPrice = (burgerTotal - discount);

      printf("# of burgers sold: %d \n", burgerSold);
      printf("Final Price: $%d \n", burgerTotal);
      printf("Discount $%d \n", discount);
      printf("Final Price after Discount: $%d \n", finalPrice);
    }
    else if (burgerSold >= twentyFive_discount)
    {
      burgerTotal = (burgerSold * burgerPrice);
      discount = (burgerTotal) * (.25);
      finalPrice = (burgerTotal - discount);

      printf("# of burgers sold: %d \n", burgerSold);
      printf("Final Price: $%d \n", burgerTotal);
      printf("Discount $%d \n", discount);
      printf("Final Price after Discount: $%d \n", finalPrice);
    }
    else if (burgerSold >= ten_discount)
    {
      burgerTotal = (burgerSold * burgerPrice);
      discount = (burgerTotal) * (.10);
      finalPrice = (burgerTotal - discount);

      printf("# of burgers sold: %d \n", burgerSold);
      printf("Final Price: $%d \n", burgerTotal);
      printf("Discount $%d \n", discount);
      printf("Final Price after Discount: $%d \n", finalPrice);
    }
    else
    {
      burgerTotal = (burgerSold * burgerPrice);

      printf("# of burgers sold: %d \n", burgerSold);
      printf("Final Price: $%d \n", burgerTotal);
      printf("For a discount purchase 20 or more \n");
    }
  }
  else
  {
    putchar('\n');
    printf("Input is invalid. Run the program again and ");
    printf("use a number bigger than zero. \n");
  }

  return 0;
}
