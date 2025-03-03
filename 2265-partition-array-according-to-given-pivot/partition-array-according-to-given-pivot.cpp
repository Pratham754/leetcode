#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller, pivotElements, larger;
        
        for (int num : nums) {
            if (num < pivot) {
                smaller.push_back(num);
            } else if (num == pivot) {
                pivotElements.push_back(num);
            } else {
                larger.push_back(num);
            }
        }
        
        smaller.insert(smaller.end(), pivotElements.begin(), pivotElements.end());
        smaller.insert(smaller.end(), larger.begin(), larger.end());
        
        return smaller;
    }
};