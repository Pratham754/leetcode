class MyCircularDeque {

public:
    vector<int> data;
    int front, rear, size, cap;
    MyCircularDeque(int k) {
        cap = k;
        data.resize(k);
        front = 0;
        rear = 0;
        size = 0;
    }

    bool insertFront(int value) {
        if (isFull())
            return false;
        front = (front - 1 + cap) % cap;
        data[front] = value;
        size++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull())
            return false;
        data[rear] = value;
        rear = (rear + 1) % cap;
        size++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty())
            return false;
        front = (front + 1) % cap;
        size--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty())
            return false;
        rear = (rear - 1 + cap) % cap;
        size--;
        return true;
    }

    int getFront() {
        if (isEmpty())
            return -1;
        return data[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;
        return data[(rear - 1 + cap) % cap];
    }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == cap; }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
