 #include<iostream>
 #include<vector>
 using namespace std;

 void insert(vector<int> &v,int temp)
    {
      if(v.size()==0 || v[v.size()-1]<=temp)
      {
          v.push_back(temp);
          return;
      }
        int val = v[v.size()-1];
        v.pop_back();
        insert(v,temp);
        
        v.push_back(val);
    }
    
    void Sort(vector<int> &nums)
    {
        if(nums.size()==1) return;
        
        int temp = nums[nums.size()-1];
        nums.pop_back();
        
        Sort(nums);
        insert(nums,temp);
    }

    int main()
    {
       vector<int> st{5,4,6,1,0,7};
       Sort(st);
       for(auto A : st) cout<<A<<" ";
    }