class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> res;
        for(int i=0; i<n; i++) {
            int prefix = 0;
            for(int j=i; j<n; j++) {
                prefix += nums[j];
                res.push_back(prefix);
            }
        }
        sort(res.begin(), res.end());
        int mod = 1'000'000'007;
        long long ans = 0;
        for(int i=left-1; i<right; i++) {
            ans = (ans + res[i]) % mod;
        }
        return static_cast<int>(ans);
    }
};
