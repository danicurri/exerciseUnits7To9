//Daniel Contreras

#include <iostream>

using namespace std;

int main()
{
    string userName = "login";
    string pw = "secret";
    int times = 0;
    
    cout << "Please enter username and password" << endl;
    
    do
    {

        cin >> userName >> pw;
        times++;
        
        if (times >= 3)
        {
            cout << "Wrong credentials for the 3rd time" << endl;
        }
    } while (userName != "login" || pw != "secret");
        cout << "Correct credentials, access granted" << endl;
    return 0;
}
