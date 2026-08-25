#define ll long long
class Solution {
public:
    long long countGoodSubarrays(vector<int>& nums) {
        int n=nums.size();
        
        ll ans=0;
        unordered_map<int,vector<int>> pos;
        vector<vector<int>> bit_pos(30);
        for(int i=0;i<n;i++) 
        {
            bitset<30> b(nums[i]);
            for(int j=0;j<30;j++) 
            {
                if(b[j]==1)
                {
                    bit_pos[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++) pos[nums[i]].push_back(i);
        unordered_map<int,int> count;
        for(int index=0;index<n;index++)
        {
            ll val=nums[index];
            
            int left=0,right=n-1;
            bitset<30> b_val(val);
            for(int i=0;i<30;i++)
            {
                if(b_val[i]==0)
                {
                    auto it=upper_bound(bit_pos[i].begin(),bit_pos[i].end(),index);
                    if(it!=bit_pos[i].end()) 
                    {
                        right=min(right,*it-1);
                    }
                    it=lower_bound(bit_pos[i].begin(),bit_pos[i].end(),index);
                    if(it!=bit_pos[i].begin()) 
                    {
                        it--;
                        left=max(left,*it+1);
                    }
                }
            }
            ll rightdist=(right-index+1);
            ll left_if_seen=-1;
            if(count[val]!=0)
            {
                ll times_seen=count[val];
                int index_at_last_seen=pos[val][times_seen-1];
                left_if_seen=index_at_last_seen;
            }
            left=max(left,(int)left_if_seen+1);
            ll leftdist=(index-left+1);
            ll tot=(rightdist*leftdist);
            ans+=tot;
            count[val]++;
        }
        return ans;
    }
};
