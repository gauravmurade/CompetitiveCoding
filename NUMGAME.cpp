#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &userInput);
		if(userInput % 2 == 0) {
			printf("ALICE\n");
		}
		else {
			printf("BOB\n");
		}
	}
	return 0;
}
