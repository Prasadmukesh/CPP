#include<iostream>
using namespace std;
class Vehicle
{
	string brand;
	string model;
	public: Getdata( string brand, string model)
	{
		this->brand=brand;
		this->model=model;
	}
	void Show()
		{
			cout<<"Brand "<<brand<<"Model "<<model<<endl;
		}
	void Move()
	{
		cout<<"Vehicle is moving.....";
	}
};
class Car:public Vehicle
{
	
	public:
//		Car()
//		{
//		this->brand=brand;
//		this->model=model;
//		}
	 void Move()
	{
		cout<<"Car is Driving.....";
	}
	
};
class Boat:public Vehicle
{
	public: void Move()
	{
		cout<<"Boat is sailing.....";
	}
	
};
class Airplane:public Vehicle
{
	public: void Move()
	{
		cout<<"Airplane is Flying.....";
	}
	
};

int main()
{
	Car car;
	car.Getdata("Honda","Amaze");
	car.Show();
	car.Move();
}