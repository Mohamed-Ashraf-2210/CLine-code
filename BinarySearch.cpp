#include <bits/stdc++.h>
using namespace std;


// if you want num bigger move l
// else move r
// best with right condition
int binary_search(vector<int>& nums , int target){
    int l = 0, r = nums.size() - 1, index_ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        (nums[mid] < target) ? l = mid + 1 , index_ans = mid : r = mid - 1;
    }
    return index_ans;
}


int main() {
    
}
