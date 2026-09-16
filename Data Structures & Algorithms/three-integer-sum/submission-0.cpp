class Solution {
public:

vector<vector<int>> _2sum(vector<int>& nums, int tgti) {
    unordered_set<int> seen;  // values scanned in suffix
    unordered_set<int> used;  // values already emitted in a pair
    vector<vector<int>> res;
    int tgt = -nums[tgti];

    for (int i = tgti + 1; i < (int)nums.size(); i++) {
        int x = nums[i], y = tgt - x;
        if (seen.count(y) && !used.count(x) && !used.count(y)) {
            res.push_back({x, y});
            used.insert(x);
            used.insert(y);
        }
        seen.insert(x);
    }
    return res;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> uniq; // global dedup

    for (int i = 0; i < (int)nums.size(); i++) {
        auto pairs = _2sum(nums, i); // fix 1: don't overwrite
        for (auto p : pairs) {
            vector<int> t = {nums[i], p[0], p[1]};
            sort(t.begin(), t.end());
            uniq.insert(t); // fix 3: same triplet found via different i
        }
    }
    return vector<vector<int>>(uniq.begin(), uniq.end());
}
};
