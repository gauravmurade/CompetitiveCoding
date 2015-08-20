#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numberOfInputs;
	int M;
	int x;
	int y;
	int userInput;
	int houseCoverage;
	int leftLimit;
	int rightLimit;
	int safeHouseCount;
	int unsafeHouses[101];
	for(int j = 0; j <= 100; j++) {
		unsafeHouses[j] = 0;
	}

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &M);
		scanf("%d", &x);
		scanf("%d", &y);
		houseCoverage = x*y;
		safeHouseCount = 0;
		for(int i = 0; i < M; i++) {
			scanf("%d", &userInput);
			leftLimit = userInput - houseCoverage;
			if (leftLimit < 1) {
				leftLimit = 1;
			}
			rightLimit = userInput + houseCoverage;
			if (rightLimit > 100) {
				rightLimit = 100;
			}
			for(int j = leftLimit; j <= rightLimit; j++) {
				unsafeHouses[j] = 1;
			}
		}
		for(int i = 1; i <= 100; i++) {
			if(unsafeHouses[i] == 0) {
				safeHouseCount++;
			}
			unsafeHouses[i] = 0;
		}
		printf("%d\n", safeHouseCount);
	}
	return 0;
}
