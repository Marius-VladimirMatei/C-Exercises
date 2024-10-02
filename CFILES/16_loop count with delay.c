#include <stdio.h>
#include <Windows.h>

// loop count numbers 1-25 ++incrementation

int main() {
	int i;

	for (i = 1; i <= 15; i++) {
		printf_s("%d\n", i);
		Sleep(1000);
	}
	return 0;
}