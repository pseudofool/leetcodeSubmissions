class Solution {
public:
    bool palindrome(string s, int st, int en){
        while(st < en){
            if(s[st] == s[en]){
                st++;;
                en--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int st = 0;
        int en = s.length()-1;
        while(st < en){
            if(s[st] == s[en]){
                st++;
                en--;
            }else{
                bool check = palindrome(s, st+1, en);
                if(check){
                    return true;
                }else{
                    bool check = palindrome(s, st, en-1);
                    if(check){
                        return true;
                    }else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};