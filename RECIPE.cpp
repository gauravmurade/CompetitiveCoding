#include <stdio.h>
#include <stdlib.h>
#include <climits>
using namespace std;

int compare (const void * a, const void * b) {
	
	return ( *(int*)a - *(int*)b );
}

int main() {
	int numberOfTestCases;
	int numberOfInputs;
	int userInput;
	int pieWeights[100];
	int rackWeightLimits[100];	
	int i, j, k;
	int result;

	scanf("%d", &numberOfTestCases);
	for(i = 0; i < numberOfTestCases; i++) {

		result = 0;
		scanf("%d", &numberOfInputs);
		for(j = 0; j < numberOfInputs; j++) {

			scanf("%d", &userInput);
			pieWeights[j] = userInput;
		}

		for(j = 0; j < numberOfInputs; j++) {

			scanf("%d", &userInput);
			rackWeightLimits[j] = userInput;
		}

		qsort(pieWeights, numberOfInputs, sizeof(int), compare);
		qsort(rackWeightLimits, numberOfInputs, sizeof(int), compare);

		k = 0;
		for(j = 0; j < numberOfInputs; j++) {

			if( rackWeightLimits[j] >= pieWeights[k] ) {
				result += 1;
				k++;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}