#include <iostream>
#include <vector>
using namespace std;

void generateStrings(vector<char>& charSet, int k, string current, vector<string>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }

    for (char c : charSet) {
        generateStrings(charSet, k - 1, current + c, result);
    }
}

int main() {
    int n, k;
    cout << "Enter the number of characters (n): ";
    cin >> n;

    vector<char> charSet(n);
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> charSet[i];
    }

    cout << "Enter the desired string length (k): ";
    cin >> k;

    vector<string> result;
    generateStrings(charSet, k, "", result);

    cout << "All possible strings of length " << k << " are:\n";
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
