#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

/*
 * Convert base 10 numbers to binary.
 */

int main()
{
    std::size_t num_test_cases = 0;
    std::cin >> num_test_cases;
    while (num_test_cases-- > 0) {
        unsigned int i = 0;
        std::string s;
        std::cin >> i;
        
        while (i) {
            s.push_back((i%2 ? '1' : '0'));
            i /= 2;
        }
        std::reverse(s.begin(), s.end());
        std::cout << s << std::endl;
    }

    return 0;
}

