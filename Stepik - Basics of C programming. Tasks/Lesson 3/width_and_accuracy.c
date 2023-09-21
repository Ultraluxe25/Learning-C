#include <stdio.h>

int main(void) {
	int a = 777;
	float b = 150.5;

	// The output uses the minimum field width
	printf("|%d|\n", a);
	// Width 8 positions, left aligned
	printf("|%-8d|\n", a);
  	// Width 8 positions, right aligned
	printf("|%8d|\n", a);
  	// Number of positions is 2, but number 777 has more than two digits
	// So the area expands to the minimum possible width
	printf("|%2d|\n", a);

	// No modifiers, will display using the minimum field width
	// and standard precision 6 digits
	printf("|%f|\n", b);
	// 8 positions wide, left aligned, 3 decimal places
	printf("|%-8.3f|\n", b);
  	// 8 positions wide, 2 decimal places, right aligned
	printf("|%8.2f|\n", b);
  	// number of positions 4, precision 3 decimal places, but this is not enough
	// so the field width is increased to the minimum possible value
	printf("|%4.3f|\n", b);
	
	return 0;
}
