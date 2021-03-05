class Solution {
public:
    int removeDuplicates(vector<int>& v) {
       
      sort(v.begin(),v.end());
       vector<int>::iterator ip=  unique(v.begin() , v.end());
        v.resize(distance (v.begin(),ip));
        
         return v.size();
    }
   
};
