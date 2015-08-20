#include <stdio.h>
#include <limits.h>
#include <unordered_map>
using namespace std;

int main() {
	int numberOfTestCases;
	int numberOfElements;
	int userInput;
	unordered_map<int, int> countMap;
	unordered_map<int, int> :: iterator cM;
	int maxElement;	
	int maxCount;

	scanf("%d", &numberOfTestCases);
	for(int i = 0; i < numberOfTestCases; i++) {
		scanf("%d", &numberOfElements);
		maxCount = INT_MIN;
		for(int j = 0; j < numberOfElements; j++) {
			scanf("%d", &userInput);
			countMap[userInput] += 1;
		}

		for(cM = countMap.begin(); cM != countMap.end(); cM++) {
			if(cM->second > maxCount) {
				maxCount = cM->second;
				maxElement = cM->first;
			}
			else if(cM->second == maxCount && cM->first < maxElement) {
				maxElement = cM->first;
			}
			cM->second = 0;
		}
		printf("%d %d\n", maxElement, maxCount);
	}
	return 0;
}