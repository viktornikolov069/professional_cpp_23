#include "print"
// #include "string"
// #include <compare>

int main() {
    const std::string text {"  12.3USD"};
    size_t index {0};
    double res = std::stod(text, &index);
    std::println("{}", res);
    std::println("{}", text);
}