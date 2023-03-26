#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string tweakLetters(string word, vector<int> nums) {
	string newWord = word;

	for (int i = 0; i < word.size(); i++) {
		char newLetter = '_';
		char code = (word[i] + nums[i]);
		if (code > 122) {
			newLetter = char(code - 26);
		} else if (code < 98) {
			newLetter = char(code + 25);
		} else {
			newLetter = char(code);
		}

		newWord[i] = newLetter;
	}

	return newWord;
}

int main() {
	// cout << tweakLetters("apple", {0, 1, -1, 0, -1}) << endl;

	cout << tweakLetters("abc", {-1, -1, -1}) << endl;
	return 0;
}