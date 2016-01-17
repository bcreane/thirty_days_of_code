#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>

typedef std::vector<std::pair<int, int>> pairs_t;

void
get_sorted_vector(std::vector<int>& v)
{
    size_t num_elems;
    std::cin >> num_elems;

    while (num_elems-- > 0) {
        int i;
        std::cin >> i;
        v.push_back(i);
    }
    std::sort(v.begin(), v.end());
}

pairs_t
get_min_pairs(const std::vector<int>& v)
{
    int min_diff = INT_MAX;
    pairs_t p;

    for (size_t ndx = 1; ndx < v.size(); ++ndx) {
        int d = abs(v[ndx] - v[ndx-1]);
        min_diff = std::min(min_diff, d);
    }

    for (size_t ndx = 1; ndx < v.size(); ++ndx) {
        int d = abs(v[ndx] - v[ndx-1]);
        if (d == min_diff) {
            p.push_back(std::make_pair(v[ndx-1], v[ndx]));
        }
    }

    return p;
}

int
main()
{
    std::vector<int> v;
    get_sorted_vector(v);

    pairs_t pairs = get_min_pairs(v);
    for (const auto& p : pairs) {
        std::cout << p.first << " " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}

