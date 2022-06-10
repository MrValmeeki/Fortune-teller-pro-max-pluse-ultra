#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Pick a number Between 1 to 90 to check your luck for today.  \n";
    cin >> n;
    // 1 - 5
    if (0 < n && n <= 5)
        cout << "Can Be Better Tomorrow!! \n";
    // 6 - 12
    else if (5 < n && n <= 12)
        cout << "Your day will be exquisite!!!! \n";
    // 13 - 20
    else if (12 < n && n <= 20)
        cout << "There is a chance of bad luck \n";
    // 21 - 25
    else if (20 < n && n <= 25)
        cout << "Bruh even a black cat is scared of you \n";
    // 26 - 35
    else if (25 < n && n <= 35)
        cout << "Why did you even try my guy......give up \n";
    // 36 - 45
    else if (35 < n && n <= 45)
        cout << "Damn your too lucky that it's unfair..... \n";
    // 46 - 60
    else if (45 < n && n <= 60)
        cout << "Nothing special today, just a normal day for you i guess \n";
    // 69 - 68
    else if (68 < n && n <= 68)
        cout << "You can expect good things happening today \n";
    // 69
    else if (n == 69)
        cout << "Get a life BRUH.....you ain't that lucky \n";
    // 70 - 90
    else if (69 < n && n <= 90)
        cout << "It will be a hard day for you today \n";
    else
    {
        cout << "Can you read?....I said *a number between 1 and 90...";
    }

    // for preventing cmd prompt from closing immediatly
    cin.ignore();
    cin.ignore();
    return 0;
}
