class NumArray {
public:
    vector<int>list;
    int sum=0;
    NumArray(vector<int>& nums) {
        list=nums;
        for(int i=0;i<list.size();i++){
            sum+=list[i];
        }
    }
    
    void update(int index, int val) {
      
        sum=sum-list[index];
        list[index]=val;
        sum=sum+val;
       
        
    }
    
    int sumRange(int left, int right) {
        int res=sum;
        for(int i=0;i<left;i++){
            res-=list[i];
        }
        for(int i=right+1;i<list.size();i++){
            res-=list[i];
        }
        
        return res;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */