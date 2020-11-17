#include <iostream>
using namespace std;

class Time
{

public:

    int getSecond() const {
        return second;
    }

    void setSecond(int second) {
        Time::second = second;
    }

    int getMinute() const {
        return minute;
    }

    void setMinute(int minute) {
        Time::minute = minute;
    }

    int getHour() const {
        return hour;
    }

    void setHour(int hour) {
        Time::hour = hour;
    }

    Time ()
    {
        hour == 00;
        minute == 00;
        second == 00;
    }

    Time (int h, int m, int s)
    {
        setHour(h);
        setMinute(m);
        setSecond(s);
    }

    void TikTok (int M, int U, int F, string C)
    {
        M = getHour();
        U = getMinute();
        F = getSecond();
        C = C;
        for (int i = 0; i <=86400 ; i++)
        {
            F = F + 1;
            if (F >= 60) {
                F = F - 60;
                U = U + 1;
                if (U >= 60) {
                    U = U - 60;
                    M = M + 1;
                    if (M >= 11)
                    {
                        C = "PM";
                    }
                    else C = "AM";
                    if (M >= 13)
                    {
                        M = M-12;
                    }
                }
            }
            cout << "The Time is = " << M << ":" << U << ":" << F << " " << C << endl;
        }
    }

private:

    int second;
    int minute;
    int hour;

};

int main ()
{
Time Cuckoo(12, 0,0);
cout<<"The Time is = "<<Cuckoo.getHour()<<":"<<Cuckoo.getMinute()<<":"<<Cuckoo.getSecond()<<endl;
Cuckoo.TikTok(Cuckoo.getHour(), Cuckoo.getMinute(), Cuckoo.getSecond(), "AM");
}

