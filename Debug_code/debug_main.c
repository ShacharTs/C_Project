#include <stdio.h>
#include "math.h"

float square_root(int num){
    float x = num;
    float y = 1;
    float epsilon = 0.000001;
    while (x - y > epsilon){
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

void bug1(){
    const int numbers[] = {4, 8, 15, 16, 23, 42};
    const size_t size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    double runningAvg = 0;

    for (int i = 0; i < size; i++){
        sum = sum + numbers[i];
        runningAvg = (float)sum / (1 + i);
        printf("After adding %d: sum = %d, average = %.2f\n",
               numbers[i], sum, runningAvg);
    }
}

void bug2(){
    const int squares[] = {1, 4, 9, 16, 25};
    float results[5];
    size_t size = sizeof(squares) / sizeof(squares[0]);
    for (int i = 0; i < size; i++){
        results[i] = square_root(squares[i]);
        if (results[i] * results[i] != squares[i]){
            printf("Something went wrong with square root!\n");
        }
    }
}

void bug3(){
    unsigned int i = 10;
    while (i > 0){
        i--;
    }
}

int main(){
    bug1();
    bug2();
    bug3();
    return 0;
}