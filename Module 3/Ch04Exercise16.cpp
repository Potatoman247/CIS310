
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std; 

int main()
{

    const double finalManuscript = 5000.00;
    const double publishedNovel = 20000.00;
    const float optionTwoRoyalty = .125f;
    const float option3RoyaltyOne = .1f;
    const float option3RoyaltyTwo = .14f;
    
    float optionThree;
    double optionOne;
    double optionTwo;
    double netPrice;
    int copiesSold;

    cout << "Please Input The Net Price Of Each Copy\n";
    cin >> netPrice;

    cout << "Please Input The Total Copies Expected To Be Sold\n";
    cin >> copiesSold;

    optionOne = finalManuscript + publishedNovel;
    optionTwo = optionTwoRoyalty * (netPrice * copiesSold);
    if (copiesSold > 4000)
    {
        optionThree = (netPrice * 4000) * option3RoyaltyOne;
        int tempCopies = copiesSold - 4000;
        optionThree += (netPrice * tempCopies) * option3RoyaltyTwo;

    }
    else {
        optionThree = (copiesSold * netPrice) * option3RoyaltyOne;
    }

    cout << "Option One: " << optionOne << "\n";
    cout << "\n";
    cout << "Option Two: " << optionTwo << "\n";
    cout << "\n";
    cout << "Option Three: " << optionThree << "\n";
    cout << "\n";
    cout << "\n";
    cout << "With These Settings, The Most Valuable Option Would Be ";
    if (optionOne > optionTwo) {
        if (optionOne > optionThree) {
            cout << "Option One";
        }
        else {
            cout << "Option Three";
        }
    }
    else {
        if (optionTwo > optionThree) {
            cout << "Option Two";
        }
        else {
            cout << "Option Three";
        }
    }
    return 0;
}


