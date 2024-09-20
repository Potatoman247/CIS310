#include <iostream>

using namespace std;
int main()
{
    int dishA;
    int dishesB;
    int timeRemainingT;
    int totalDishes = 1;
    int timeElapsed = 0;
    int nextDish = 0;

    cout << "Hello! Please Enter The Time It Will Take To Complete The First Dish: ";
    cin >> dishA;
    timeElapsed = dishA;
    nextDish = dishA;

    cout << "\nNext, Please Enter How Much Longer Each Consecutive Dish Will Take: ";
    cin >> dishesB;
    cout << dishesB;
    cout << "\nFinally, Please Enter How Much Time You Have To Cook: ";
    cin >> timeRemainingT;

    while (timeElapsed < timeRemainingT) {
        nextDish += dishesB;
        timeElapsed += nextDish;
        totalDishes += 1;
        
    }

    cout << "\nIn This Amount Of Tiime, Bianca Can Finish " << totalDishes << " Dishes!";

    return 0;
}
