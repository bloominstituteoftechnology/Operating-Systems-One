#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

struct cardArrays {
  int mults[8];
  int sum;
};
struct cardArrays makeArrays();
int sumEverything();
int checkValidity();
int numDigits();
int getFirstDigits();

int main(void) {
  // step one is call arrays() on the card number --> need to set it
  long long cardNumber = 3434567891234;
  int checksum = sumEverything(makeArrays(cardNumber));
  if (checkValidity(checksum) == true)
  {
    // check the brand details
    if (numDigits(cardNumber) == 15 && (getFirstDigits(cardNumber) == 34 || getFirstDigits(cardNumber) == 37))
    {
      printf("true\n");
    }
    else if (numDigits(cardNumber) == 16 && (getFirstDigits(cardNumber) > 50 && getFirstDigits(cardNumber) < 56))
    {
      printf("true\n");
    }
    else if (numDigits(cardNumber) == 13 && (getFirstDigits(cardNumber) >= 40 && getFirstDigits(cardNumber) < 50))
    {
      printf("true\n");
    }
    else
    {
      printf("false\n");
    }
  }
  else
  {
    printf("false\n");
  }
}


struct cardArrays makeArrays(long long cardNumber) {
  int n = 0;
  struct cardArrays bothArrays;
  for (int i = 0; i < 8; i++) {
    bothArrays.mults[i]=0;
  }
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

int checkValidity(int sum) { // takes in sum from sumEverything()
  if ((sum % 10) == 0) {
    return true;
  }
  return false;
}

int numDigits(long long cardNumber) {
  long long num = cardNumber;
  int count = 0;
  while (num >= 0) {
    num /= 10;
    count++;
  }
  return count;
}

int getFirstDigits(long long cardNumber, int numOfDigits) {
  long long divider = pow(10, (numOfDigits - 2));
   int firstTwo = cardNumber / divider;
}
