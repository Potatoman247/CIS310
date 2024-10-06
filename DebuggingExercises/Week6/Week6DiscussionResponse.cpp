//Max Jankowksi, Aidan Jacoby Edits
//CS310 Week 6 discussion 
//This code contains multiple errors and is code to answer 
//ch7 programming exercise 11


#include <iostream>
#include <string> //using the string header
using namespace std;

int main() {
    //Edit: No ;
    string input;
    //Edit: No ;
    int sum = 0; //declaring an integer named sum and setting value at 0

    cout << "Enter a string or text: " << endl; //requesting the user inputs a string 
    //Edit: "getLine" is not a function
    cin >> input; // retrieving input 

    for (char c : input) {  // a for loop to convert and add up values of the string
        sum += c; //converts characters into a ASCII value and adds to total
    }

    //Edit: Quotation Marks are required when outputting a string
    cout << "The sum of the characters in your string are : " << sum << endl; //result output
    return 0;
}
