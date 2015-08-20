#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int numberOfInputs;
	float B;
	float LS;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%f", &B);
		scanf("%f", &LS);

		float min = pow(LS, 2.0) - pow(B, 2.0);
		float max = pow(LS, 2.0) + pow(B, 2.0);
		printf("%f %f\n", sqrt(min), sqrt(max));
	}
	return 0;
}
