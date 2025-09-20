#include "print"

std::string extractExtension(std::string_view file) {

    return std::string {file.substr(file.rfind("."))};
}

int main() {
    std::string filename {R"(c:\temp\my file.ext)"};
    std::println("C++ string: {}", extractExtension(filename));

    const char *cString {R"(c:\temp\my file.ext)"};
    std::println("C string: {}", extractExtension(cString));

    std::println("Literal: {}", extractExtension(R"(c:\temp\my
file.ext)"));

    std::println("こんにちは世界");
    std::println("😀");
}