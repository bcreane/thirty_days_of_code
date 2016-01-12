#include <iostream>

/*
 * If N is odd, print "Weird".
 * If N is even and, in between the range of 2 and 5(inclusive), print "Not Weird".
 * If N is even and, in between the range of 6 and 20(inclusive), print "Weird".
 * If N is even and N>20, print "Not Weird".
 */

namespace {
    bool is_odd(int n)
    {
        return (n & 1) != 0;    
    }
    
    void check(int n)
    {
        if (::is_odd(n)) {
            std::cout << "Weird" << std::endl;
        } else if (n >= 2 && n <= 5) {
            std::cout << "Not Weird" << std::endl;
        } else if (n >= 6 && n <= 20) {
            std::cout << "Weird" << std::endl;
        } else {
            std::cout << "Not Weird" << std::endl;
        }
    }
}

int
main()
{
    int n;
    std::cin >> n;

    check(n);

    return 0;
}

