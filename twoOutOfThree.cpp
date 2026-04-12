class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& num1, vector<int>& num2, vector<int>& num3) {
	set<int> a,b,c;
	for(auto x:num1) a.insert(x);
	for(auto x:num2) b.insert(x);
	for(auto x:num3) c.insert(x);
	map<int,int> ans;
	for(auto x : a) ans[x]++;
	for(auto x : b) ans[x]++;
	for(auto x : c) ans[x]++;
	vector<int> res;
	for(auto x : ans){
		if(x.second >1) res.push_back(x.first);
	}
	return res;

}
};
