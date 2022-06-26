// https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string s;
        while (carry || a.size() || b.size()) {
            int value = carry;
            if (!a.empty()) {
                value += a.back() - '0';
                a.pop_back();
            }
            if (!b.empty()) {
                value += b.back() - '0';
                b.pop_back();
            }
            
            carry = value / 2;
            value = value % 2;
            s.insert(0, 1, '0' + value);
        }
        return s;
    }
};
