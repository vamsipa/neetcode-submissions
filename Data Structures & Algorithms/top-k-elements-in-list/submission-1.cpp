class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::vector<int> res;

        std::unordered_map<int, int> mp_frq;

        for(int i: nums) {
            if(mp_frq.count(i)) {
                mp_frq[i]++;
            } else {
                mp_frq[i]=1;
            }

        }

        std::vector<std::pair<int, int>> vec(mp_frq.begin(), mp_frq.end());
        std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){return a.second > b.second;});

        for(int i=0; i<k; i++) {
            res.push_back(vec[i].first);
        }

        return res;
    }
};
