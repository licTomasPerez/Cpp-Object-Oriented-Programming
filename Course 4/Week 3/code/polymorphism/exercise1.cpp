#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////
class VectorAddThree {      //
  public:                   //
    vector<int> Add() {     //
      nums.push_back(num1); //
      nums.push_back(num2); //
      nums.push_back(num3); //
      return nums;          //
    }                       //
                            //
  protected:                //
    int num1 = 1;           //
    int num2 = 2;           //
    int num3 = 3;           //
                            //
  private:                  //
    vector<int> nums;       //
};                          //
//////////////////////////////

class VectorAddSix : VectorAddThree{
  public: 
    vector<int> Add() {     //
      nums.push_back(num1); //
      nums.push_back(num2); //
      nums.push_back(num3);
      nums.push_back(num4); //
      nums.push_back(num5); //
      nums.push_back(num6); //
      return nums;          //
    }                       //
                            //
  protected:                //
    int num1 = 1;           //
    int num2 = 2;           //
    int num3 = 3;   
    int num4 = 4;           //
    int num5 = 5;           //
    int num6 = 6;           //
                            //
  private:                  //
    vector<int> nums;  
};

int main() {
  VectorAddSix v6;
  for (int i : v6.Add()) {
    cout << i << endl;
  }
  return 0;  
}