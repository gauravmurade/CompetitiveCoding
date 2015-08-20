#include <stdio.h>
using namespace std;

int main() {
	int numberOfTestCases;
	int divisor;
	int input;
	int count = 0;

	scanf("%d", &numberOfTestCases);
	scanf("%d", &divisor);

	for(int i = 0; i < numberOfTestCases; i++) {
		scanf("%d", &input);
		if(input % divisor == 0) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
