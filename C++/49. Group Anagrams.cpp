class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> keyValuePairs;

        for(auto s : strs)
        {
            string key = s;
            sort(key.begin(),key.end());
            keyValuePairs[key].push_back(s);
        }

        vector<vector<string>> result;

        for (auto valuePairs : keyValuePairs)
        {
            result.push_back(valuePairs.second);
        }

        return result;
    }
};
