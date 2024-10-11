class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> op(n);
        op[0] = 1;
        for(int i=1;i<n;i++){
            op[i] = op[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1;i>=0;i--){
            op[i] *= right;
            right *= nums[i];
        }
        return op;
    }
};

auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();