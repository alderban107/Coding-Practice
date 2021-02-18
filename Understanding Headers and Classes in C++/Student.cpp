#include "Student.h"
#include <iostream>
using namespace std;

void Student::print()
{
    cout << "Age: " << Student::age << endl;
    cout << "Grade: " << Student::grade << endl;
}