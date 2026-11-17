class Solution {
public:

    bool arValSubset(std::array<int, 26>& s1, std::array<int, 26>& s2) {
        for(int i=0; i<26; i++) {
            if(s2[i]<s1[i]) {
                return 0;
            }
        }

        return 1;
    }

    bool checkInclusion(string s1, string s2) {

        int s1len = s1.size();
        int s2len = s2.size();

        if(s1len==0)
            return 0;

        if(s2len < s1len)
            return 0;

        std::array<int, 26> s1ChCntAr{};
        std::array<int, 26> s2ChCntAr{};

        for(int i=0; i<s2len; i++) {

            s2ChCntAr[s2[i] - 'a']++;
            if(i<s1len)
                s1ChCntAr[s1[i] - 'a']++;

            if(i>=s1len) {
                s2ChCntAr[s2[i-s1len] - 'a']--;                
            }

            if( i>= s1len-1 && arValSubset(s1ChCntAr, s2ChCntAr))
                return 1;
        }

        return 0;
        
    }
};
