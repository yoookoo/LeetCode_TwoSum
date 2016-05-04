class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //建一个unordered_map的hash表
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];
            if (hash.find(numberToFind) != hash.end()) {  //在hash表中找到numberToFind则为true，否则为false
                result.push_back(hash[numberToFind]);
                result.push_back(i);          //向result中加入numberToFind和i
                return result;
            }
            hash[nums[i]] = i;
        }
    return result;
    }
};
