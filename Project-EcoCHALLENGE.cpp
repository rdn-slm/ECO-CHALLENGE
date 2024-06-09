#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include <windows.h>
#include <vector>
#include "User.h"
#include "Challenge.h"
using namespace std;

class Developer
{
    private:
        string devID;
    public:
        void manageChallenges ();
        void manageContent ();
};
class Time
{
	protected:
		time_t masa; //store the system time  
		struct tm* masa_sekarang;//a data structure that store time in "day, date, hrs:mins:sec yr" format
	
	public:
		void displayTime();//To display the time
};

/*
void Time::displayTime()//To display the time
{
	time (&tt);
    current_time = localtime(&tt); 
    
    cout << asctime(current_time) << endl;//convert the data stored in "current_time: to given format
}*/

/*void Challenge::displayChallenge(const Challenge &challenge)
{
    cout << "Title: " << challenge.getTitle() << endl;
    cout << "Description: " << challenge.getDescription() << endl;
    cout << "Reward:" << challenge.getReward() << endl;
    cout << "Goals:" << challenge.getGoals() << endl;
}*/

void displayDashboard(const vector<Challenge> &challenges)
{
    //pikir balik
}
void LoadingBar ();

int main()
{
    User user;
   	system ("color 67");

    user.displayLoginScreen();
    system ("pause");
    
    system ("color 73");
    LoadingBar();
    system ("pause");

   /*User user("Nani", "hynanie1369@gmail.com", "dfkjshfjs");
    string nama, emel;
    nama = user.getUsername("hynanie");
    emel = user.getEmail();
    user.createProfile(nama, emel);
    user.trackProgress();
    user.receiveNotification();
    user.participateInChallenge();

    ProgressTracker tracker;
    tracker.track();

    Profile profile;
    profile.manageProfile();

    Notification notification;
    notification.sendNotification("JANGAN LUPA BUAT CHALLENGE :D");
    notification.setReminder();

    Challenge challenge;
    challenge.startChallenge();
    challenge.editChallenge();
    challenge.deleteChallenge();

    Developer developer;
    developer.manageChallenges();
    developer.manageContent();

    EducationalContent content(article, video, infographic, quiz);
    content.getContent();

    Video video;
    video.watchVideo();

    Quiz quiz;
    quiz.takeQuiz();

    Article article;
    article.readArticle();

    Infographic infographic;
    infographic.viewInfographic();
    
    video.watchVideo();
*/  

//for dashboard
    /*challenges[0].setTitle("");
    challenges[0].setDescription("");
    challenges[0].setGoals("");

    challenges[1].setTitle("");
    challenges[1].setDescription("");
    challenges[1].setGoals("");

    challenges[2].setTitle("");
    challenges[2].setDescription("");
    challenges[2].setGoals("");
    

    displayDashboard(challenges);
    displayDashboard(educationalContent);*/

 return 0;
}

void LoadingBar ()
{

	//set ASCII to print special character
	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	
	int bar1 =177, bar2 =219;
	cout << "\n\n\n\t\t\t\t\t Loading...";
	cout << "\n\n\n\n\t\t\t\t";
	
	for (int i=0; i<25; i++)
	
		cout << (char)bar1;
		cout <<"\r";
		cout << "\t\t\t\t";
		
		    for (int i=0; i<25; i++){
			
			    cout << (char)bar2;
			    Sleep (100);
		    }

}