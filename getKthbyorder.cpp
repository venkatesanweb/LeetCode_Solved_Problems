class Solution {
public:
    static bool comps(pair<int,int> a, pair<int,int>b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return b.second>a.second;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>vc;
        for(int i=lo;i<=hi;i++){
            int ele=i;
            int count=0;
            while(ele!=1){
                if(ele%2==0) ele/=2;
                else ele = 3*ele+1;
                count++;
            }
            vc.push_back({i,count});
        }
        sort(vc.begin(),vc.end(),
        comps
        );
        return vc[k-1].first;
    }
};
