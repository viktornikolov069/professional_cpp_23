#include <iostream>
#include <print>

std::string replaceNeedleInHaystack(const std::string &haystack, const std::string &needle,
                                    const std::string &replacement) {

    if (!haystack.contains(needle)) {
        return "";
    }
    std::string local_haystack {haystack};

    for (size_t idx = 0; local_haystack.contains(needle);) {
        auto start_needle = local_haystack.find(needle, idx);
        idx = start_needle;
        auto end_needle = local_haystack.find(needle, idx + 1);
        local_haystack.replace(start_needle, needle.length(), replacement);
        std::println("{}", idx);
    }
    return local_haystack;
}

int main() {
    std::println("Hello, Haystack!");
    std::string haystack;
    std::string needle;
    std::string replacement;
    getline(std::cin, haystack);
    getline(std::cin, needle);
    getline(std::cin, replacement);
    std::println("{}", replaceNeedleInHaystack(haystack, needle, replacement));
}
