class RecentCounter {
private:
    deque<int> records;
    int size = 0;

public:
    RecentCounter() {
        records.clear();
    }
    
    int ping(int t) {
        records.push_back(t);
        ++size;
        while(records.front() < t-3000){
            records.pop_front();
            --size;
        }
        return size;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */