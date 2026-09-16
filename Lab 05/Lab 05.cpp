#include <iostream>
#include <string>
#include <vector>
using namespace std;

char encodeChar(char C, vector<char> cipher) {
    // We encode the char here and output the encoded char
    return 0;
}

int main() {
    vector<char> code = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    string text;
    string encodedText;

    cout << "Enter text to encode: ";
    getline(cin, text);

    cout << "Output: " << text;

    // Encode the string one character at a time
    for (int C : text) {
        encodedText += encodeChar(C, code);
    }

    cout << encodedText << endl;
}
