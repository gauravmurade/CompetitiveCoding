#include <stdio.h>
using namespace std;

int main() {
	int numberOfInputs;
	int angle1;
	int angle2;
	int angle3;

	scanf("%d", &numberOfInputs);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &angle1);
		scanf("%d", &angle2);
		scanf("%d", &angle3);
		if((angle1 + angle2 + angle3 == 180) && angle1!= 0 && angle2!= 0 && angle3!= 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
