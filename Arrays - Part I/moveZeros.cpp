class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        while(i < n){
            if(nums[i] == 0 and nums[j] == 0){
                i++;
            }
            else if(nums[i] != 0 and nums[j] != 0){
                i++;
                j++;
            }
            else if(nums[j] != 0 and nums[i] == 0){
                i++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
    }
};