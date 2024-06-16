/*
Идёт k секунда суток. Определить, сколько целых часов и целых минут будут показывать электронные часы,
если на 0-ой секунде они показывают 0 0.

Sample Input:
34961

Sample Output:
9 42
*/

#include <stdio.h>

int main() {
    int seconds;
    scanf("%d", &seconds);
    printf("%d %d", seconds / 3600, seconds % 3600 / 60);
    
    return 0;
}
