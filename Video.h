#ifndef VIDEO_H
#define VIDE0_H
#include<iostream>
#include<iomanip>
using namespace std;
class Video
{
    private:
        string title;
        string URL;
    public:
         Video (const string& t, const string& u) : title(t) , URL(u){}

         void setTitle(const string& t){ title = t; }
         void setURL(const string& u) { URL = u; }
         string getTitle () const { return title; }
         string getURL () const { return URL; }

        
};

void Video::watchVideo()
{
    cout << setw(40) << "__________________________________ " << endl ;
    cout << setw(40) << "|                                |  " << endl;
    cout << setw(40) << "|         Video Details          |  " << endl;
    cout << setw(40) << "|________________________________|  " << endl;
    cout << setw(40) << "|                                 |" << endl;
    cout << setw(40) << "|   Title: " << setw(20) << title << " |" << endl;
    cout << setw(40) << "|   URL:   " << setw(20) << URL << " |" << endl;
    cout << setw(40) << "|_________________________________|" << endl;
 
