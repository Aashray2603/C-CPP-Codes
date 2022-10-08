#include<iostream>
using namespace std;
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
        virtual void display()=0;
};

class CWHVideo: public CWH
{
        float videoLength;
     public:
        CWHVideo(string s, float r, float vl): CWH(s, r)
         {
            videoLength = vl;
         }
        void display()
         {
            cout<<"This is an amazing video with title: "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
         }
};

class CWHText: public CWH
{
        int words;
     public:
        CWHText(string s, float r, int wc): CWH(s, r)
         {
            words = wc;
         }
        void display()
         {
            cout<<"This is an amazing text tutorial with title: "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No. of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for class CWHVideo
    title = "Django Video Tutorial";
    vlen = 4.59;
    rating = 4.95;
    CWHVideo djVideo(title, rating, vlen);

    // for class CWHText
    title = "Django Tutorial Text";
    words = 432;
    rating = 4.86;
    CWHText djText(title, rating, words);

    CWH *vid, *txt;                     // aliter: array of pointers:
    vid = &djVideo; vid->display();     // CWH *obj[2]; obj[0]=&djVideo; obj[1]=&djText;
    txt = &djText;  txt->display();     // obj[0]->display();  obj[1]->display();

    return 0;
}














































































































































































































































































































































































































































































































































































