class Solution {
public:
    bool isValid(string s) {
         stack<char> ss;
         for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{'  || s[i] == '['){
                ss.push(s[i]);
            }else{
                if(ss.size() == 0){
                    return false;
                }
              if(ss.top() == '(' && s[i] ==')' ||
                 ss.top() == '{' && s[i] =='}' ||
                 ss.top() == '[' && s[i] ==']'
              ){
                ss.pop();
              }else{
                return false;
              }
            }
         }
            return ss.size() == 0; 

    }
};
