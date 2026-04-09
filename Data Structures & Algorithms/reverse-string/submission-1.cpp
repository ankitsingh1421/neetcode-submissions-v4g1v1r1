class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        int left = 0;
        int right = n;

        while(left < right){
             swap(s[left++],s[right--]);
        }
    }
};