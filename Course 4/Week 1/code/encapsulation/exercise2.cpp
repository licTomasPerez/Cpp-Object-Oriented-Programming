

#include <iostream>
using namespace std;

//add class definitions below this line

class Watch{
  public:
    Watch(string mfr, string md, int d, int wr, string m){
      manufacturer = mfr;
      model = md;
      diameter = d;
      water_resistance = wr;
      material = m;
    }

    string GetManufacturer(){
      return manufacturer;
    }
    string GetModel(){
      return model;
    }
    int GetDiameter(){
      return diameter;
    }
    int GetWaterResistance(){
      return water_resistance;
    } 
    string GetMaterial(){
      return material;
    }

    void SetManufacturer(string mfr2){
      manufacturer = mfr2;
    }
    void SetModel(string md2){
      model = md2;
    }
    void SetDiameter(int d2){
      diameter = d2;
    }
    void SetWaterResistance(int wr2){
      water_resistance = wr2;
    }
    void SetMaterial(string m2){
      material = m2;
    }

    void Summary(){
      cout << "Manufacturer: " << GetManufacturer() << endl;
      cout << "Model: " << GetModel() << endl;
      cout << "Diameter: " << GetDiameter() << " mm" << endl;
      cout << "Water Resistance: " << GetWaterResistance() << " m"<< endl;
      cout << "Material: " << GetMaterial() << endl;
    }

  private: 
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}
