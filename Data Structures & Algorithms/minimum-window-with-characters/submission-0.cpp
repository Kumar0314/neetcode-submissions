class Solution {
public:
    string minWindow(string s, string t) {
         if (t.empty() || s.empty()) return "";

    unordered_map<char, int> dictT, windowCounts;
    for (char c : t) dictT[c]++;

    int required = dictT.size();
    int left = 0, right = 0, formed = 0;
    int minLength = INT_MAX, minLeft = 0;

    while (right < s.size()) {
        char c = s[right];
        windowCounts[c]++;

        if (dictT.find(c) != dictT.end() && windowCounts[c] == dictT[c]) {
            formed++;
        }

        while (left <= right && formed == required) {
            if (right - left + 1 < minLength) {
                minLength = right - left + 1;
                minLeft = left;
            }

            char leftChar = s[left];
            windowCounts[leftChar]--;

            if (dictT.find(leftChar) != dictT.end() && windowCounts[leftChar] < dictT[leftChar]) {
                formed--;
            }

            left++;
        }

        right++;
    }

    return minLength == INT_MAX ? "" : s.substr(minLeft, minLength);
        



    }
};
