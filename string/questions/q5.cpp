#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcacbadec";
    int fre[26] = {0};  // Initialize frequency array to zero

    // Count frequencies of each character
    for (char ch : str) {
        fre[ch - 'a']++;
    }

    // Output the frequency of all characters
    for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) { // Only print characters that appear in the string
            char character = i + 'a'; // Convert index back to character
            cout << character << ": " << fre[i] << endl;
        }
    }

    return 0;
}
