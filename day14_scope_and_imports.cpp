
Difference(const std::vector<int>& e) : elements(e)
{
}

void computeDifference()
{
    std::sort(elements.begin(), elements.end());
    maximumDifference = elements[elements.size()-1] - elements[0];
}

