#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double angleClock(int hour, int minutes)
{
    if (hour == 12)
        hour = 0;

    // Hour Hand Angle
    double hourHandAngle = hour * 30.0 + minutes * 0.5;

    // Minute Hand Angle
    double minuteHandAngle = (minutes * 6.0);

    // Acute Angle between Hour Hand and Minute Hand
    double ans = min(abs(minuteHandAngle - hourHandAngle), 360 - abs(minuteHandAngle - hourHandAngle));

    return ans;
}

int main()
{
    return 0;
}