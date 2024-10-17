class Solution {
public:
    int maximumSwap(int num) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int maxIndex = -1, low = -1, high = -1;
        string nums = to_string(num);
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            if(maxIndex == -1 || nums[i] > nums[maxIndex]){
                maxIndex = i;
            }
            else if (nums[i]<nums[maxIndex]){
                low = i;
                high = maxIndex;
            }
        }
        if(low != -1 && high != -1){
            swap(nums[low],nums[high]);
        }
        return stoi(nums);
    }
};