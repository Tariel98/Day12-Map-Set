#include <iostream>
#include <set>
#include <vector>


int thirdMax(std::vector<int> nums) 
{
        std::set<int> snums;
        for(int i=0; i<nums.size(); ++i){
            snums.insert(nums[i]);
            if(snums.size() > 3)
                snums.erase(snums.begin());
        }
        
    if(snums.size() == 3)
        return *snums.begin();
    return *snums.rbegin() ;
}

int main() 
{
    std::vector<int> nums = {45,65,74,86,99};

    std::cout <<  thirdMax(nums) << std::endl;
}