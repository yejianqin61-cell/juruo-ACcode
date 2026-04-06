using namespace std;
class Solution{
	public:
		vector<int> twoSum(vector<int> &num,int target){
	unordered_map<int,int> mp;
	for(int i=0;i<num.size();i++){
		int x=num[i];
		int need=target-x;
		if(mp.count(need)){
			return {mp[need],i};
		}
        if(!mp.count(x)){
            mp[x]=i;
        }
		
	}
    return {};
}
};

