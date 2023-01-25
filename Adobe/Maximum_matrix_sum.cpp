#define ll long long 
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        ll int n=matrix.size();
        ll int count=0;
        int mi=INT_MAX;
        ll int sum=0;
        for(ll int i=0; i<n; i++){
            for(ll int j=0; j<n; j++){
               if(matrix[i][j]<=0){
                  count++;
                  
               }
               mi=min(mi, abs(matrix[i][j]));
               sum+=abs(matrix[i][j]);
            }
        }
        
        if(count%2!=0)
           sum-=2*mi;
       
        return sum;
    }
};
