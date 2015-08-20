#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &userInput);
		if(userInput < 10) {
			printf("What an obedient servant you are!\n");
		} else {
			printf("-1\n");			
		}
	}
	return 0;
}
