#include <iostream>
#include <string>
using namespace std;

int main()
{
    float age;
    float height;
    float wealth;

    cout << "Age(yrs): ";
    cin >> age;

    if (age<=20)
    {
        cout << "Height(cm): ";
        cin >> height;

        if (height<160)
        {
            cout << "Status: UNFRIEND";
        }
        else
        {
            if (height<175)
            {
                cout << "Status: FRIEND";
            }
            else
            {
                cout << "Wealth(Million Baht): ";
                cin >> wealth;
                
                if (wealth>69)
                {
                    cout << "Status: MARRIED";
                }
                else
                {
                    cout << "Status: ONE-NIGHT-STAND";
                }
            }
        }
    }
    else
    {
        if (age<30)
        {
            cout << "Wealth(Million Baht): ";
            cin >> wealth;

            if (wealth>10)
            {
                cout << "Status: BEST FRIEND";
            }
            else
            {
                cout << "Status: UNFRIEND";
            }
        }
        else
        {
            cout << "Status: UNFRIEND";
        }
    }
}