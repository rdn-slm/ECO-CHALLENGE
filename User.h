#ifndef USER_H
#define USER_H
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include"Challenge.h"
using namespace std;

class User
{
    private:
        string username;
        string password;
    public:
        User () : username(""), password("") {}
        void createProfile(string, string);
        void setUsername(string u) {username = u; }
        void setPassword(string p) {password = p;}
        string getUsername() const { return username;}
        string getPassword() const { return password; }
        void trackProgress();
        void participateinChallenge();
        void displayLoginScreen();
        void EndingScreen();
    
};
void User :: trackProgress ()
{

}
void User :: participateinChallenge ()
{

}
void User :: displayLoginScreen(int &choice)
{
    
    cout << "\n_________________________________________________________________";
    cout << "\n ___  __   __      __                       ___       __   ___ ";
    cout << "\n|__  /  ` / \\    /  ` |__|  /\\  |    |    |__  |\\ | / _` |__  ";
    cout << "\n|___ \\__, \\__/   \\__, |  | /~~\\ |___ |___ |___ | \\| \\__> |___ ";
    cout << "\n" ;                                                     
    cout << "\n _____Where your life intersects with the goodness of nature______";
    cout << "\n\n\n\t\tCopyright (c) 2024  Error.creators C=\n";
    cout << setw(252);
    cout << "n\n\n\t\t1. Login";       
    cout <<" \n\t\t2. Register";
    cout << "\n\t\t3. Exit";
    cout << "\n\t\tInput from 1 to 3: "
    cin >> choice;

}

void User :: EndingScreen() // show members involve in this programming technique project
{
	
	cout << "\n\n\n\t\t\tThis app is brought to you by 4 graceful ladies!"<<endl; 
	cout << "\n\n\n\t\t\t\t";
	cout << "          Raden Salma Humaira \t"<<endl;
	cout << "\t\t\t\t";
	cout << "Members:  Darshni \t"<<endl;
	cout << "\t\t\t\t";
	cout << "          Nur Hanani\t"<<endl;
    cout << "\t\t\t\t";
	cout << "          Amira\t"<<endl;
	cout << "\n\n\n\n\n\n\n\n\n\n";
	
	exit(0);
} 

/*class Admin
{
    private:
        vector<User> users; // create object of vector
    public:
        void RegisterUser ()
        {
            string username, password;
            cout << "Enter your username: ";
            getline (cin, username);
            cout << "Enter your password: ";
            cin >> password;

            User newUser(username, password);
            users.push_back(username, password);

            cout << "\n\t\tRegistration is successful...\n";

        }
};
*/

#endif