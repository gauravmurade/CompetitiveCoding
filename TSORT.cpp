#include <stdio.h>
#include <map>
using namespace std;

int main() {
	int numberOfTestCases;
	int input;
	map<int,int> sortInput;
	map<int,int>::iterator sI;

	scanf("%d", &numberOfTestCases);

	for(int i = 0; i < numberOfTestCases; i++) {
		scanf("%d", &input);
		sortInput[input] += 1;
	}

	for(sI = sortInput.begin(); sI != sortInput.end(); sI++) {
		while(sI->second != 0) {
			printf("%d\n", sI->first);
			sI->second -= 1;
		}
	}
	return 0;
}
