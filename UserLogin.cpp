//Daniel Contreras
//program that asks up to 3 times for user and password
//if user is not able to enter correct credentilas, he will be exited

#include <iostream>

using namespace std;

int main()
{
    //asking user for credentials
    string userName = "login";
    string pw = "secret";
    int times = 0;
    
    cout << "Please enter username and password" << endl;
    
    //program logic
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
