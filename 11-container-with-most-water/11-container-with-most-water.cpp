class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left=0;
        
        int maxArea=0;
        
        while(left<right)
        {
            int width=right-left;
            
            int h = min(height[left],height[right]);
            int area=width*h;
            maxArea=max(maxArea,area);
            
            if(height[left]<height[right]) left++;
            else if(height[right]<height[left]) right--;
            else
            {
                left++;
                right--;
            }
        }
        
        return maxArea;
        
    }
};