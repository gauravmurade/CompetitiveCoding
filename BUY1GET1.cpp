#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

int main() {
	int inputs;
	map <char,int> hold;
	map <char,int>:: iterator holdIT;
	string str;
	int result;
	scanf("%d", &inputs);

	for(int i = 0; i < inputs; i++) {
		result = 0;
		cin >> str;
		for(int j = 0; j < str.length(); j++) {
			hold[str[j]] += 1;
		}

		for(holdIT = hold.begin(); holdIT != hold.end(); holdIT++) {
			if(holdIT->second % 2 == 0) {
				result += holdIT->second / 2;
			}
			else {
				result += holdIT->second / 2 + 1;
			}
			holdIT->second = 0;
		}
		printf("%d\n", result);
	}
	return 0;
}
