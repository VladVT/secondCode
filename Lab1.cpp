#include "stdafx.h"
#include "stdafx.h"
#include <conio.h>

int prog(float x, float y) {
	if ((((x - 3) * (x - 3) + (y + 2) * (x - 2))< 9)&&(((x - 4) * (x - 4) + (y - 3) * (y - 3))> 25))
		return 1;
	return 0; 
}

int main() {	
	while (true) {
		float x, y;
		printf("Type x and y for the dot");
		scanf_s("%a", &x);
		scanf_s("%a", &y);
		if (prog(x, y)) {
			printf("yes");
		}
		else {
			printf("no");
		}
		scanf_s("%a", &x);
	}
	_getch();
	return 0;
}
