#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;
	int i;

	scanf("%d", &numberOfInputs);

	for(i = 0; i < numberOfInputs; i++) {
		scanf("%d", &userInput);
		if(userInput % 2 == 0) {
			printf("%d\n", userInput);
		}
		else {
			printf("%d\n", userInput-1);
		}
	}
	return 0;
}
