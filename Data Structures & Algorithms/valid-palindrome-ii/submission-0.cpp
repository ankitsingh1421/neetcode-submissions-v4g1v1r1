class Solution {
public:
    bool checkalnum(char c){
        return ( (c >= 'a' && c <= 'z') || 
                 (c >= 'A' && c <= 'Z') || 
                 (c >= '0' && c <= '9') );
    }

    char checklower(char c){
        if(c >= 'A' && c <= 'Z'){
            return c + 32;
        }
        return c;  
    }

    bool isPal(string &s, int left, int right){
        while(left < right){
            if(checklower(s[left]) != checklower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while(left < right){
            if(checklower(s[left]) != checklower(s[right])){
                return isPal(s, left+1, right) || isPal(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};