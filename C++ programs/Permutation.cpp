class Solution {
private: 
    void permute(vector<int>& nums, vector<vector<int>>&ans,
                 vector<int>&freq, vector<int>&ds){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(!freq[i]){
                freq[i] = 1;
                ds.push_back(nums[i]);
                permute(nums, ans, freq, ds);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }   
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds, freq(10,0);
        permute(nums, ans, freq, ds);
        return ans;
    }
};