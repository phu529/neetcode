class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=1;
       int k=0;
       while(i<nums.size()){
        if(nums[k]==nums[i]){
            i++;
        }
        else{
            k++;
            nums[k]=nums[i];

        }
       } 
       return k+1;
    }
};