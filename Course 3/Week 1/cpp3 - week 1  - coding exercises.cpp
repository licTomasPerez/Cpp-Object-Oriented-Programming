Exercise 1:

#include <iostream>
using namespace std;

//add class definitions below this line

class Fruit{
  public: 
    Fruit(string n, string c){
      name = n;
      color = c;
    }

    string GetName() {
      return name;
    }
    string GetColor() {
      return color;
    }

    void SetName(string n2){
      name = n2;
    }
    void SetColor(string c2){
      color = c2;
    }
  private: 
    string name;
    string color;
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
 
}

------------------------

Exercise 2: 

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

------------------------

Exercise 3: 

#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line
  public:
    Song(string a, string t, string al){
      artist = a;
      title = t;
      album = al;
    }

    string GetArtist(){return artist;}
    string GetTitle(){return title;}
    string GetAlbum(){return album;}
    int GetPlayCount(){return play_count;}
    double GetPayRate(){return pay_rate;}
    double GetMoneyEarned(){return money_earned;}

    void SetArtist(string a2){artist = a2;}
    void SetTitle(string t2){title=t2;}
    void SetAlbum(string al2){album=al2;}
    
    void Play(int x){
      int i;
      for (i=1; i<=x; i++){
        UpdatePlayCount();
        UpdateMoneyEarned();
      }
    }

    void Stats(){
      cout << GetArtist() << endl;
      cout << GetTitle() << endl;
      cout << GetAlbum() << endl;
      cout << GetPlayCount() << endl;
      cout << GetPayRate() << endl;
      cout << GetMoneyEarned() << endl;
    }

  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

------------------------

Exercise 4: 

#include <iostream>
#include <iomanip>
using namespace std;

//add class definitions below this line

class Atm{
  public: 
    double GetMoney(){
      return money;
    }

    void Deposit(double x){
      if(x > 0){
        money += x;
      }
      else if(x <= 0){
        cout << "You cannot deposit a negative or 0 amount of money." << endl;
      }
    }
    void Withdraw(double y){
      if (y > 0){
        if (money > y){
          money -= y;
        }
        else{
          cout << "You do not have enough funds to withdraw that amount." << endl;
        }
      }
      else{
        cout << "You cannot withdraw a negative or 0 amount of money." << endl;
      }
    }
    
  private:
    double money;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed; //prevents value from being truncated or rounded
  cout << setprecision(2); //sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}


------------------------

Exercise 5:

#include <iostream>
using namespace std;

//add class definitions below this line

class CardBinder {
  public:
    CardBinder() {}
  
    int GetGold() {
      return gold_card;
    }
  
    int GetSilver() {
      return silver_card;
    }
  
    int GetTotal() {
      return gold_card + silver_card;
    }
  
    void AddGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card + silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        gold_card += amount;
      }
    }
  
    void RemoveGold(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (gold_card - amount < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      }
      else {
        gold_card -= amount;
      }
    }
  
    void AddSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (amount + gold_card +silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        silver_card += amount;
      }
    }
  
    void RemoveSilver(int amount) {
      if (amount <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (silver_card - amount < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      }
      else {
        silver_card -= amount;
      }
    }
  
  private:
    int gold_card = 0;
    int silver_card = 0;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
} 
