
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector< int> v;
      bool ok=false;
      for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    ok=true;
                    break;
                }
            }
            if(ok)break;
        }
        return v;
    }

};
