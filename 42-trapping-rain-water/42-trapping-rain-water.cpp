class Solution {
public:
    int trap(vector<int>& height) {
        
        int size=height.size();
        
        int left_maximum[size],right_maximum[size];
        int result=0;
        left_maximum[0]=height[0];
        for(int i=1;i<size;i++){
            left_maximum[i]=max(left_maximum[i-1],height[i]);
        }
        
        right_maximum[size-1]=height[size-1];
        
        for(int i=size-2;i>=0;i--){
            right_maximum[i]=max(right_maximum[i+1],height[i]);
        }
        
        for(int i=0;i<size;i++){
            
            result=result + (min(left_maximum[i],right_maximum[i]))-height[i];
            
        }
        
        return result;
    }
};