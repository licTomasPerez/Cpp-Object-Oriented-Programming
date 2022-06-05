#include <iostream>
using namespace std;

class Carnivore {
  public:
    Carnivore(string d) {
      diet = d;
    }
  
    string GetDiet() {
      return diet;
    }
  
    void SetDiet(string new_diet) {
      diet = new_diet;
    }
  
  private:
    string diet;
};

class Dinosaur : public Carnivore {
  public:
    Dinosaur(string d, double s, double w) : Carnivore(d) {
      size = s;
      weight = w;
    }
  
    double GetSize() {
      return size;
    }
  
    void SetSize(double new_size) {
      size = new_size;
    }
  
    double GetWeight() {
      return weight;
    }
  
    void SetWeight(double new_weight) {
      weight = new_weight;
    }
  
  private:
    double size;
    double weight;
};

//add class definitions below this line



//add class definitions above this line

int main() {
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}