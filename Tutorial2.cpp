#include <iostream>
using namespace std;

int main()
{
    /* variables
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In ten years you will earn: " << annualSalary * 10;
    */
    // char variables
    char character = 'a'; 
    int year = 2021;
    bool isLate = true;
    double balance = 432309892347.87382;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    cout << "Int min value is " << INT_MIN << endl;
    cout << "Int max value is " << INT_MAX << endl;
    cout << "Size of unsign int is " << sizeof(unsigned int) << "bytes" << endl;
    cout << "Unsigned int max value is " << UINT_MAX << endl;

    system("pause > 0");
}