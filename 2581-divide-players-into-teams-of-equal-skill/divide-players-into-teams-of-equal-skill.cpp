class Solution {
public:
    long long dividePlayers(vector<int>& skillLevels) {
        sort(skillLevels.begin(), skillLevels.end());

        int numPlayers = skillLevels.size();
        int teamBalancingFactor = skillLevels[0] + skillLevels[numPlayers - 1];
        long long productSum = 0;

        for (int left = 0, right = numPlayers - 1; left < right;
             ++left, --right) {
            if (skillLevels[left] + skillLevels[right] != teamBalancingFactor) {
                return -1;
            }
            productSum +=
                static_cast<long long>(skillLevels[left]) * skillLevels[right];
        }
        return productSum;
    }
};