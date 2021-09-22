#include<iostream>
#include<string>
#include<vector>
using namespace std;
class book {
public:
	string name;
	int phone;
	int day;
	int month;
	int year;
	int code = { 20 };
	int choice;
	
	
	void reserve()
	{

		cout << ".............BOOK YOUR ROOM ............." << endl;
		cout << "Enter customer name" << endl;
		cin >> name;
		cout << "Enter your phone " << endl;
		cin >> phone;
		cout << " of check_in" << " ";
		cout << " Enter day " << " ";
		cin >> day;
		cout << endl;
		cout << "Enter month" << " ";
		cin >> month;
		cout << endl;
		cout << "Enter year" << " ";
		cin >> year;
		cout << endl;
		cout << "the date of check_in" << " " << day << "/" << month << "/" << year << endl;
		cout << " of check_out" << " ";
		cout << " Enter day " << " ";
		cin >> day;
		cout << endl;
		cout << "Enter month" << " ";
		cin >> month;
		cout << endl;
		cout << "Enter year" << " ";
		cin >> year;
		cout << endl;
		cout << "the date of check_out" << " " << day << "/" << month << "/" << year << endl;
		cout << endl;
		cout << endl;
		
	}
	void cancelreservation()
	{
		cout << "......cancel reservation......" << endl;
		cout << "Enter your name" << endl;;
		cin >> name;
		cout << endl;
		cout << "Enter your phone " << endl;
		cin >> phone;
		cout << endl;
		cout << "Please Enter this code here " << "2233" << endl;
		cin >> code;
		do
		{

			{
				cout << "Your code incorrectred please enter again";
				cin >> code;
			}
			cout << endl;

		} while (code != 2233);
		if (code == 2233)
		{
			cout << "Canceld sucssesfuly" << endl;
		}
	}

};
class Room {
public:
	int number_of_room;
	int daysOfReservation;
	int roomtype;
	int sum;
	int bedPrice;
	int pricePerNight;
	int seatPrice;
	int status = 0;
	int room;
public:
	void getroomtype() {
		cout << "please choose your room";
		cout << endl;
		cout << "Enter 1 if you want standerd room";
		cout << endl;
		cout << "Enter 2 if you want sweet";
		cout << endl;
		cout << "Enter 3 if you want conference";
		cout << endl;
	
		cin >> roomtype;
		if (roomtype == 1)
		{
			cout << "Enter roo num";
			cin >> number_of_room;
			cout << "Enter dayofreservation" << " ";
			cin >> daysOfReservation;
			cout << "Enter bedprice" << " ";
			cin >> bedPrice;
			sum = daysOfReservation * bedPrice;

			cout << "price of stay " << " " << sum << endl;
		 status = 1;
			cout << ".............BOOKING COPMLETED.............";
			cout << endl;
			
		}
		else if (roomtype == 2)
		{
			cout << "Enter roo num";
			cin >> number_of_room;
			cout << "Enter dayofreservation" << " ";
			cin >> daysOfReservation;
			cout << "Enter pricePerNight " << " ";
			cin >> pricePerNight;
			sum = pricePerNight * daysOfReservation;
			cout << "price of stay " << " " << sum << endl;
			status = 1;
			cout << ".............BOOKING COPMLETED.............";
			cout << endl;
		}
		else if (roomtype == 3)
		{
			cout << "Enter roo num";
			cin >> number_of_room;
			cout << "Enter dayofreservation" << " ";
			cin >> daysOfReservation;
			cout << "Enter seatPrice" << " ";
			cin >> seatPrice;
			sum = seatPrice * daysOfReservation;
			cout << "price of stay " << " " << sum << endl;
			status = 1;
			cout << ".............BOOKING COPMLETED.............";
			cout << endl;
		}

	}
	int  checkstatus()
	{
		cout << "Enter roo num";
		cin >> number_of_room;
		if(status==1)
		{
			cout << "room is not avaliable";
			return false;
		}
		else if (status == 0)
		{
			cout << "room avaliable";
			return true;
		}
	}
};

class standerd :public Room {
protected:
	int daysOfReservation;
	int numberOfBeds;
	int bedPrice;
	int priceofreservation;
public:
	void set_priceofreservation(int daysOfReservation, int bedPrice)
	{
		priceofreservation = daysOfReservation * bedPrice;
		cout << priceofreservation;
	}
	int get_priceofreservation()
	{
		return priceofreservation;
	}
};
class Sweet :public Room {
public:
	int  pricePerNight;
	int daysOfReservation;
	int priceofreservation;
public:
	void set_priceofreservation(int  pricePerNight, int daysOfReservation)
	{
		priceofreservation = daysOfReservation * pricePerNight;
		cout << priceofreservation;
	}
	int get_priceofreservation()
	{
		return priceofreservation;
	}
};
class ConferenceRoom :public Room
{
public:

	int daysOfReservation;
	int numberOfSeats;
	int seatPrice;
	int priceofreservation;
public:
	void set_priceofreservation(int seatPrice, int daysOfReservation)
	{
		priceofreservation = daysOfReservation * seatPrice;
		cout << priceofreservation;
	}
	int get_priceofreservation()
	{
		return priceofreservation;
	}

};
class Floor:public Room {
public:
	 int *roomnum=new int[7];
	void getavaliableroom()
	{

		for (int i = 0; i < 7; i++)
		{if(checkstatus()==true)
		{
			cout << roomnum[i];
			cout << endl;
		}

		}
	}
};
int main()
{
	int choice;
	book t;
	Floor s;
	Room n;
	cout << "Enter 1 if u want to book room" << endl;
	cout << "Enter 2 if u want to cancel booking" << endl;
	cout << "Enter 3 if u want avaliable" << endl;
	cout << "Enter 4 if u want dispaly totalprice" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		t.reserve();
		
		n.checkstatus();
		n.getroomtype();
		n.checkstatus();
		
		break;
		
	}
	case 2:
	{
		t.cancelreservation();
		break;
	}
	case 3:
	{ s.getavaliableroom();
	break;
	}
	case 4:
	{
		n.getroomtype();
		break;
	}

	return 0;
	}
	

	
}