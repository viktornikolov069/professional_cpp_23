#include <iostream>
#include <print>

std::string replaceNeedleInHaystack(std::string_view haystack, std::string_view needle,
                                    std::string_view replacement) {

    if (!haystack.contains(needle)) {
        return "";
    }
    std::string local_haystack {haystack};

    auto position = local_haystack.find(needle);
    std::println("{}", position);

    while (position != std::string::npos) {
        local_haystack.replace(position, needle.length(), replacement);
        position = local_haystack.find(needle, replacement.length() + position);
        std::println("{}", position);
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
