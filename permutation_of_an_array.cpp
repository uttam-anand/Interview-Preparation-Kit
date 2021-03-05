class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector < vector< int > >ans;
        vector< int > temp;
        sort(nums.begin() ,  nums.end() );
        do
        {
            for( int i = 0 ; i<nums .size() ; i++)
                temp.push_back(nums[i]);
            
            ans.push_back(temp);
            temp.clear();
        }while(next_permutation( nums.begin(), nums.end()));
    return ans;
    }
    
};


                            // Second Method to do the same problem using the method of backtracking :


class Solution {
public:
    void permute_helper(vector < vector< int>>&ans,  vector < int> nums, int start)
    {
        if(start == nums . size())
        {
            ans. push_back(nums);
            return ;
        }
        
        for( int i=start; i< nums.size() ;i++)
        {
            swap(nums [i], nums[start]);
            
            permute_helper(ans,  nums, start +1);
            
            swap(nums [i] , nums[start]);
                
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector < vector< int > >ans;
        permute_helper(ans, nums ,0);
    return ans;
    }
};
