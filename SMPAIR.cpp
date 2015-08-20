#include <stdio.h>
#include <climits>
using namespace std;

int main() {
	int numberOfTestCases;
	int numberOfInputs;
	int userInput;
	int smallest = INT_MAX;
	int secondSmallest = INT_MAX;

	scanf("%d", &numberOfTestCases);
	for(int i = 0; i < numberOfTestCases; i++) {
		smallest = INT_MAX;
		secondSmallest = INT_MAX;

		scanf("%d", &numberOfInputs);
		for(int j = 0; j < numberOfInputs; j++) {

			scanf("%d", &userInput);
			if(userInput < smallest) {
				secondSmallest = smallest;
				smallest = userInput;
			}
			else if(userInput < secondSmallest) {
				secondSmallest = userInput;
			}
		}
		printf("%d\n", smallest+secondSmallest);
	}
	return 0;
}