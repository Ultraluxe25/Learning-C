/* Help Sherlock Holmes write a business card program.
The program should display information about the coordinates of his house on Baker Street.

S.Holmes:
51grad 31'25.48" N
0 grad 9'29.93" W
*/

#include <stdio.h>

int main(void) {
    int num1 = 51, num2 = 31, num3 = 0, num4 = 9;
    float float1 = 25.48, float2 = 29.93;
    char word1 = 'N', word2 = 'W';
    
    printf("S.Holmes:\n");
    printf("%dgrad %d\'%5.2f\" %c\n", num1, num2, float1, word1);
    printf("%d grad  %d\'%5.2f\" %c\n", num3, num4, float2, word2);
    
    return 0;
}
