#include <iostream>
#include <string>
using namespace std;

void closeAllTweets(bool isTweetOpen[], int numberOfTweets) {
	for(int i = 0; i < numberOfTweets; i++) {
		isTweetOpen[i] = false;
	}
}

void printTweetSatus(bool isTweetOpen[], int numberOfTweets) {
	for(int i = 0; i < numberOfTweets; i++) {
		cout << isTweetOpen[i] << " ";
	}
	cout << endl;
}

int main() {

	ios_base::sync_with_stdio(false);
	int numberOfTweets;
	int numberOfClicks;
	string userInput;
	int tweetNumber;
	int noOfOpenTweets = 0;

	cin >> numberOfTweets;
	cin >> numberOfClicks;

	bool isTweetOpen[numberOfTweets+1];
	closeAllTweets(isTweetOpen, numberOfTweets+1);

	for(int i = 0; i < numberOfClicks; i++) {
//		printTweetSatus(isTweetOpen, numberOfTweets+1);
		cin >> userInput;
		if(userInput.compare("CLICK") == 0) {
			cin >> tweetNumber;
			if(isTweetOpen[tweetNumber]) {
				isTweetOpen[tweetNumber] = false;
				noOfOpenTweets -= 1;
			}
			else {
				isTweetOpen[tweetNumber] = true;
				noOfOpenTweets += 1;
			}
		}
		else {
			closeAllTweets(isTweetOpen, numberOfTweets+1);
			noOfOpenTweets = 0;
		}
		cout << noOfOpenTweets << endl;
	}
	return 0;
}
