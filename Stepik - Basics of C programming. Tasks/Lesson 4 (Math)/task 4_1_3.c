/*
На вход программы поступает натуральное трёхзначное число. Напишите программу, 
которая выводит сумму цифр этого числа.

Sample Input:
123

Sample Output:
6
*/

#include <stdio.h>

int main() {
  // put your code here
  int number;
  scanf("%d", &number);
  printf("%d", number / 100 + number / 10 % 10 + number % 10);
  return 0;
}
