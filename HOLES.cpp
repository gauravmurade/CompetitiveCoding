#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
	int inputs;
	int holes;
	string str;
	scanf("%d", &inputs);

	for(int i = 0; i < inputs; i++) {
		holes = 0;
		cin >> str;
		for(int j = 0; j < str.length(); j++) {
			if (str[j] == 'A' || str[j] == 'D' || str[j] == 'O' || str[j] == 'P' || str[j] == 'Q' || str[j] == 'R') {
				holes += 1;	
			}
			else if(str[j] == 'B') {
				holes += 2;	
			}
		}
		printf("%d\n", holes);
	}
	return 0;
}
