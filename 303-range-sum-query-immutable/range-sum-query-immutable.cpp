class NumArray {
private:
    vector<int> ps;

public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        ps.resize(size,0);
        ps[0]=nums[0];
        for(int i=1; i<size; i++){
            ps[i] = nums[i] + ps[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return ps[right];
        }
        else{
            int sum = ps[right]-ps[left-1];
            return sum;
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
