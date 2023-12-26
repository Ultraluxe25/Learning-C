/* In the following program, variables are declared within the program. 
Correct it so that the values ​​of variables a, b, and c are read by the scanf function.

Sample Input:
10 7 2

Sample Output:
15
*/

#include <stdio.h>

int main(void) {
    int a, b, res;

    scanf("%d", &a);
    scanf("%d", &b);

    res = a + b;

    int c;

    scanf("%d", &c);

    res = res - c;
    printf("%d\n", res);

    return 0;
}
