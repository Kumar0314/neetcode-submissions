class Solution {
public:
    // Function to encode a vector of strings into a single string
    string encode(vector<string>& strs) {
        string st;
        for (const string& str : strs) {
            // Encode each string as "<length>#<string>"
            st += to_string(str.size()) + '#' + str;
        }
        return st;
    }

    // Function to decode the encoded string back into a vector of strings
    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            // Find the position of the delimiter '#'
            int j = s.find('#', i);
            // Extract the length of the next string
            int length = stoi(s.substr(i, j - i));
            // Extract the actual string based on the length
            string str = s.substr(j + 1, length);
            ans.push_back(str);
            // Move to the next encoded string segment
            i = j + 1 + length;
        }
        return ans;
    }
};
