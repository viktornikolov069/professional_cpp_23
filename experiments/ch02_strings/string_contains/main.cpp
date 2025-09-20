#include "print"
// #include "string"
// #include <compare>

int main() {
    char *ptr {"hello"};
    // ptr[1] = 'a';
    std::println("{}", ptr);
    std::println(R"-(Embedded )" characters)-");

    std::string s1 = "hello";
    std::string s2 = "hello";
    std::string s3 {"The fox has hello in its nam123e"};
    // std::string null {"helo"};
    // std::string s4 {nullptr};

    auto res {s1 <=> s2};
    if (std::is_gt(res)) {
        std::println("greater");
    }
    if (std::is_lt(res)) {
        std::println("less");
    }
    if (std::is_eq(res)) {
        std::println("equal");
    }

    if (-1) {
        std::println("Entered 0");
    }

    if (s3.contains("123")) {
        std::println("The fox does indeed have 123 in its name");
    }

    const std::string haystack {std::string("haystack with needles")};
    const auto needle {std::string("needle")};

    if (haystack.contains(needle)) {
        std::println("Needle found");
    }
    // found!
    // Assign the string literal to
    // Undefined behaviorreturn 0; }
}