#include <stdio.h>
using namespace std;

int main() {
	int numberOfTestCases;
	int number1;
	int number2;
	int number3;

	scanf("%d", &numberOfTestCases);
	for(int i = 0; i < numberOfTestCases; i++) {
		scanf("%d", &number1);
		scanf("%d", &number2);
		scanf("%d", &number3);

		if(number1 > number2) {

			if(number3 > number1) {
				printf("%d\n", number1);
			}
			else if(number3 > number2) {
				printf("%d\n", number3);
			}
			else {
				printf("%d\n", number2);
			}
		}
		else {

			if(number3 > number2) {
				printf("%d\n", number2);
			}
			else if(number3 > number1) {
				printf("%d\n", number3);
			}
			else {
				printf("%d\n", number1);
			}			
		}
	}
	return 0;
}
