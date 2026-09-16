#include <iostream>
#include <string>
#include <vector>
using namespace std;

char encodeChar(char letter, vector<char> cipher) {
    // We encode each letter here and output the encoded char

    if (letter >= 65 && letter <= 90) { // If letter is A-Z
        return cipher[letter - 65]; // Return position in the cipher (A = 65-65 = 0 = V)
    }
    else if (letter >= 97 && letter <= 122) { // If letter is a-z get the uppercase cipher and covert to lowercase
        char uppercaseletter = letter - 32;
        char uppercasecode = cipher[uppercaseletter - 65];
        return uppercasecode + 32;
    }
    return letter; // Returns unique characters (?, spaces, *)
}

int main() {
    vector<char> code = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    string text;
    string encodedText;

    cout << "Enter text to encode: ";
    getline(cin, text);

    // Encode the string one character at a time
    for (int C : text) {
        encodedText += encodeChar(C, code);
    }

    cout << "Output: " << encodedText << endl;
}
