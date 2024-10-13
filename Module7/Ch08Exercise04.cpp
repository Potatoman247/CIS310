#include <iostream>
# include <iomanip>
using namespace std;

int findTotalVotes(int candidateVotes[5]) {
    int totalVotes = 0;
    for (int i = 0; i < 5; i++) {
        totalVotes += candidateVotes[i];
    }
    return totalVotes;
}

float findVotePercentage(int candidateVotes[5], int totalVotes, int count) {
    float votePercentage = (float) (candidateVotes[count] * 100) / (float) totalVotes;
    return votePercentage;
}

void voteColumns(string candidates[5], int candidateVotes[5], float votePercentage[5], int totalVotes) {
    cout << setw(25) << "Candidate" <<
        setw(25) << "Votes Received" <<
        setw(25) << "% Of Total Votes" << '\n';
    for (int i = 0; i < 5; i++) {
        cout << setw(25) << candidates[i] <<
            setw(25) << candidateVotes[i] <<
            setw(25) << votePercentage[i] << '\n';
    }
    cout << setw(25) << "Total" << setw(25) << totalVotes;
}

void chooseWinner(string candidates[5], int candidateVotes[5]) {
    int max = candidateVotes[0];
    int winner;
    for (int i = 0; i < 5; i++) {
        if (candidateVotes[i] > max) {
            winner = i;
            max = candidateVotes[i];
        }
    }
    cout << "The Candidate That Received The Most Votes Is " << candidates[winner] << "!";
}

int main()
{
    int totalVotes;
    int candidateVotes[5];
    float votePercentage[5];
    string candidates[5];

    for (int i = 0; i < 5; i++) {
        cout << "Please Enter The Name Of Candidate " << i + 1 << ": ";
            cin >> candidates[i];
        cout << "Please Enter How Many Votes " << candidates[i] << " Received: ";
            cin >> candidateVotes[i];
            cout << "\n";
    }

    totalVotes = findTotalVotes(candidateVotes);

    for (int i = 0; i < 5; i++) {
        votePercentage[i] = findVotePercentage(candidateVotes, totalVotes, i);
    }

    cout << "\n\n\n";
    
    voteColumns(candidates, candidateVotes, votePercentage, totalVotes);
    cout << "\n\n";
    chooseWinner(candidates, candidateVotes);
}

