#include <stdio.h>
#include "square.h"
#include "triangle.h"

int main(void) {
	printf("Hi, everybody!\n");
	printf("Five squared is: %i\n", square(5));
	printf("A triangle has %i sides\n", SIDES_OF_A_TRIANGLE);
	return 0;
}
