#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	float userInput;
	float grossSalary;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%f", &userInput);
		if(userInput < 1500) {
			grossSalary = userInput*2;
		}
		else {
			grossSalary = userInput + 500 + (userInput*0.98);
		}
		printf("%g\n", grossSalary);
	}
	return 0;
}
