
#include <math.h>
#include "advmath.h"

  float average(int arr[], int size){
      float sum = 0;
      for (int i = 0; i < size; i++){
        sum += arr[i];
      }
      return (float) sum / size;
  }

  float power(int base, int exp){
    return pow(base, exp);
    }
  float square_root(int number){
    return sqrt(number);
    }

  int factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
      result *= i;
    }
    return result;
  }