#ifndef PROGESSTRACKER_H
#define PROGESSTRACKER_H
#include<iostream>
using namespace std;

class ProgressTracker{
    private:
        int progress;
        int challengeID;
    public:
        void track();
};

//accessor
int getProgress(){
    return progress;
}

 int :: Challenge getChallengeID(){
    return challenge ID;
}

//mutator

void setProgress(int p){
    progress = p;
}

void setChallenge(int cID){
    challengeID = cID;
}