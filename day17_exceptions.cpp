//Write your code here
class Calculator {
public:
    Calculator() {}
    int power(int n, int p) {
        int result = 1;
        if (n < 0 || p < 0) {
            throw(std::runtime_error("n and p should be non-negative"));
        } else {
            for (size_t i = 0; i < p; ++i) {
                result *= n;
            }
        }
        return result;
    }
};

