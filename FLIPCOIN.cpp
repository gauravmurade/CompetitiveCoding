#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
using namespace std;

void setAllTails(int isHeadsUp[], int numberOfCoins) {
	for(int i = 0; i < numberOfCoins; i++) {
		isHeadsUp[i] = 0;
	}
}

int getMid(int left, int right) {
	return (left + (right - left) / 2);
}

void updateArray(int* segTree, int* lazyTree, int nodeLeft, int nodeRight, int rangeLeft, int rangeRight, int nodeIndex) {

	if(lazyTree[nodeIndex] != 0) {
		segTree[nodeIndex] = (nodeRight - nodeLeft + 1) - segTree[nodeIndex];
		if(nodeLeft != nodeRight) {
			int left = 2*nodeIndex+1;
			int right = 2*nodeIndex+2;
			lazyTree[left] = 1 - lazyTree[left];
			lazyTree[right] = 1 - lazyTree[right];
		}
		lazyTree[nodeIndex] = 0;
	}

	if(nodeLeft > rangeRight || nodeRight < rangeLeft) {
		return;
	}

	if(rangeLeft <= nodeLeft && rangeRight >= nodeRight) {
		segTree[nodeIndex] = (nodeRight - nodeLeft + 1) - segTree[nodeIndex];
		if(nodeLeft != nodeRight) {
			int left = 2*nodeIndex+1;
			int right = 2*nodeIndex+2;			
			lazyTree[left] = 1 - lazyTree[left];
			lazyTree[right] = 1 - lazyTree[right];
		}
		return;
	}

	int left = 2*nodeIndex+1;
	int right = 2*nodeIndex+2;			
	int mid = getMid(nodeLeft, nodeRight);
	updateArray(segTree, lazyTree, nodeLeft, mid, rangeLeft, rangeRight, left);
	updateArray(segTree, lazyTree, mid+1, nodeRight, rangeLeft, rangeRight, right);
	segTree[nodeIndex] = segTree[left] + segTree[right];
}

int fetchData(int* segTree, int* lazyTree, int nodeLeft, int nodeRight, int rangeLeft, int rangeRight, int nodeIndex) {

	if(nodeLeft > rangeRight || nodeRight < rangeLeft) {
		return 0;
	}

	if(lazyTree[nodeIndex] != 0) {
		segTree[nodeIndex] = (nodeRight - nodeLeft + 1) - segTree[nodeIndex];
		if(nodeLeft != nodeRight) {
			int left = 2*nodeIndex+1;
			int right = 2*nodeIndex+2;
			lazyTree[left] = 1 - lazyTree[left];
			lazyTree[right] = 1 - lazyTree[right];
		}
		lazyTree[nodeIndex] = 0;
	}

	if(rangeLeft <= nodeLeft && rangeRight >= nodeRight) {
		return segTree[nodeIndex];
	}

	int mid = getMid(nodeLeft, nodeRight);
	return fetchData(segTree, lazyTree, nodeLeft, mid, rangeLeft, rangeRight, 2*nodeIndex+1) + 
		   fetchData(segTree, lazyTree, mid+1, nodeRight, rangeLeft, rangeRight, 2*nodeIndex+2);
}

void createSegTree(int arrayLength, int*& segTree, int*& lazyTree) {
	int segTreeHeight = int(ceil(log2(arrayLength)));
	int maxNumberOfNodes = int(pow(2, segTreeHeight+1)) - 1;
	segTree = new int[maxNumberOfNodes];
	lazyTree = new int[maxNumberOfNodes];
	for(int i = 0; i < maxNumberOfNodes; i++) {
		segTree[i] = 0;
	}
	for(int i = 0; i < maxNumberOfNodes; i++) {
		lazyTree[i] = 0;
	}
}

int main() {
	int numberOfCoins;
	int numberOfInputs;
	int flag;
	int A;
	int B;

	scanf("%d", &numberOfCoins);
	scanf("%d", &numberOfInputs);

	int isHeadsUp[numberOfCoins];
	setAllTails(isHeadsUp, numberOfCoins);
	int* segTree = NULL;
	int* lazyTree = NULL;
	createSegTree(numberOfCoins, segTree, lazyTree);

	for(int i = 0; i < numberOfInputs; i++) {
		scanf("%d", &flag);
		scanf("%d", &A);
		scanf("%d", &B);
		if(flag == 0) {
			updateArray(segTree, lazyTree, 0, numberOfCoins-1, A, B, 0);
//			printEverything(isHeadsUp, numberOfCoins, segTree, lazyTree);
		}
		else {
			printf("%d\n", fetchData(segTree, lazyTree, 0, numberOfCoins-1, A, B, 0));
//			printEverything(isHeadsUp, numberOfCoins, segTree, lazyTree);
		}
	}
	return 0;
}
