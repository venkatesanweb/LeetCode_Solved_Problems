class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
        while(!grid[0].empty()){
            int maxi=0;
            for(vector<int> &temp : grid){
                int tempmax = *max_element(temp.begin(),temp.end());
                for(int i=0;i<temp.size();i++){
                    if(tempmax==temp[i]){
                        temp.erase(temp.begin()+i);
                        break;
                    }
                }
                maxi = max(maxi,tempmax);
            }
            sum+=maxi;

        }
        return sum;
    }
};
