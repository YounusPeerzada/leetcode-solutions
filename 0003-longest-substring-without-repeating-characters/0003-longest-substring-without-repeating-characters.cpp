class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            unordered_set<char> seen;
            for (int j = i; j < n; j++) {
                if (seen.count(s[j])) {
                    break;
                }

                seen.insert(s[j]);
                max_length = max(max_length, j - i + 1);
            }
        }

        return max_length;
    }
};