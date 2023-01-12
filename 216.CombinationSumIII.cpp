class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;
        vector<int> temp;
        calculate_sum(1,n,k,v,0,temp);
        return v;
    }
    void calculate_sum(int index, int n, int k, vector<vector<int>>& v, int sum, vector<int>& temp)
    {
        if(sum == n && k == 0)
        {
            v.push_back(temp);
            return;
        }    
        if(sum > n)
            return;
        for(int i = index; i <= 9; i++)
        {
            if(i > n)
                break;
            temp.push_back(i);
            calculate_sum(i+1,n,k-1,v,sum+i,temp);
            temp.pop_back();
        }
    }
};
