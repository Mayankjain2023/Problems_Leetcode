class Solution {
public:
    
    int firstIndex(vector<int>&nums,int target){
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid;
        int ans=-1;
        
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(nums[mid]==target){
               
                    ans=mid;
                    end=mid-1;
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            
        }
        return ans;
    }
    
     int secIndex(vector<int>&nums,int target){
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid;
         int ans=-1;
            
        
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            if(nums[mid]==target){
               
                    ans=mid;
                    start=mid+1;
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
      
       
        vector<int>v;
        int first=firstIndex(nums,target);
        int second=secIndex(nums,target);
        v.push_back(first);
        v.push_back(second);
        return v;
    }
};