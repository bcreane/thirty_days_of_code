#include <iostream>
#include <vector>

int
main()
{
    size_t num_tests = 5;
    
    std::cout << num_tests << std::endl;

    /*
     * 5 4
     * -2 -1 0 6 8                          // YES
     */
    const std::vector<int> i1 = {-2, -1, 0, 6, 8};
    const size_t thresh1 = 4;
    std::cout << i1.size() << " " << thresh1 << std::endl;
    for (auto i : i1)
        std::cout << i << " ";
    std::cout << std::endl;

    /*
     * 10 1
     * -10 0 14 16 18 20 22 24 26 28        // NO
     */
    const std::vector<int> i2 = {-10, 0, 14, 16, 18, 20, 22, 24, 26, 28};
    const size_t thresh2 = 1;
    std::cout << i2.size() << " " << thresh2 << std::endl;
    for (auto i : i2)
        std::cout << i << " ";
    std::cout << std::endl;

    /*
     * 15 8
     * -20 -19 -18 -17 -16 -15 0 12 14 16 18 20 22 24 26    // YES
     */
    const std::vector<int> i3 = {-20, -19, -18, -17, -16, -15, 0, 12, 14, 16, 18, 20, 22, 24, 26};
    const size_t thresh3 = 8;
    std::cout << i3.size() << " " << thresh3 << std::endl;
    for (auto i : i3)
        std::cout << i << " ";
    std::cout << std::endl;

    /*
     * 7 2
     * -9 -8 0 31 32 33 34                                  // NO
     */
    const std::vector<int> i4 = {-9, -8, 0, 31, 32, 33, 34};
    const size_t thresh4 = 2;
    std::cout << i4.size() << " " << thresh4 << std::endl;
    for (auto i : i4)
        std::cout << i << " ";
    std::cout << std::endl;

    /*
     * 8 8
     * -50 -40 -39 -38 -37 -36 0 6                        // YES
     */
    const std::vector<int> i5 = {-50, -40, -39, -38, -37, -36, 0, 6};
    const size_t thresh5 = 8;
    std::cout << i5.size() << " " << thresh5 << std::endl;
    for (auto i : i5)
        std::cout << i << " ";
    std::cout << std::endl;
}

