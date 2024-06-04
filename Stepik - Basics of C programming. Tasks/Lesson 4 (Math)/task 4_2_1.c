/*
Написать программу, вычисляющую расстояние между двумя точками на плоскости.

Формат входных данных:

На вход программы поступают четыре числа координаты точек на плоскости
Необходимо вычислить расстояние между ними

Sample Input:
-70.33 -29.20 9.20 34.09

Sample Output:
101.64
*/

#include <stdio.h>
#include <math.h>

int main() {
    // put your code here
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.2f", distance);
    
    return 0;
}
