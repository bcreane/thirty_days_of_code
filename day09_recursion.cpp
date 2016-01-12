#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int find_gcd(int a, int b)
{
    if (a == b || a == 1)
        return a;

    return find_gcd(std::max(a, b) - std::min(a, b), std::min(a, b));
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << find_gcd(a,b) << std::endl;
    
    return 0;   
}

