#include<iostream>
using namespace std;
class Vehicle
{
	string brand;
	string model;
	public: Vehicle( string brand, string model)
	{
		this->brand=brand;
		this->model=model;
	}
	void Show()
		{
			cout<<"Brand "<<brand<<"Model "<<model<<endl;
		}
};
class Car:public Vehicle
{
	float price;
	public:Car(string brand, string model,float price):
		Vehicle(brand,model)
		{
		this->price=price;
		}
		void Display()
		{
			Show();
			cout<<"Price is Rs."<<price;
		}
};
int main()
{
	Car car("Honda","City",670000.00);
	car.Display();
}