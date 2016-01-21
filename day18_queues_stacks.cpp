using namespace std;

struct Palindrome {
    Palindrome() {}

    void pushCharacter(char ch) {       // Pushes a character onto a stack.
        s_.push(ch);
    }

    void enqueueCharacter(char ch) {    // Enqueues a character in a queue.
        q_.push(ch);
    }

    char popCharacter() {               // Pops and returns the top character.
        char c = s_.top();
        s_.pop();
        return c;
    }

    char dequeueCharacter() {           // Dequeues and returns the first character.
        char c = q_.front();
        q_.pop();
        return c;
    }

private:
    std::stack<char> s_;
    std::queue<char> q_;
};

