/*Chef is playing in a T20 cricket match. In a match, Team A plays for 20 overs. In a single over, the team gets to play 6 times, and in each of these 6 tries, they can score a maximum of 6 runs. After Team A's 20 overs are finished, Team B similarly plays for 20 overs and tries to get a higher total score than the first team. The team with the higher total score at the end wins the match.

Chef is in Team B. Team A has already played their 20 overs, and have gotten a score of RR. Chef's Team B has started playing, and have already scored CC runs in the first OO overs. In the remaining 20 - O20−O overs, find whether it is possible for Chef's Team B to get a score high enough to win the game. That is, can their final score be strictly larger than RR?

###Input:

There is a single line of input, with three integers, R, O, CR,O,C.
###Output: Output in a single line, the answer, which should be "YES" if it's possible for Chef's Team B to win the match and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).*/
#include <iostream>
using namespace std;

int main() {
    int R,O,C;
    cin>>R>>O>>C;
    int score = C + (20-O)*36;
    if(score>R){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
	return 0;
}
