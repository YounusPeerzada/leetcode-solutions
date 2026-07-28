class Solution {
public:
    vector<string> ans;
    int n;

    void backtrack(string current, int open, int close) {
        if (current.length() == n * 2) {
            ans.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(current + "(", open + 1, close);
        }

        if (close < open) {
            backtrack(current + ")", open, close + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        this->n = n;
        backtrack("", 0, 0);
        return ans;
    }
};