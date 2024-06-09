#ifndef PROFILE_H
#define PROFILE_H
#include<iostream>
using namespace std;

class Profile{
    private:
        string name;
        int age;
        char gender;
        string occcupation;
        string preferences;
    public:
        void manageProfile();

};
 
//accesor
string getName()
{
    return name;
}

int getAge(){
    return age;
}

char getGender()
{
    return gender;
}

string getOccupation()
{
    return occupation;
}

string preferences()
{
    return preferences;
}

//mutator
void setName(string n){
    name = n;
}

void setAge(int a)
{
    age = a;
}

void setGender(char g)
{
    gender = g;
}

void setOccupation(string o)
{
    occupation = o;
}

void setPreferences(string p)
{
    preferences = p;
}

