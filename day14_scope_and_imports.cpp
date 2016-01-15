
Difference(const std::vector<int>& e) : elements(e)
{
}

void computeDifference()
{
#ifdef LOG_N
    std::sort(elements.begin(), elements.end());
    maximumDifference = elements[elements.size()-1] - elements[0];
#else
    int min = INT_MIN, max = INT_MAX;
    for (size_t ndx = 0; ndx < elements.size(); ++ndx) {
	min = std::min(min, elements[ndx]);
	max = std::max(max, elements[ndx]);
    }

    maximumDifference = max - min;
#endif
}

