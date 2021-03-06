#include <iostream>
using namespace std;


//here CWH class is" Abstract base" class.as only used for derived other classes.
//the function( virtual void display()=0; ) of base class is called as" pure virtual" function.no used base class dispaly function anyother derived class if they do not have themself dispaly function.
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()= 0; // this is pure virtual function.

};
class CWHVideo : public CWH
{
private:
    float VideoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        VideoLength = vl;
    }
    void display()
    {
        cout  << endl;
        cout << "the title of video is " << title << endl;
        cout << "the rating of video is " << rating << endl;
        cout << "the VideoLength of video is " << VideoLength << endl;
    }
};
class CWHText : public CWH
{
private:
    float Words;

public:
    CWHText(string s, float r, float w) : CWH(s, r)
    {
        Words = w;
    }
    void display()
    {
        cout <<  endl;
        cout << "the title of Text is " << title << endl;
        cout << "the rating of Text is " << rating << endl;
        cout << "the Words of Text is " << Words << endl;
    }
};
int main()
{ string title;
  float  rating,Words,VideoLength;

  //for CWH Video:
  title="C++ tutorial Videos ";
  rating=4.4;
  VideoLength=15.34;

  CWHVideo CWHVideo(title,rating,VideoLength);
//   CWHVideo.display();


  cout<<endl;
  //for CWH Text:
  title="C++ tutorial Text ";
  rating=4.0;
  Words=500;

  CWHText CWHText(title,rating,VideoLength);
//   CWHText.display();
   
   CWH *pointer[2];
   pointer[0]=&CWHVideo;
   pointer[1]=&CWHText;


pointer[0]->display();
pointer[1]->display();

    return 0;
}