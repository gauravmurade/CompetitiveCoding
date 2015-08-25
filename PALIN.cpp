#include <stdio.h>
#include <string.h>
using namespace std;

void findNextPalin(char storeNumber[]) {

	int len = strlen(storeNumber);
	int flag = 0;
	int temp;
	int i = 0;

	for(int i=0;  i < len; i++) {	
		if(storeNumber[i] != '9') {
			flag = 1;
			break;
		}					
	}
	if(flag == 0) {
		storeNumber[0] = '1';
		for(int i=1;  i <= len; i++) {	
			storeNumber[i] = '0';
		}	
		storeNumber[len] = '1';
		storeNumber[len+1] = '\0';
		printf("%s\n", storeNumber);
		return;
	}
	flag = 0;
	for(int i=0;  i < len/2; i++) {	
		if(storeNumber[i] < storeNumber[len-i-1]) {
			flag = -1;
		}
		else if(storeNumber[i] > storeNumber[len-i-1]) {
			flag = 1;			
		}					
		storeNumber[len-i-1] = storeNumber[i];
	}

	if(flag == -1 || flag == 0) {
		if(len % 2) {
			temp = len/2;
		}
		else {
			temp = len/2 - 1;
		}

		while(storeNumber[temp-i] == '9') {

			storeNumber[temp-i] = '0';
			storeNumber[len-temp+i-1] = '0';
			i += 1;

		}
		storeNumber[temp-i] += 1;
		storeNumber[len-temp+i-1] = storeNumber[temp-i];

	}
	printf("%s\n", storeNumber);
}

int main() {
	int numberOfInputs;
	char storeNumber[1000000];

	scanf("%d", &numberOfInputs);
	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%s", storeNumber);
		findNextPalin(storeNumber);
	}	
	return 0;
}
