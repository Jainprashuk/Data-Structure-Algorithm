#include <iostream>
#include <vector>
using namespace std;

void generateStringsNoConsecutive(vector<char>& charSet, int k, string current, vector<string>& result, char lastChar) {
    if (k == 0) {
        result.push_back(current);
        return;
    }

    for (char c : charSet) {
        if (c != lastChar) {
            generateStringsNoConsecutive(charSet, k - 1, current + c, result, c);
        }
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
    generateStringsNoConsecutive(charSet, k, "", result, '\0');

    cout << "All possible strings of length " << k << " with no consecutive repeated characters are:\n";
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
