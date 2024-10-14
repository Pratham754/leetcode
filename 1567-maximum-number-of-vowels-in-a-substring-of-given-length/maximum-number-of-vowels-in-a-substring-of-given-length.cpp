class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int n = s.size();
        int maxc = 0, count = 0;
        for(int i=0;i<k;i++){
            count += isVowel(s[i]);
        }
        maxc = count;

        for(int i=k;i<n;i++){
            count += isVowel(s[i]);
            count -= isVowel(s[i-k]);
            maxc = max(maxc,count);
        }
        return maxc;
    }
};