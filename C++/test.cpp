//1Reverse a String Write a function that takes a string as input and returns the reversed version of it. Example :std::string reverseString(const std::string& str);
//2Find the Largest Number in an Array Write a function that takes an array of integers and returns the largest number. Example: int findMax(const std::vector<int>& arr);
#include <iostream>
using namespace std;
#include <vector>;

//1)
/*

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
*/
//2)
int findMax(const vector<int>& arr) {
    int temp = arr[0];
    for (int i=0;i<arr.size(); i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }

    }
    return temp;


}

int main() {
    vector <int> arr = {41,2,3,41,5,436,71111,8,43};
    cout << "Largest num here is: "<<findMax(arr) << endl;
    return 0;
}



