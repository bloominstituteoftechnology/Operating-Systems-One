#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
/* This algorithm is designed to analyze a credit card number to determine if it is valid card number for American Express, Visa or Mastercard*/

struct cardArrays {
  int mults[8];
  int sum;
};
struct cardArrays makeArrays();
int sumEverything();
int checkValidity();
int numDigits();
int getFirstDigits();
long long getInput();

int main(void) {
  // step one is call arrays() on the card number --> need to set it
  // long long cardNumber = 378282246310005;
  long long cardNumber = getInput();
  int checksum = sumEverything(makeArrays(cardNumber));
  if (checkValidity(checksum) == true)
  {
    // check the brand details
    if (numDigits(cardNumber) == 15 && (getFirstDigits(cardNumber, numDigits(cardNumber)) == 34 || getFirstDigits(cardNumber, numDigits(cardNumber)) == 37))
    {
      printf("AMEX\n");
    }
    else if (numDigits(cardNumber) == 16 && (getFirstDigits(cardNumber, numDigits(cardNumber)) > 50 && getFirstDigits(cardNumber, numDigits(cardNumber)) < 56))
    {
      printf("MASTERCARD\n");
    }
    else if (numDigits(cardNumber) == 13 && (getFirstDigits(cardNumber, numDigits(cardNumber)) >= 40 && getFirstDigits(cardNumber, numDigits(cardNumber)) < 50))
    {
      printf("VISA\n");
    }
    else
    {
      printf("INVALID\n");
    }
  }
  else
  {
    printf("INVALID\n");
  }
}

// breaks the card number into an array with every other number starting with the next to last number with each digit multiplied by two and the remaining digits added together for a sum
struct cardArrays makeArrays(long long cardNumber) {
  int n = 0;
  struct cardArrays bothArrays;
  for (int i = 0; i < 8; i++) {
    bothArrays.mults[i]=0;
  }
  bothArrays.sum = 0;
  long long num = cardNumber;
  while (num > 0) {
    bothArrays.sum = bothArrays.sum + (num % 10);
    num =  floor(num / 10);
    if (num > 0) {
      bothArrays.mults[n] = (num % 10) * 2;
      n++;
      num = floor(num / 10);
    } else {
      break;
    }
  }
  return bothArrays;
}

// This function takes the array of multiplied digits and adds them to the partial sum from the previous calculation
int sumEverything(struct cardArrays bothArrays) { // take in struct from arrays()
  int sumAll = bothArrays.sum;
  int temp = 0;
  for (int i = 0; i < 8; i++) {
    temp = bothArrays.mults[i];
    while (temp > 0) {
      sumAll = sumAll + (temp % 10);
      temp = floor(temp / 10);
    }
  }
  return sumAll;
}

// This function takes the sum and determines if it ends in 0 to verify the checksum
int checkValidity(int sum) { // takes in sum from sumEverything()
  if ((sum % 10) == 0) {
    printf("Passes checksum\n");
    return true;
  }
  printf("Fails checksum\n");
  return false;
}

// determining the number of digits in the card number
int numDigits(long long cardNumber) {
  long long num = cardNumber;
  int count = 0;
  while (num > 0) {
    num = floor(num / 10);
    count++;
  }
  printf("Number of digits: %i\n",count);
  return count;
}

// determining the first two digits of the card number
int getFirstDigits(long long cardNumber, int numOfDigits) {
  printf("numOfDigits for exp: %i\n",numOfDigits);
  int exp = numOfDigits - 2;
  long long divider = pow(10, exp);
  int firstTwo = floor(cardNumber / divider);
  printf("First two digits: %i\n",firstTwo);
  return firstTwo;
}

long long getInput() {
  long long cardNumber;
  do
  {
    printf("Enter card number without spaces: ");
    scanf("%lld", &cardNumber);
  }
  while (cardNumber <= 0);
  printf("card number is: %lld",cardNumber);
  return cardNumber;
}
