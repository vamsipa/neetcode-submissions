class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (auto& s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        std::vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;          // read length digits up to '#'
            int len = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, len); // read exactly len chars
            res.push_back(str);
            i = j + 1 + len;
        }
        return res;
    }
};
