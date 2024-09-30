#include <vector>
using namespace std;

class CustomStack {
private:
    vector<int> stack; 
    vector<int> increments;
    int maxSize;

public:
    CustomStack(int maxSize) : maxSize(maxSize) {

    }

    void push(int x) {
        if (stack.size() < maxSize) {
            stack.push_back(x);
            increments.push_back(0);
        }
    }

    int pop() {
        if (stack.empty()) {
            return -1;
        }
        int index = stack.size() - 1;
        int value = stack[index] + increments[index];
        stack.pop_back();
        increments.pop_back();
        if (index > 0) {
            increments[index - 1] += increments[index];
        }
        return value;
    }

    void increment(int k, int val) {
        if (!stack.empty()) {
            int limit = min(k, (int)stack.size()) - 1;
            increments[limit] += val;
        }
    }
};