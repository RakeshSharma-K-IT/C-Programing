#include <math.h>
#include <stdio.h>
int main() {
  int low, high, number, n, rem, count = 0;
  double result = 0.0;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &low, &high);
  printf("Armstrong numbers between %d and %d are: ", low, high);

  
  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
   

  for (number = low + 1; number < high; ++number) {
    n = number;


    while (n != 0) {
      n /= 10;
      ++count;
    }

    n = number;

   
    while (n != 0) {
      rem = n % 10;
      result += pow(rem, count);
      n /= 10;
    }

  
    if ((int)result == number) {
      printf("%d ", number);
    }

   
    count = 0;
    result = 0;
  }

  return 0;
}