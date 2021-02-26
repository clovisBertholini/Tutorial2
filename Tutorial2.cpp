#include <iostream>
using namespace std;

int main()
{
    // variables
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In ten years you will earn: " << annualSalary * 10;
    system("pause > 0");
}