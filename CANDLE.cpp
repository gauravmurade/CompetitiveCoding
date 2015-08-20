#include <stdio.h>
#include <limits.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;
	int candleCount[10];
	int smallest;
	int smallestIndex;
	int result;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {

		smallest = INT_MAX;
		for(int j = 0; j < 10; j++) {

			scanf("%d", &userInput);
			candleCount[j] = userInput;
			if(userInput < smallest) {
				smallest = userInput;
				smallestIndex = j;
			}
		}

		if(smallestIndex == 0) {
			for(int j = 1; j < 10; j++) {
				if(candleCount[j] == smallest) {
					smallestIndex = j;
					break;
				}
			}
		}
		
		if(smallestIndex == 0) {
			result = 10;
			while(smallest != 0) {
				result *= 10;
				smallest--;
			}
		}
		else {
			result = smallestIndex;
			while(smallest != 0) {
				result = result * 10 + smallestIndex;
				smallest--;
			}
		}
		printf("%d\n", result);

/*		
		while(1) {
			resultCopy = result;
			smallestCount = 0;
			while (resultCopy != 0) {
				temp = resultCopy % 10;
				if(temp == smallestIndex) {
					smallestCount += 1;
					if(smallestCount > smallest) {
						printf("%d\n", result);
						break;
					}
				}
				resultCopy /= 10;
			}
			if(resultCopy == 0) {
				result++;
			}
			else {
				break;
			}
		}
*/
	}
	return 0;
}
