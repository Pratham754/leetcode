class Solution {
public:
    void sieve(vector<bool>& v, int r) {
        v[0] = v[1] = false;
        for (int p = 2; p * p <= r; p++) {
            if (v[p]) {
                for (int i = p * p; i <= r; i += p)
                    v[i] = false;
            }
        }
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> v(right + 1, true);
        sieve(v, right);
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (v[i])
                primes.push_back(i);
        }
        if (primes.size() < 2) {
            return {-1, -1};
        }
        int minDiff = INT_MAX;
        vector<int> result;
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }

        return result;
    }
};