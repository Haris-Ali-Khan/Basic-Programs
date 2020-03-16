/*
Code is working perfectly but when i enter 0 hours or minutes instead of passing
status false to next else statement its executed that else statement as true argument
*/
#include <iostream>
using namespace std;

int main()
{
	int hours,minutes;
	char ampm;
	bool status = true;

	cout << "Enter time in 00 00 Format:" << endl;
	cin >> hours >> minutes;

	if (hours > 24 | hours <= 0 ){
            cout << "Invalid Hours" << endl;
		    status = false;
	}
	if (minutes > 60 | minutes <= 0 ){
            cout << "Invalid Minutes" << endl;
		    status = false;
	}
	if (status);{
		cout << "\n24 Hour Format\n";
		cout << "Hours " << hours << " : " << minutes << endl;

		if (hours > 12){
			hours -= 12;
			ampm = 'p';
		}//if user enter 24hour so it should print A.M but it could'nt
		else if (hours == 12)
			ampm = 'p';
		else
			ampm = 'a';


	    if (ampm == 'p'){
	    	if (minutes < 10)
	    		cout << hours << ":0" << minutes << " P.M" << endl;
	    	else
	    		cout << hours << ":" << minutes << " P.M" << endl;
		}
		else {
	    	if (minutes < 10)
	    		cout << hours << ":0" << minutes << " A.M" << endl;
	    	else
	    		cout << hours << ":" << minutes << " A.M" << endl;
		}
	}

	return 0;
}
