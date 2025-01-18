class NumArray {
public:
    vector<int>ps;
    vector<int>nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
        ps = vector<int>(nums.size(),0);

        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            ps[i] = s;
        }
    }
    
    void update(int index, int val) {
        int diff = val - nums[index];
        nums[index] = val;
        for (int i = index; i < nums.size(); i++) {
            ps[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return ps[right];
        else return ps[right]-ps[left-1];
        return 0;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */