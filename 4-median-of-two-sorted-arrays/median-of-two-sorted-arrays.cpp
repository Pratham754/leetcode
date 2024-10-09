class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1);
        for(int i=0;i<nums2.size();i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());

        int n = merged.size();
        if(n%2==1){
            return static_cast<double>(merged[n/2]);
        } else {
            return (static_cast<double>(merged[n/2 - 1]) + static_cast<double>(merged[n/2]))/2.0; 
        }
    }
};