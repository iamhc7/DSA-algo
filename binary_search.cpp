//Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

//You must write an algorithm with O(log n) runtime complexity.

//Example 1:

//Input: nums = [-1,0,3,5,9,12], target = 9
//Output: 4
//Explanation: 9 exists in nums and its index is 4
//Example 2:

//Input: nums = [-1,0,3,5,9,12], target = 2
//Output: -1
//Explanation: 2 does not exist in nums so return -1

#include<iostream>
#include<vector>
void binarysearch(std::vector <int> a, int target){
    int low = 0;
    int high = a.size() - 1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(a[mid] == target){
            std::cout << "The target number is: " << target << '\n';
            std::cout << "The index of the target is: " << mid << '\n';
            return;
        }
        if(a[mid] < target){
            low = mid + 1;
        }
        if(a[mid] > target){
            high = mid -1;
        }
        else{
            std::cout << "The target is not found." << '\n';
            std::cout << -1 << '\n';
        }
    }
}

int main(){
    std::vector <int> nums = {-1,0,3,5,9,12};
    int target = 2;
    binarysearch(nums,target);

    return 0;
}