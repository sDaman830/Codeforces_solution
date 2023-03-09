#include <iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    void display()
    {
        cout << hours << ":" << minutes << endl;
    }
    friend Time operator+(Time t1, Time t2);
};
Time operator+(Time t1, Time t2)
{
    Time sum;
    sum.minutes = (t1.minutes + t2.minutes) % 60;
    sum.hours = (t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60);
    return sum;
}

int main()
{
    int h1, h2;
    int m1, m2;
    cout << "enter hours and minutes for time 1" << endl;
    cin >> h1 >> m1;
    cout << "enter hours and minutes for time 2" << endl;
    cin >> h2 >> m2;
    Time t1(h1, m1);
    Time t2(h2, m2);
    Time sum = t1 + t2;
    sum.display();
    return 0;
}