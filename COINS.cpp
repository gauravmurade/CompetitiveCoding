#include <stdio.h>
#include <unordered_map>
#define llint long long int
using namespace std;

unordered_map<int, llint> store;

llint maximizeDollar(int n) {

	if(n==0) {
		return 0;
	}

	if(store[n] > 0) {
		return store[n];
	}

	llint temp = maximizeDollar(n/2) + maximizeDollar(n/3) + maximizeDollar(n/4);

	if(temp > n) {
		store[n] = temp;
		return temp;
	}
	store[n] = n;
	return n;
}

int main() {
	int n;

	while(scanf("%d", &n) > 0) {
		printf("%lld\n", maximizeDollar(n));
	}

	return 0;
}