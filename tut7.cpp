#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    // selection control structure---> if else-if else ladder
    if (age < 18)
    {
        cout << "you cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "u r a kid nd u will get a kid pass to the party" << endl;
    }
    else
    {
        cout << "u can come to the party" << endl;
    }

    // selectrion control structure---> switch case statement

    switch (age)
    {
    case 22:
        cout << "your age is 22" << endl;
        break;
    case 34:
        cout << "your age is 34" << endl;
        break;
    case 2:
        cout << "your age is 2" << endl;
        break;
    default:
        cout << "no special cases" << endl;
        break;
    }


    return 0;
}