#include <stdio.h>
using namespace std;

int main() {
	int i;
	int n;
	int userInput;

	scanf("%d", &n);

	while(n != 0) {

		int inputArray[n+1];		
		int inverseArray[n+1];

		for(i = 1; i <= n; i++) {
			scanf("%d", &userInput);
			inputArray[i] = userInput;
			inverseArray[userInput] = i;			
		}
		for(i = 1; i <= n; i++) {
			if(inputArray[i] != inverseArray[i]) {
				break;
			}
		}

		if(i > n) {
			printf("ambiguous\n");
		} else {
			printf("not ambiguous\n");			
		}
		
		scanf("%d", &n);
	}
	return 0;
}