//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

//Example 1:
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

//Example 2:
//Input: nums = [3,2,4], target = 6
//Output: [1,2]

//Example 3:
//Input: nums = [3,3], target = 6
//Output: [0,1]

//Approach 1(Preferred)
#include <iostream>
#include <vector>
void twosum(std::vector <int>& a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low<high){
        int sum = a[low] + a[high];
        if(sum == target){
            std::cout<< "The smaller integer is: " << a[low] << '\n';
            std::cout<< "The larger integer is: " << a[high] << '\n';
            return;    
        }
        else if(sum < target){
            low++;
        }
        else{
            high--;
        }
        
    }

}

int main(){

    std::vector <int> nums = {1,4,5,7,8,9};
    int target = 11;
    twosum(nums,target);

    return 0;
}
