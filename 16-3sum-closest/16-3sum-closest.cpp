class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
         sort(nums.begin(),nums.end());
        int n=nums.size(),ans;
        int min=INT_MAX;
        for(int i=0;i<n-2;i++){
            int l=i+1, r= n-1;

        while(l<r){
        int sum =nums[i]+nums[l]+nums[r];
        if(sum==target) return sum;
        else if(abs(sum-target)<min){
            min=abs(sum-target);
            ans=sum;
        }
    if(sum<target) l++;
    else if (sum>target)r--;
        }
}
  return ans;  
        
    }
};