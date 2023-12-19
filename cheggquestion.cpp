#include <iostream>
#include <vector>
#include <string>

// Function to calculate total score for a list of strings
int calculateScore(const std::vector<std::string>& strings) {
    int score = 0;
    std::string vowels = "aeiou";

    // Iterate through each string in the list
    for (const std::string& str : strings) {
        // Iterate through each character in the string
        for (char c : str) {
            // Assign scores based on character rules
            if (c == 'z') {
                score += 10;  // 'z' = 10 points
            } else if (vowels.find(c) != std::string::npos) {
                score += 3;   // Vowels = 3 points
            } else {
                score += 1;   // Other letters = 1 point
            }
        }
    }

    return score;  // Return the total calculated score
}

// Example usage and test cases
int main() {
    std::vector<std::string> words = {"ax", "if", "pizza"};
    int totalScore = calculateScore(words);
    std::cout << "Total Score: " << totalScore << std::endl;
    return 0;
}
