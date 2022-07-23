class Solution {
public:
    
    void merge(int left,int mid,int right,vector<pair<int,int>>&arr,vector<int>& count){
        
        vector<pair<int,int>>dummy(right-left+1);
        
        int i=left;
        int j=mid+1;
        int k=0;
        
        
        while(i<=mid && j<=right){
            if(arr[i].first<=arr[j].first){
                dummy[k]=arr[j];
                k++;j++;
            }
            else if(arr[i].first>arr[j].first){
                count[arr[i].second]+=right-j+1;
            dummy[k++]=arr[i++];
        
            }
        }
        
        while(i<=mid){
            dummy[k++]=arr[i++];
            
        }
        while(j<=right){
            dummy[k++]=arr[j++];
            
        }
        
        for(int l=left;l<=right;l++){
            arr[l]=dummy[l-left];
        }
    }
    
    
    void mergeSort(int left,int right,vector<pair<int,int>>&arr,vector<int>&count){
        if(left>=right) return;
        
        int mid=left+(right-left)/2;
        
        mergeSort(left,mid,arr,count);
        mergeSort(mid+1,right,arr,count);
        merge(left,mid,right,arr,count);
        
    }
    vector<int> countSmaller(vector<int>& nums) {
        
        int n=nums.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        
        vector<int>count(n,0);
        mergeSort(0,n-1,arr,count);
       
        return count;
    }
};