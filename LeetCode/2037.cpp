#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minMovesToSeat(vector<int> &seats, vector<int> &students)
{
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    int minMoves = 0;

    for (int i = 0; i < seats.size(); i++)
    {
        minMoves += abs(seats[i] - students[i]);
    }

    return minMoves;
}

int main()
{
    return 0;
}