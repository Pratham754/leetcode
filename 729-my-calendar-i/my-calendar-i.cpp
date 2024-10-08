class MyCalendar {
public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (const auto& event : bookings) {
            if (start < event.second && end > event.first)
                return false;
        }
        bookings.emplace_back(start, end);
        return true;
    }

private:
    vector<pair<int, int>> bookings;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */