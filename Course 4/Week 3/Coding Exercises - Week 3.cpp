Exercise 1

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

------------------------- %%%%%%%%%%% -----------------------
Exercise 2

#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////
class Vehicle {                             //
  public:                                   //
    virtual void Distance(double time) = 0; //
};                                          //
//////////////////////////////////////////////

class Airplane : public Vehicle {
  public:
    Airplane(double s) {
      speed = s;
    }
  
    void Distance(double time) {
      cout << speed * time << endl;
    }
    
  private:
    double speed;
};

int main() {
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);
  return 0;
}


------------------------- %%%%%%%%%%% -----------------------

Exercise 3 

class Conversion : public Temperature {
  public:
    double ConvertTo(char unit, double temp) {
      if (unit == 'C' || unit == 'c') {
        return Celsius(temp);
      } 
      else if (unit == 'F' || unit == 'f') {
        return Fahrenheit(temp);
      }
      return -0.0001;
    }
  
  private:
    double Celsius(double temp) {
      return (temp - 32) / 1.8;
    }
  
    double Fahrenheit(double temp) {
      return temp * 1.8 + 32;
    }
};


------------------------- %%%%%%%%%%% -----------------------

Exercise 4

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Median {
  public:
    double CalculateMedian(int n1, int n2) {
      return (double) (n1 + n2) / 2;
    }
  
    double CalculateMedian(int n1, int n2, int n3) {
      vector<int> nums = {n1, n2, n3};
      sort(nums.begin(), nums.end());
      return nums.at(1);
    }

    double CalculateMedian(int n1, int n2, int n3, int n4) {
      vector<int> nums = {n1, n2, n3, n4};
      sort(nums.begin(), nums.end());
      return (double) (nums.at(1) + nums.at(2)) / 2;
    }

    double CalculateMedian(int n1, int n2, int n3, int n4, int n5) {
      vector<int> nums = {n1, n2, n3, n4, n5};
      sort(nums.begin(), nums.end());
      return nums.at(2);
    }
};

int main() {  
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;  
  return 0;  
}


------------------------- %%%%%%%%%%% -----------------------

Exercise 5

#include <iostream>
#include <vector>
using namespace std;

class Words {                                         //
  public:                                             //
    Words(string s1) {                                //
      original = s1;                                  //
    }                                                 //
                                                      //
    string SubstituteChar() {                         //
      string sub;                                     //
      if (original.length() < 3) {                    //
        return "Not enough characters";               //
      }                                               //
      else {                                          //
        for (int i = 0; i < original.length(); i++) { //
          if (i == 2) {                               //
            sub += "HELLO";                           //
          }                                           //
          else {                                      //
            sub += original.at(i);                    //
          }                                           //
        }                                             //
      }                                               //
      return sub;                                     //
    }                                                 //
                                                      //
  private:                                            //
    string original;                                  //
};                                                    //

class Substitute : public Words {
  public:
    Substitute(string s2) : Words(s2) {
      input_string = s2;
    }
  
    string SubstituteChar() {
      string sub;
      if (input_string.length() < 5) {
        return "Not enough characters";
      }
      else {
        for (int i = 0; i < input_string.length(); i++) {
          if (i == 4) {
            sub += "HELLO";
          }
          else {
            sub += input_string.at(i);
          }
        }
      }
      return sub;
    }
  
  private:
    string input_string;
};

int main() {
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl;
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl;
  Words w("string");
  cout << w.SubstituteChar() << endl;
  return 0;
}
