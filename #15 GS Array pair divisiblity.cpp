bool canPair(vector<int> nums, int k)
    {
        // Code here.
        int n = nums.size();
        if(n%2 != 0) return false;
        vector<int> vec(k, 0);
        for(int i=0; i<n; ++i)
        {
           vec[nums[i]%k]++;
        }
        
        if(vec[0] % 2 != 0) return false;
        
        for(int i=1; i<=k/2; ++i)
        {
            if(vec[i] != vec[k-i])
            return false;
        }
        
        if(k%2 == 0 && vec[k/2] % 2 != 0) return false;
        return true;
    }
