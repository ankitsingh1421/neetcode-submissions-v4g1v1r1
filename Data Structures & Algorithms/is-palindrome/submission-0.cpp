class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            if(!isalnum(s[left])){
                s[left++];
            }else if(!isalnum(s[right])){
                s[right--];
            }else if(tolower(s[left]) != tolower(s[right])){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
};
