class Solution {
public:
    void backtrack(vector<string>& result, string current, int open, int close, int max) {
        // Base case: if the current string is well-formed and has used all parentheses
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        // Add an opening bracket if we still have some left
        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }

        // Add a closing bracket if it would not lead to an invalid sequence
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};
