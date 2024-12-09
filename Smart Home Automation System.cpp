#include <iostream>
#include <string>

using namespace std;

class SmartHome
{
public:
    void controlAppliance(char command)
    {
        switch (command)
        {
        case '1':
            turnOnAppliance(1);
            break;
        case '2':
            turnOffAppliance(1);
            break;
        case '3':
            turnOnAppliance(2);
            break;
        case '4':
            turnOffAppliance(2);
            break;
        default:
            cout << "Invalid command!" << endl;
        }
    }

private:
    void turnOnAppliance(int applianceNumber)
    {
        cout << "Appliance " << applianceNumber << " is ON" << endl;
    }

    void turnOffAppliance(int applianceNumber)
    {
        cout << "Appliance " << applianceNumber << " is OFF" << endl;
    }
};

int main()
{
    SmartHome home;
    char command;

    cout << "Smart Home Automation System" << endl;
    cout << "Enter command (1: ON Appliance 1, 2: OFF Appliance 1, 3: ON Appliance 2, 4: OFF Appliance 2):" << endl;

    while (true)
    {
        cin >> command;
        if (command == 'q')
        {
            cout << "Exiting..." << endl;
            break;
        }
        home.controlAppliance(command);
    }

    return 0;
}