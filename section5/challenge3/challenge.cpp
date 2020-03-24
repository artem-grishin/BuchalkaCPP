#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "What is your date of birth: month, day, and year: " << endl;
    int month;
    int day;
    int year;
    cin >> month >> day >> year;
    cout << "Your birthday is: " << month << "/" << day << "/" << year << endl;
    return 0;
}
