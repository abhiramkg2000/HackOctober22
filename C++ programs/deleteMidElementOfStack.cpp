class Solution
{
    void deleteM(stack<int>&st,int &mid)
    {
        if(st.size()==mid)
        {
            st.pop();
            return;
        }
        int temp = st.top();
        st.pop();
        deleteM(st,mid);
        
        st.push(temp);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.empty()) return;
        int mid = ceil((sizeOfStack+1)/2);
       deleteM(s,mid);
       return;
    }
};

//No Need TO Find the Size Everytime lets do it.
class Solution
{
    void deleteM(stack<int>&st,int mid)
    {
        if(mid==1)
        {
            st.pop();
            return;
        }
        int temp = st.top();
        st.pop();
        deleteM(st,mid-1);
        
        st.push(temp);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.empty()) return;
        int mid = (sizeOfStack/2)+1;
       deleteM(s,mid);
       return;
    }
};