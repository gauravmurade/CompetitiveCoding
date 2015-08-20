#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &userInput);
		printf("%d\n", userInput/2+1);
	}
	return 0;
}
