vector<vector<string> > Anagrams(vector<string>& string_list)
    {
        int n = string_list.size();
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<n; ++i)
        {
           string word = string_list[i];
           sort(word.begin(), word.end());
           mp[word].push_back(string_list[i]);
        }
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
