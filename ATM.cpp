#include <stdio.h>
using namespace std;

int main() {
	int request;
	float currentBal;
	scanf("%d", &request);
	scanf("%f", &currentBal);

	if((request % 5 != 0) || (currentBal-request < 0.50)) {
		printf("%f\n", currentBal);
	}
	else {
		printf("%f\n", (currentBal-request-0.50));
	}
	return 0;
}
