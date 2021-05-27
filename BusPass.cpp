#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class student
{
	private:
		string sid;
		string sname;
	public:
		void getdata();
		void search();
		int login();
};

int student::login()
{
	
	string username,password;
	string cusername="student";
	string cpassword="student";
	cout << "\n WELCOME TO PASS MANAGEMENT SYSTEM ";
	cout << "\n\nEnter Username : ";
	cin >> username;
	cout << "\n\nEnter Password : ";
	cin >> password;
	
	if((cusername==username) && (cpassword==password))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void student::getdata()
{
	int ch,city,ch1;
	string aadharcardnumber;
	system("cls");

	ofstream file;
	file.open("schoolcollegelist.txt",ios::out);
	menu:
	cout << "\n\nUniversity / College we offer : ";
	cout << "\n\n1. CHARUSAT UNIVERSITY"; 
	cout << "\n2. DHARMSINH DESAI UNIVERSITY";
	cout << "\n3. D A DIPLOMA ENGINEERING AND TECHNOLOGY";
	cout << "\n4. R.K PARIKH ARTS AND SCIENCE COLLEGE";
	cout << "\n5. To search student by I.D";
	file << "\n********************************************";
	file << "\n**********College/School List***************";
	file << "\n********************************************";
	file << "\n\n1. CHARUSAT UNIVERSITY"; 
	file << "\n2. DHARMSINH DESAI UNIVERSITY";
	file << "\n3. D A DIPLOMA ENGINEERING AND TECHNOLOGY";
	file << "\n4. R.K PARIKH ARTS AND SCIENCE COLLEGE";
	file.close();
		
	file.open("citylist.txt",ios::out);
	file << "\n********************************************";
	file << "\n***************City List********************";
	file << "\n********************************************";
	file << "\n\n1. NADIAD"; 
	file << "\n2. MAHEMDAVAD";
	file << "\n3. ANAND";
	file << "\n4. BORSAD";
	file << "\n5. PETLAD";
	file.close();
	
	file.open("studentdata.txt",ios::out|ios::app);
	cout << "\n\nPlease enter your choice : ";
	cin >> ch;
	switch(ch)
	{
		case 1:
			system("cls");
			cout << "Enter Student Name : ";
			cin >> sname;
			cout << "Enter College/School I.D : ";
			cin >> sid;
			label:
			cout << "Enter AadharCard Number (For Verification) : ";
			cin >> aadharcardnumber;
			if(aadharcardnumber.size()!=12)
			{
				cout << "\nInvalid Aadharcard Number...";
				cout << "\nPlease Enter Again...";
				goto label;
			}
			else
			{
				cout << "\nStudent Verification Successfull...";
				cout << "\n\n\nCity we offer : ";
				cout << "\n\n1. Nadiad";
				cout << "\n2. Mahemdavad";
				cout << "\n3. Anand";
				cout << "\n4. Borsad";
				cout << "\n5. Petlad";
				cout << "\n\nPlease select any one city : ";
				cin >> city;
				if(city==1)
				{
					system("cls");
					cout << "\n Your from pass city is Nadiad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
					
				}	
				if(city==2)
				{
					system("cls");
					cout << "\n Your from pass city is Mahemdavad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";	
					cin >> ch1;
				}	
				if(city==3)
				{
					system("cls");
					cout << "\n Your from pass city is Anand.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}	
				if(city==4)
				{
					system("cls");
					cout << "\n Your from pass city is Borsad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}	
				if(city==5)
				{
					system("cls");
					cout << "\n Your from pass city is Petlad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
			}
		break;
		case 2:
			system("cls");
			cout << "Enter Student Name : ";
			cin >> sname;
			cout << "Enter College/School I.D : ";
			cin >> sid;
			label0:
			cout << "Enter AadharCard Number (For Verification) : ";
			cin >> aadharcardnumber;
			if(aadharcardnumber.size()!=12)
			{
				cout << "\nInvalid Aadharcard Number...";
				cout << "\nPlease Enter Again...";
				goto label0;
			}
			else
			{
				cout << "\nStudent Verification Successfull...";
				label1:
				cout << "\n\n\nCity we offer : ";
				cout << "\n\n1. Nadiad";
				cout << "\n2. Mahemdavad";
				cout << "\n3. Anand";
				cout << "\n4. Borsad";
				cout << "\n5. Petlad";
				cout << "\n\nPlease select any one city : ";
				cin >> city;
				if(city==1)
				{
					system("cls");
					cout << "\n We not offer Nadiad to Nadiad Pass...";
					cout << "\n Please Select other city...";
					goto label1;
				}
				if(city==2)
				{
					system("cls");
					cout << "\n Your from pass city is Mahemdavad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==3)
				{
					system("cls");
					cout << "\n Your from pass city is Anand.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==4)
				{
					system("cls");
					cout << "\n Your from pass city is Borsad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==5)
				{
					system("cls");
					cout << "\n Your from pass city is Petlad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
			}
		break;
		case 3:
			system("cls");
			cout << "Enter Student Name : ";
			cin >> sname;
			cout << "Enter College/School I.D : ";
			cin >> sid;
			label00:
			cout << "Enter AadharCard Number (For Verification) : ";
			cin >> aadharcardnumber;
			if(aadharcardnumber.size()!=12)
			{
				cout << "\nInvalid Aadharcard Number...";
				cout << "\nPlease Enter Again...";
				goto label00;
			}
			else
			{
				cout << "\nStudent Verification Successfull...";
				label2:
				cout << "\n\n\nCity we offer : ";
				cout << "\n\n1. Nadiad";
				cout << "\n2. Mahemdavad";
				cout << "\n3. Anand";
				cout << "\n4. Borsad";
				cout << "\n5. Petlad";
				cout << "\n\nPlease select any one city : ";
				cin >> city;
				if(city==1)
				{
					system("cls");
					cout << "\n Your from pass city is Nadiad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
					goto output;
				}
				if(city==2)
				{
					system("cls");
					cout << "\n We not offer pass from Mahemdavad to Mahemdavad.";
					cout << "\n Please select other city";
					goto label2;	
				}	
				if(city==3)
				{
					system("cls");
					cout << "\n Your from pass city is Anand.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==4)
				{
					system("cls");
					cout << "\n Your from pass city is Borsad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==5)
				{
					system("cls");
					cout << "\n Your from pass city is Petlad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
			}
		break;
		case 4:
			system("cls");
			cout << "Enter Student Name : ";
			cin >> sname;
			cout << "Enter College/School I.D : ";
			cin >> sid;
			label01:
			cout << "Enter AadharCard Number (For Verification) : ";
			cin >> aadharcardnumber;
			if(aadharcardnumber.size()!=12)
			{
				cout << "\nInvalid Aadharcard Number...";
				cout << "\nPlease Enter Again...";
				goto label01;
			}
			else
			{
				cout << "\nStudent Verification Successfull...";
				label3:
				cout << "\n\n\nCity we offer : ";
				cout << "\n\n1. Nadiad";
				cout << "\n2. Mahemdavad";
				cout << "\n3. Anand";
				cout << "\n4. Borsad";
				cout << "\n5. Petlad";
				cout << "\n\nPlease select any one city : ";
				cin >> city;
				if(city==1)
				{
					system("cls");
					cout << "\n Your from pass city is Nadiad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==2)
				{
					system("cls");
					cout << "\n Your from pass city is Mahemdavad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==3)
				{
					system("cls");
					cout << "\n Your from pass city is Anand.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==4)
				{
					system("cls");
					cout << "\n Your from pass city is Borsad.";
					cout << "\n Your Pass is successfully printed.";
					cout << "\n Do you want to print pass..(Y/N) : ";
					cin >> ch1;
				}
				if(city==5)
				{
					system("cls");
					cout << "\n We not offer pass from Petlad to Petlad.";
					cout << "\n Please select another city.";
					goto label3;
				}
			}
		break;
		case 5:
			string search;
			int offset;
			string line;
			ifstream myfile;
			myfile.open("studentdata.txt");
			cout << "Enter I.D you want to search : ";
			cin >> search;
			if(myfile.is_open())
			{
				while(!myfile.eof())
				{
					getline(myfile,sid);
					if((offset=sid.find(search,0))  != string::npos)
					{
						cout << "The I.D has found";
					}
				}
				myfile.close();
				exit(0);
			}
			else
			{
				cout << "Could not open file";
			}
			exit(0);
	}
	output:
	if(ch1='Y')
	{
		system("cls");
		cout << "\n------------------------------------------------------------------";
		cout << "\n-------------------------PASS DETAILS-----------------------------";
		cout << "\n------------------------------------------------------------------";
		cout << "\n\nYOUR PASS :";
		cout << "\nStudent Name : " << sname;
		cout << "\nStudent I.D : " << sid;
		cout << "\nStudent Aadharcard Number : " << aadharcardnumber;
		cout << "\n------------------------------------------------------------------";
		cout << "\n-------------------------THANK YOU !!-----------------------------";
		cout << "\n------------------------------------------------------------------";
		file << "\n------------------------------------------------------------------";
		file << "\n-------------------------STUDENT DATA-----------------------------";
		file << "\n------------------------------------------------------------------";
		file << "\n\nYOUR PASS :";
		file << "\nStudent Name : " << sname;
		file << "\nStudent I.D : " << sid;
		file << "\nStudent Aadharcard Number : " << aadharcardnumber; 
		cout << "\nNOTE : You can Collect your Pass from the your Pass city depo...";
		cout << "\nNOTE : Please take this Receipt for Verification...";	
	}
	file.close();
}

int main()
{
	string username,password;
	string cusername="student";
	string cpassword="student";
	student s1;
	{
		int temp = s1.login();
		if (temp ==1)
		{
			system("cls");
			cout << "\n Welcome Students...";
			s1.getdata();		
		}	
		else
		{
			cout << "\n Invalid Username and Password...";
		}
	}
	return 0;
}

