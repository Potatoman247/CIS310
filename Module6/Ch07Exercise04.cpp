#include <iostream>

using namespace std;

bool isVowel(int index, string phrase)
{
	string allVowels = "aeiouAEIOU";

		for (int j = 0; j < allVowels.size(); j++) {
			if (phrase[index] == allVowels[j]) {
				return true;
			}
		}
		return false;
}

string static removeVowels(string phrase)
{
	for (int i = 0; i < phrase.size(); i++) {
		if (i == 1) {
			if (isVowel(i - 1, phrase) == true) {
				phrase.erase(i - 1, 1);
			}
		}
		if (isVowel(i, phrase) == true) {
			phrase.erase(i, 1);
			if (i == 0) {
				phrase.erase(i, 1);
				i = 0;
				
			}
			else {
				i--;
			}
		}
	}
	return phrase;
}

int main()
{
	string phrase;
	int repeat = 1;

	while (repeat == 1) {
		
		cout << "Please Input Any One-Word String That Contains Both Vowels And Consonants, And The Program Will Automatically Remove All Vowels!\nString: ";
		cin >> phrase;
		phrase = removeVowels(phrase);
		cout << "\nYour Inputted Phrase With No Vowels Is: '" << phrase << "'\nTo Input Another String, Press 1. To End, Press 0: "; \
		cin >> repeat;
	}
	return 0;
}

