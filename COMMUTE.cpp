#include <stdio.h>
using namespace std;

int main() {
	int numberOfTestCases;
	int numberOfLines;
	int startTime;
	int travelTime;
	int interval;
	int totalCommuteTime;

	scanf("%d", &numberOfTestCases);

	for(int i = 0; i < numberOfTestCases; i++) {
		scanf("%d", &numberOfLines);
		totalCommuteTime = 0;
		for(int j = 0; j < numberOfLines; j++) {
			scanf("%d", &startTime);
			scanf("%d", &travelTime);
			scanf("%d", &interval);

			if(totalCommuteTime <= startTime) {
				totalCommuteTime = startTime + travelTime;
			}
			else {
				do {
					startTime = startTime+interval;					
				} while(startTime < totalCommuteTime);
				totalCommuteTime = totalCommuteTime + (startTime - totalCommuteTime) + travelTime;
			}
		}
		printf("%d\n", totalCommuteTime);
	}
	return 0;
}
