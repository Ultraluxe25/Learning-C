/*
Перепишите программу так, чтобы она выдавала случайно одно из чисел 0, 1 или 2.

Sample Input:

Sample Output:
1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n", rand_digit % 3);
    
    return 0;
}
