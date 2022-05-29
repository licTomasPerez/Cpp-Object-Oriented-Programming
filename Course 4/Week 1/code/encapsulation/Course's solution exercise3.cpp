
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
