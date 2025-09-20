#include <compare>
#include <iostream>
#include <print>
#include <vector>

int main() {
    std::vector<double> values;

    while (true) {
        double value;
        std::cin >> value;
        if (value == 0.0) {
            break;
        }
        values.push_back(value);
    }
    for (double value : values) {
        std::println("{0:16e} | {0:12f} | {0:<12g} | {0:#>+12g}", value);
    }
    return 0;
}
