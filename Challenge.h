#ifndef CHALLENGE_H
#define CHALLENGE_H
#include<iostream>
using namespace std;

class Challenge{
    private:
      string title;
      string description;
      string goals;

    public:
    //accessor
    string getTitle(){
    return title;
    }

    string getDescription(){
    return description;
    }

    string getGoals(){
    return goals;
    }
    
    void setTitle( string& t){
    title = t;  
    }

    void setDescription(string& d){
    description = d;
    }  

    void setGoals(string& g){
     goals = g;
    }

    void startChallenge();
    void editChallenge();
    void deleteChallenge();
      
};

void Challenge:: startChallenge(){
  cout << "Starting challenge: " << title << endl;
}

void Challenge:: editChallenge(){
  cout << "Editing challenge: " << title << endl;
}

void Challenge:: deleteChallenge(){
  cout << "Deleting challenge: " << title << endl;
}

#endif