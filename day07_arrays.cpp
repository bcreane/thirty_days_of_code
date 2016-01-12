#include <vector>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (std::size_t i = 0; i < n; i++) {
       std::cin >> arr[i];
    }
    
    for (ssize_t i = arr.size() - 1; i >= 0; i--)
        std::cout << arr[i] << " ";

    std::cout << std::endl;
   
    return 0;
}

