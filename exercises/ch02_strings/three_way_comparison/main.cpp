#include <compare>
#include <iostream>
#include <print>

int main() {
    std::println("Hello, World!");
    std::string s1;
    std::string s2;
    getline(std::cin, s1);
    getline(std::cin, s2);

    auto res {s1 <=> s2};

    if (std::is_gt(res)) {
        std::println("s1 is greater");
    }
    if (std::is_lt(res)) {
        std::println("s1 is lesser");
    }
    if (std::is_eq(res)) {
        std::println("equal");
    }

    if (std::strong_ordering result {s1 <=> s2}; result == std::strong_ordering::less) {
        std::println("less");
    } else if (result == std::strong_ordering::greater) {
        std::println("greater");
    } else if (result == std::strong_ordering::equivalent) {
        std::println("equivalent");
    } else if (result == std::strong_ordering::equal) {
        std::println("equal");
    }

    return 0;
}
