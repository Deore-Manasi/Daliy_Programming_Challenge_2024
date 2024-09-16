
// Reverse string problem
#include <iostream>
using namespace std;
#include <algorithm>

string reverseWords(string s) {
    string result = "", word = "";
    int n = s.size();
    
    // Traverse the string from the end to the beginning
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] != ' ') {
            word = s[i] + word; // Build the current word
        } else if (!word.empty()) {
            // If word is not empty and we hit a space, append it to the result
            if (!result.empty()) result += " ";
            result += word;
            word = ""; // Clear word for the next word
        }
    }
    
    // Append the last word if it exists
    if (!word.empty()) {
        if (!result.empty()) result += " ";
        result += word;
    }

    return result;
}

int main() {
    string s = "  the   sky is  blue  ";
    string result = reverseWords(s);
    cout << "\"" << result << "\"" <<endl;
    return 0;
}
