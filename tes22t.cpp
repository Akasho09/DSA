#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello, World!";
    std::string s2 = "Greetings! ";

    // Append s1 to s2, excluding the first character of s1
    s2 += s1.substr(1);  // substr(1) gives a substring starting from index 1 (second character)

    std::cout << "Resulting string: " << s2 << std::endl;

    return 0;
}

// #include <iostream>
// #include <string>
// #include <algorithm> // For std::swap

// int main() {
//     std::string s = "1234";
    
//     // Swap characters at positions 1 and 3 (0-based indexing)
//     std::swap(s[1], s[3]);
    
//     std::cout << "String after swap: " << s << std::endl;
//     return 0;
// }
