#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::vector<std::string> words;
    std::string line;
    const std::string delim(" ![,?.\\_'@+]");
    
    std::getline(std::cin, line);

    std::size_t start = 0, found = line.find_first_of(delim);
    bool done = false;
    while (!done) {
        if (found == std::string::npos) {
            done = true;
            if (line.length()-start > 0)
                words.push_back(std::string(line.begin()+start, line.end()));
        } else {
            if (found-start > 0)
                words.push_back(std::string(line.begin()+start, line.begin()+found));
            start = found+1;
            found = line.find_first_of(delim, found+1);
        }
    }
    
    std::cout << words.size() << std::endl;
    for (auto word : words) {
        std::cout << word << std::endl;
    }
    return 0;
}

