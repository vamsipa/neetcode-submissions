class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> res;
        std::unordered_map<std::string, std::vector<std::string>> mp_anag;

        std::array<int, 26> chcnt = {0};

        for(std::string str: strs) {
            chcnt = {0};
            for(int i=0; i<str.size(); i++) {
                chcnt[str[i]-'a']++;
            }

            std::string chcntstr = "";
            for(int i: chcnt) {
                chcntstr.push_back(i-97);
            }

            if(mp_anag.count(chcntstr)) {
                mp_anag[chcntstr].push_back(str);
            } else {
                mp_anag[chcntstr] = {str};
            }
        }

        for(std::pair<std::string, std::vector<std::string>> el: mp_anag) {
            res.push_back(el.second);
        }
        return res;
    }
};
