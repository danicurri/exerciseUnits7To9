//Daniel Contreras-IES San Vicente
//program that asks up to 3 times for user and password
//if user is not able to enter correct credentials, he will be exited

#include <iostream>

using namespace std;

int main()
{
	//declaring variables
    const string USERNAME = "login";
    const string PW = "secret";
    string userLogin, userPwd;
    int times = 1;
 
	//asking user for credentials   
    cout << "Please enter username and password" << endl;
    cin >> userLogin >> userPwd;
    
    //program logic
    while ((userLogin != USERNAME || userPwd != PW) && times < 3)
    {    
	    cout << "Please enter username and password again" << endl;
		cin >> userLogin >> userPwd;
        times++;
    }
    
    if (times <= 3 && (userLogin == USERNAME && userPwd == PW))
    {
		cout << "Correct credentials, access granted" << endl;
    }
    
    else
	{
		cout << "Wrong credentials for the 3rd time" << endl;
	}
    return 0;
}
