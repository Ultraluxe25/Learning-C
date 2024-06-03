/*
На вход программы поступают два целых числа — длины сторон прямоугольника. 
Посчитайте и выведите периметр этого прямоугольника.

Периметр — сумма длин всех сторон.

Sample Input:
12 25

Sample Output:
74
*/

#include <stdio.h>

int main() {
  // put your code here
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", 2 * (a + b));
  
  return 0;
}
