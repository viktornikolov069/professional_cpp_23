#include <cstddef>
#include <iostream>
#include <print>
#include <string>
#include <vector>

// input
// dog cat mouse bear dolphin lion tiger elephant giraffe zebra
// output
// |   dog    |   cat    |  mouse   |   bear   | dolphin  |
// |   lion   |  tiger   | elephant | giraffe  |  zebra   |

int main() {
    // A vector to store all words.
    std::vector<std::string> words;

    // Ask the user to enter words until * is entered.
    std::println("Input words. * to stop:");
    while (true) {
        std::string word;
        std::cin >> word;
        if (word == "*") {
            break;
        }
        words.push_back(word);
    }

    // Find longest word.
    std::size_t longestWord {0};
    for (const auto &word : words) {
        if (word.size() > longestWord) {
            longestWord = word.size();
        }
    }

    // Print words in columns. The width of the columns is
    // based on the length of the longest word.
    unsigned count {0};
    for (const auto &word : words) {
        std::print("| {:^{}} ", word, longestWord);
        if (++count == 5) {
            std::println("|");
            count = 0;
        }
    }
    if (count != 0) {
        std::println("|");
    }
}