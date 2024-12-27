#include <iostream>
using namespace std;

class solution{
    public;
    int removeDuplicates(vector<int>&nums){

        int insertindex=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i-1] != nums[i]){
                nums[insertindex] = nums[i];
                insertindex++;
            }
        }
        return insertindex;
    }
}