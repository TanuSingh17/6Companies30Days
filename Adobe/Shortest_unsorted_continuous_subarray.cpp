class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v;
        v=nums;
        int n=nums.size();
        sort(v.begin(), v.end());
        int first=0, last=0;
        for(int i=0; i<nums.size(); i++){
            if(v[i]!=nums[i]){
                first=i;
                break;
            }
        }
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]!=nums[i]){
                last=i;
                break;
            }
        }
        if(last!=0 || first!=0)
           return last-first+1;
        return last-first;
    }
};
