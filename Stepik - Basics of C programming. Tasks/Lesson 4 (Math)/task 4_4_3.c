/*
На вход программе подаётся два числа S и E, записанных через пробел. 
При этом гарантируется, что 𝑆 ≤ 𝐸. 
Программа должна выводить одно случайное число из промежутка [S;E]

Sample Input:
141 273

Sample Output:
233
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // put your code here
    int S, E;
    scanf("%d %d", &S, &E);
    printf("%d", S + rand() % (E - S + 1));
    
    return 0;
}
