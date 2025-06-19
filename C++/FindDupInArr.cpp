//Find Duplicate Elements in an Array Write a function to find and return all duplicate elements in an array. Example: std::vector<int> findDuplicates(const std::vector<int>& nums);
#include <iostream>
#include <vector>
using namespace std;

vector<int> findDup(const vector<int>& num) {
    vector<int> dup;

    for (int i = 0; i < num.size(); i++) {
        bool counted = false;

        for (int k = 0; k < i; k++) {
            if (num[i] == num[k]) {
                counted = true;
                break;
            }
        }
        if (counted) continue;

        for (int j = i + 1; j < num.size(); j++) {
            if (num[i] == num[j]) {
                dup.push_back(num[i]);
                break;
            }
        }
    }

    return dup;
}

int main() {
    vector<int> num = {23, 32, 12, 12, 76, 27, 12, 76};
    vector<int> dups = findDup(num);

    cout << "Duplicate elements here are the following: ";
    for (int d : dups) {
        cout << d << " ";
    }
    return 0;
}
