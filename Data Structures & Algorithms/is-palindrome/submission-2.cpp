class Solution {
public:

    bool isAlphaNum(char c) {
        if((c >= 'a' && c <= 'z')
            || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9')) {
            return 1;
        } else {
            return 0;
        }
    }

    bool isPalindrome(string s) {

        int sti = 0;
        int eni = s.size()-1;

        while( sti < eni) {
            while(!isAlphaNum(s[sti])) {
                sti++;
            }

            while(!isAlphaNum(s[eni])) {
                eni--;
            }
    
        
            if( sti >=0 && sti < s.size() && eni >=0 && eni <s.size() && std::tolower(static_cast<unsigned char>(s[sti])) != std::tolower(static_cast<unsigned char>(s[eni])))
                return 0;

            sti++;
            eni--;
        }

        return 1;
        
    }
};
