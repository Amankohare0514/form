#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool isLoggedIn(){
string username, password, un, pw;

cout << "Enter your Username babes :  ";
cin >> username;
cout<< "Enter your password babes : ";
cin >> password;

ifstream read("data\\" + username + ".txt");
getline(read, un);
getline(read, pw);

if (un == username && pw == password ){
	return true;
}
else{
	return false;
}
}

int  main()
{
	int choice;

	cout << "1: Register\n2: Login\nYour choice:";
	cin >> choice;

	if (choice == 1){
	string username, password;
	
	cout << "select a username: ";
	cin>> username;
	cout << "select a password: ";
	cin>> password;

	cout << "you have created your account babes. please login\n";

	ofstream file;
	file.open("data\\" + username + ".txt");
	file << username << endl << password;
	file.close();

	main();



	}

	else if (choice == 2){
	bool status = isLoggedIn();

	if (!status){
		cout << "false login" << endl;
		system("pause");
		return 0;
	}
	 else {
	 	cout << "succesfully logged in!" << endl;
	 	system("pause");
	 	return 1;
	 }
}
}