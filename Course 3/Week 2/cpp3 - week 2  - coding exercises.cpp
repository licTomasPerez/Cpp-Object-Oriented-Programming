
Iterating through a vector in C++ using the vector::begin() (and the vector::end()) function.
#include <iostream>

#include <vector>

#include<algorithm>

using namespace std;


int main() {
    
vector<int> v1 = {11, 22, 3, 41, 15};
    
vector<int> v2(v1.begin() + (x=0,1,2,3,4), v1.begin() + v1.size());
    
for (auto x = v2.begin() ; x != v2.end(); ++x)
      
   cout << *x << endl;
  
 return 0;
}






----------------


Ex.1 
int RecursiveSum(int num){
  if (num == 0)
    return 0;
  else 
    return num + RecursiveSum(num-1);
}


-----------------

Ex.2
int ListSum (vector<int>& nums){
  if (nums.size() == 1){
    vector<int> new_vector = nums;
    return new_vector[0];
  }
  else{
  vector<int> new_vector(nums.begin()+1, nums.begin() + nums.size());
  return nums[0] + ListSum(new_vector);
  }
}

---------


Ex.3
int BunnyEars(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return 2 + BunnyEars(n - 1);
  }
}



-----------

Ex.4
string ReverseString(string s) {
  if (s.length() == 1) {
    return s;
  }
  else {
    return s.substr(s.length() - 1) + ReverseString(s.substr(0, s.length() - 1));
  }
}


------------

Ex.5
int GetMax(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return max(nums.at(0), GetMax(new_vector));
  }
}
