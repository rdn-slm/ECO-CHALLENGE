#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>
#include <list>
#include <string>
#include <windows.h>

using namespace std;

/*class Quiz 
{
private:
    list<string> senarai;
    list<string> question;
    list<string> answer;

public:
    // Constructor to initialize the lists for demonstration purposes
    Quiz() {
        // Adding some Set data
        senarai.push_back("Set 1");
        senarai.push_back("Set 2");
        senarai.push_back("Set 3");
    }

    string takeQuiz();
};

string Quiz::listQuiz()
{
    string result = "Senarai contains:\n";
    for(const auto& item : senarai) {
        result += item + "\n";
    }
    return result;
}

string Quiz ::takeQuiz()
{
    
}
*/
int main() {
    Quiz quiz;

    int pointer = 0;
    string Menu [4] = {"Carbon Footprint", "Fast Fashion", "Types of energy", "Food security"}
    cout << "Which quiz would you like to pick? \n";

   
        system ("cls");
        SetConsoleTextAttributes(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "Main Menu\n";

        for (int i = 0; i < 3 ; ++i)
        {
            if (i == pointer)
            {
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
                cout << Menu [i] << endl;
            }
            else
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),15);
                cout << Menu [i] << endl;
        }
    

    while (true)
    {
        if (GetAsyncKeyState (VK_UP) != 0)
        {
            pinter -= 1;
            if (pointer == -1)
            {
                pointer = 2;
            }
            break;
        }
        else if (GetAsyncKeyState(VK_DOWN) != 0)
        {
            pointer += 1;
            if (pointer == 3)
            {
                pointer = 0 ;
            }
            break;
        }
        else if (GetAsyncKeyState(VK_RETURN) != 0)
        {
            switch (pointer)
            {
                case 0:
                {
                    cout << "\n\n\nStarting the first quiz...";
                    Sleep (1000);
                } break;
                case 1:
                {
                    cout << "\n\n\nStarting the second quiz...";
                    Sleep (1000);
                }break;
                case 2:
                {
                    return 0;
                }break;

        }
    }
}
    Sleep (150);
    cout << quiz.listQuiz() << endl;

    return 0;
}





