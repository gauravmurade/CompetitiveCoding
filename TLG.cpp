#include <stdio.h>
using namespace std;

int main() {
	int numberOfRounds;
	int roundScore1;
	int roundScore2;
	int totalScore1 = 0;
	int totalScore2 = 0;
	int winner;
	int maxLead = 0;

	scanf("%d", &numberOfRounds);

	for(int i = 0; i < numberOfRounds; i++) {
		scanf("%d", &roundScore1);
		scanf("%d", &roundScore2);
		totalScore1 += roundScore1;
		totalScore2 += roundScore2;

		if((totalScore1 > totalScore2) && ((totalScore1 - totalScore2) > maxLead)) {
			maxLead = totalScore1 - totalScore2;
			winner = 1;
		}
		else if((totalScore2 > totalScore1) && ((totalScore2 - totalScore1) > maxLead)) {
			maxLead = totalScore2 - totalScore1;
			winner = 2;
		}
	}
	printf("%d %d", winner, maxLead);
	return 0;
}