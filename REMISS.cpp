#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int numberOfInputs;
	int guard1;
	int guard2;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &guard1);
		scanf("%d", &guard2);
		printf("%d ", max(guard1, guard2));
		printf("%d\n", guard1+guard2);
	}
	return 0;
}
