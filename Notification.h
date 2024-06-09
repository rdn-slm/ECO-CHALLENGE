#include<iostream>
using namespace std;
class Notification{
    private:
        string message;
        int date;
    public:
        void sendNotification(string message);
        void setReminder ();

};
//accessor
string getMessage()
{
    return message;
}

int getDate()
{
    return date;
}

//mutator
void setMessage(string m)
{
    message = m;
}

void setDate(int d)
{
    date = d;
}
    
