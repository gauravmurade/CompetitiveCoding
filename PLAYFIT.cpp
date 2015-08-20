#include <stdio.h>
using namespace std;

int main() {
	int numberOfTestCases;
	int numberOfInputs;
	int goalsScored[100000];
	int maxDiff;
	int smallest;

	scanf("%d", &numberOfTestCases);

	for(int i = 0; i < numberOfTestCases; i++) {

		scanf("%d", &numberOfInputs);
		for(int j = 0; j < numberOfInputs; j++) {
			scanf("%d", &goalsScored[j]);
		}

		maxDiff = 0;
		smallest = goalsScored[0];
		for(int j = 1; j < numberOfInputs; j++) {
			if((goalsScored[j] > smallest) && (goalsScored[j] - smallest > maxDiff)) {
				maxDiff = goalsScored[j] - smallest;
			}
			if(goalsScored[j] < smallest) {
				smallest = goalsScored[j];
			}
		}

		if(maxDiff == 0) {
			printf("UNFIT\n");
		}
		else {
			printf("%d\n", maxDiff);			
		}
	}
	return 0;
}
