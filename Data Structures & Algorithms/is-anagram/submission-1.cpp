class Solution {
public:
    bool isAnagram(string s, string t) {
        std::array<int, 26> chcount_s = {0};
        std::array<int, 26> chcount_t = {0};
        int slen = s.size();
        int tlen = t.size();
        if(slen != tlen)
            return false;

        for(int i=0; i<slen; i++) {
            chcount_s[s[i]-97]++;
            chcount_t[t[i]-97]++; 
        }

        for(int i=0; i<26; i++) {
            if(chcount_s[i] != chcount_t[i])
                return 0;
        }

        return 1;
    }
};
