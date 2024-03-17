class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry){
            if (i >= 0){
                carry += a[i--] - '0';
            }
            if (j >= 0){
                carry += b[j--] - '0';
            }
            ans += carry % 2 + '0'; // just change 10 to 2 because it is binary.
            carry /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
