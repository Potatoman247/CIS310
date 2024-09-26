#include <iostream>

using namespace std;

int main()
{
  double valueOne;
  float valueTwo;

  cin >> valueOne;
  cout << "\n";
  cin >> valueTwo;
  cout << "\n";
  
  int sum = add(valueOne, valueTwo);
  int diff = subtract(valueOne, valueTwo);

  cout << sum << "\n";
  cout << diff;
}

int add(double valueOne, float valueTwo)
{
  float sum = valueOne + valueTwo;
}

int subtract(valueOne, valueTwo)
{
  float diff = valueOne - valueTwo;
  return diff;
}
