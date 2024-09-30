class CustomStack {
public:
    int mVec[1000];
    int size = 0;
    int currIndex = -1;

    CustomStack(int maxSize) { size = maxSize; }

    void push(int x) {
        if (currIndex < size - 1) {
            mVec[++currIndex] = x;
        }
    }

    int pop() {
        if (currIndex < 0) {
            return -1;
        }
        int hold = mVec[currIndex];
        mVec[currIndex--] = 0;
        return hold;
    }

    void increment(int k, int val) {
        for (int i = 0; i < k && i < size; ++i) {
            mVec[i] += val;
        }
    }
};