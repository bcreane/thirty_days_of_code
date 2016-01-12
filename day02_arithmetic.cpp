#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

namespace {
    void
    read_amounts(double* orig_price, int* tip, int* tax)
    {
        std::cin >> *orig_price;
        std::cin >> *tip;
        std::cin >> *tax;
    }
}

int
main()
{
    double orig_price, total;
    int tip, tax;
    
    ::read_amounts(&orig_price, &tip, &tax);

    total = ((tip * orig_price) / 100) + ((tax * orig_price) / 100) + orig_price + 0.5;
    std::cout << "The final price of the meal is $" << (int)total << "." << std::endl;

    return 0;
}

