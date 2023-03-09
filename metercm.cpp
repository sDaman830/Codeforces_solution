#include <iostream>

class DM
{
public:
    int meter;
    int centimeter;

public:
    DM(int m = 0, int cm = 0)
    {
        meter = m;
        centimeter = cm;
    }

    void display()
    {
        std::cout << meter << " meters " << centimeter << " centimeters" << std::endl;
    }
};

class DB
{
public:
    int feet;
    int inch;

public:
    DB(int ft = 0, int in = 0)
    {
        feet = ft;
        inch = in;
    }

    void display()
    {
        std::cout << feet << " meter " << inch << " centimeter" << std::endl;
    }

    friend DB operator+(DM dm1, DB db1);
};

DB operator+(DM dm1, DB db1)
{
    int totalInches = (db1.feet * 12) + db1.inch;
    int totalCentimeters = totalInches * 2.54;
    int totalMeters = totalCentimeters / 100;
    int remainingCentimeters = totalCentimeters % 100;
    return DB(dm1.meter + totalMeters, dm1.centimeter + remainingCentimeters);
}

int main()
{
    int meter, centimeter, feet, inch;

    std::cout << "Enter distance in meters and centimeters: ";
    std::cin >> meter >> centimeter;
    DM dm1(meter, centimeter);

    std::cout << "Enter distance in feet and inches: ";
    std::cin >> feet >> inch;
    DB db1(feet, inch);

    DB dm2 = dm1 + db1;
    dm2.display();

    return 0;
}