//1Reverse a String Write a function that takes a string as input and returns the reversed version of it. Example :std::string reverseString(const std::string& str);
//2Find the Largest Number in an Array Write a function that takes an array of integers and returns the largest number. Example: int findMax(const std::vector<int>& arr);
#include <iostream>
using namespace std;

string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string input = "Lets try this";
    cout << "Original:" << input << endl;
    cout << "Reversed:" << reverseString(input) << endl;
    return 0;
}
