/*
    Students Name: Aidan Jacoby
    Date: 08/29/2024
    File Name: Ch02Exercise13.cpp

*/

#include <iostream>;
#include <conio.h>; 

using namespace std;

int main()
{
    // Local variables for the program 
    double basePrice;
    double markPercent;
    double markupDiff;
    float salesTaxRate;
    float salesTax;
    double sellingPrice;
    double finalPrice;


    cout << "\n  Welcome to the Item Cost Calculator App" << endl;

    cout << "\n  Enter the item's original price: ";
    cin >> basePrice;

    cout << "\n  Enter the percent at which the item will be marked up: ";
    cin >> markPercent;

    cout << "\n  Finally, enter the sales tax rate for your area: ";
    cin >> salesTaxRate;

    // calculate the average of the two numbers.
    markupDiff = basePrice * (markPercent / 100);
    sellingPrice = basePrice + markupDiff;

    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;

    cout << "\n  Original Price: $" << basePrice << "\n" << "  Percent of Markup: " << markPercent << "% \n" << "  State Sales Tax: " << salesTaxRate << "% \n" << "  Total Sales Tax: $" << salesTax << "\n" << "  \n  Final Price: $" << finalPrice;

    // Display a closing message for non Visual Studio IDEs.
    cout << "\n\n  Press any key to continue ...";

    _getch(); // halt processing 

    return 0; // exit code 
}
