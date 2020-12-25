#include <stdio.h>
#include <Windows.h>

int main() {
	char cong[18] = " Merry Christmas!";
	int t = 25;
	Sleep(10);
	for (int p = 0; p < t; p++) {
		printf("%s", cong);
		for (int a = p; a < t - 1; a = a + 1) {
			printf(" ");
		}
		for (int star = 0; star < p * 2 + 1; star++) {
			printf("*");
		}
		printf("\n");
		Sleep(1);
		if (p == 25) {
			break;
		}
		/*if (i == 93) {
			break;
		}*/
		/*for (int l = 0; l < 93; l++) {
			printf("*");
		}*/
	}
	
	for (int s = 0; s < 5; s++) {
		printf("%s", cong);
		for (int r = 0; r < 20; r++) {
			printf(" ");
		}
		for (int y = 0; y < 9; y++) {
			printf("|");
			
		}
		while (s < 4) {
			printf("\n");
			Sleep(1);
			break;
		}
		if (s == 5) {
			break;
		}
	
	}
	Sleep(20000);
return 0;
}