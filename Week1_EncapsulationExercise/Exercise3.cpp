#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line

public:
    Song() {
        this->artist = "";
        this->title = "";
        this->album = "";
    }

    Song(string at, string t, string al) {
        this->artist = at;
        this->title = t;
        this->album = al;
    }

    string GetArtist() {
        return this->artist;
    }

    string GetTitle() {
        return this->title;
    }

    string GetAlbum() {
        return this->album;
    }

    int GetPlayCount() {
        return this->play_count;
    }

    const double GetPayRate() {
        return this->pay_rate;
    }

    double GetMoneyEarned() {
        return this->money_earned;
    }

    void SetArtist(string at) {
        this->artist = at;
    }

    void SetTitle(string t) {
        this->title = t;
    }

    void SetAlbum(string al) {
        this->album = al;
    }

    void Play(int times) {
        for (int i = 0; i < times; i++) {
            UpdatePlayCount();
        }

        UpdateMoneyEarned();
    }

    void Stats() {
        cout << this->artist << "\n";
        cout << this->title << "\n";
        cout << this->album << "\n";
        cout << this->play_count << "\n";
        cout << this->pay_rate << "\n";
        cout << this->money_earned << "\n";
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

//DO NOT EDIT CODE ABOVE THIS LINE