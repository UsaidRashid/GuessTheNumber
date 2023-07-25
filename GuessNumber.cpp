#include<bits/stdc++.h>
#include <random>
#include <chrono>
#include <unistd.h>
#include <ctime>
using namespace std;
#define int long long


int generateRandomNumber()
{
    static mt19937 gen(static_cast<unsigned int>(time(0)) * getpid());
    uniform_int_distribution<int> distribution(1, 100);
    return distribution(gen);
}



signed main()
{
    int random_number = generateRandomNumber();
    cout<<"WELCOME TO THE NUMBER GUESSING GAME"<<endl;
    int score=0;
    while(1)
    {
        cout<<"GUESS THE NUMBER"<<endl;
        int n;
        cin>>n;
        if(random_number==n){
            cout<<"CONGRATULATIONS YOU GUESSED IT CORRECT IN "<<score<<" ATTEMPTS"<<endl;
            break;
        }
        else if(random_number>n)
        {
            cout<<"GUESS HIGHER NUMBER PLEASE!!"<<endl;
            score++;
        }
        else{
            cout<<"GUESS LOWER NUMBER PLEASE!!"<<endl;
            score++;
        }
    }
    return 0;
}