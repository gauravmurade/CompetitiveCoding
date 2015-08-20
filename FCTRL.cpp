#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;
	int zeroes;
	int i, j;

	scanf("%d", &numberOfInputs);

	for(i = 0; i < numberOfInputs; i++) {
		zeroes = 0;
		j = 5;
		scanf("%d", &userInput);

		while(userInput >= 5 ) {
			zeroes += userInput / j;
			userInput /= 5;
		}	
		printf("%d\n", zeroes);
	}
	return 0;
}
