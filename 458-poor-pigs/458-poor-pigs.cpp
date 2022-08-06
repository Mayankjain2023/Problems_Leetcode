class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        long long total_round=minutesToTest/minutesToDie +1;
        
        return ceil(log(buckets)/log(total_round));
        
    }
};