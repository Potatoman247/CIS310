#include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    int numCan;
    int totalVotes = 0;

    cout << "Please Select Your Number of Candidates: ";
    cin >> numCan;
    cout << "\n";

    string* candidates = new string[numCan];
    int* candidateVotesPtr = new int[numCan];
    float* votePercentagePtr = new float[numCan];

    for (int i = 0; i < numCan; i++) {
        cout << "Please Enter The Name Of Candidate " << i + 1 << ": ";
        cin >> candidates[i];
        cout << "Please Enter How Many Votes " << candidates[i] << " Received: ";
        cin >> candidateVotesPtr[i];
        cout << "\n";
    }
    for (int i = 0; i < numCan; i++) {
        totalVotes += candidateVotesPtr[i];
    }

    for (int i = 0; i < numCan; i++) {
        votePercentagePtr[i] = (float)(candidateVotesPtr[i] * 100) / (float)totalVotes;
    }

    cout << "\n\n\n";

    cout << setw(25) << "Candidate" <<
        setw(25) << "Votes Received" <<
        setw(25) << "% Of Total Votes" << '\n';
    for (int i = 0; i < numCan; i++) {
        cout << setw(25) << candidates[i] <<
            setw(25) << candidateVotesPtr[i] <<
            setw(25) << votePercentagePtr[i] << '\n';
    }
    cout << setw(25) << "Total" << setw(25) << totalVotes;
    cout << "\n\n";

    int max = candidateVotesPtr[0];
    int winner;
    for (int i = 0; i < numCan; i++) {
        if (candidateVotesPtr[i] > max) {
            winner = i;
            max = candidateVotesPtr[i];
        }
    }
    cout << "The Candidate That Received The Most Votes Is " << candidates[winner] << "!";

}

