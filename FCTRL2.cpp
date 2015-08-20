#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int userInput;
	int result[300];
	int incre;
	int resultSize;
	int i, j;
	int temp, carry;

	scanf("%d", &numberOfInputs);

	for(i = 0; i < numberOfInputs; i++) {
		incre = 2;
		result[0] = 1;
		resultSize = 1;
		scanf("%d", &userInput);

		while(incre <= userInput ) {
			carry = 0;
			for(j = 0; j < resultSize; j++) {
				temp = result[j] * incre + carry;
				result[j] = temp % 10;
				carry = temp / 10;
			}
			
			while(carry != 0) {
				result[j] = carry % 10;
				carry /= 10;
				j++;
				resultSize++;
			}
			incre++;
		}	

		for(j = resultSize-1; j >= 0; j--) {
			printf("%d", result[j]);
		}
		printf("\n");
//		printf("%d\n", resultSize);
	}
	return 0;
}
