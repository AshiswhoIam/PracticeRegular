#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& input) {
    int count = 0;
    for (char c : input) {
        char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            ++count;
        }
    }
    return count;
}

int main() {
    string text = "Banana Split";
    int vowels = countVowels(text);
    cout << "Num of vowels: " << vowels <<endl;
    return 0;
}
