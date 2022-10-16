// https://leetcode.com/problems/pascals-triangle-ii/submissions/

// This solution only accepted when the number of input is upto 33

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        
        long long val=1;
        
        for(int j=0;j<=rowIndex;j++)
        {
            ans.push_back(val);
            val=val* (rowIndex-j) / (j+1);
        }
        
        return ans;
    }
};

// All test case pass on Leetcode


// But on GFG we have more number of rows becoz they are giving rownumber greater than 33
// Space Complexity -- o(n^2)
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        
        vector<vector<ll>> rec;
        vector<ll> ans;
        
        if(n==0)
        {
            ans.push_back(0);
            return ans;
        }
        
        for(int i=0;i<n;i++)
        {
            ans.clear();
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i) ans.push_back(1);
                else
                 ans.push_back((rec[i-1][j-1]+rec[i-1][j])%1000000007);
            }
            
            if(i==n-1) return ans;
            
            rec.push_back(ans);
            
        }
        
        return ans;
    }
};

// Optimize the Space Complexity O(n)

class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll> ans;
        
        if(n<0) return ans;
        ans.push_back(1);
        for(int i=1;i<n;i++)
        {
            for(int j=i;j>0;j--)
            {
                ans[j]=(ans[j]+ans[j-1])%1000000007;
            }
            ans.push_back(1);
        }
        
        return ans;
    }
};
