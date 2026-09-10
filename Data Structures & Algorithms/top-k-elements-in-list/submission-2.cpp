class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    // buckets[i] = list of numbers with frequency i
    std::vector<std::vector<int>> buckets(nums.size() + 1);
    for (const auto& [num, count] : freq) {
        buckets[count].push_back(num);
    }

    std::vector<int> result;
    for (int i = buckets.size() - 1; i >= 1 && result.size() < (size_t)k; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == (size_t)k) break;
        }
    }

    return result;
    }
};
