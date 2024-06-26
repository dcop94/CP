#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Snack
{
protected:
	string productName;
	double price;
	string manufacturer;

public:
	Snack() {}
	Snack(string productName, double price, string manufacturer)
		: productName(productName), price(price), manufacturer(manufacturer) {}

	virtual string getShow() const = 0;

	virtual string getName() const
	{
		return productName;
	}

	string getManufacturer() const
	{
		return manufacturer;
	}

	void setManufacturer(const string& manufacturer)
	{
		this->manufacturer = manufacturer;
	}
};

class Candy : public Snack
{
private:
	string flavor;

public:
	Candy() {}
	Candy(string flavor, double price, string productName, string manufacturer)
		: Snack(productName, price, manufacturer), flavor(flavor)
	{
		cout << " Candy 제조사를 입력하세요 : ";
		cin >> manufacturer;
	}

	void printManufacture() const
	{
		cout << " Candy 제조사 : " << manufacturer << endl;
	}

	string getShow()
	{
		return flavor + " 맛 사탕 ";
	}

};

class Chocolate : public Snack
{
private:
	string shape;

public:
	Chocolate() {}
	Chocolate(string shpae, double price, string productName, string manufacturer)
		: Snack(productName, price, manufacturer), shape(shpae)
	{
		cout << "Chocolate 제조사를 입력하세요 : ";
		cin >> manufacturer;
	}

	void printManufacture() const
	{
		cout << " Chocolate 제조사 : " << manufacturer << endl;
	}

	string getShow()
	{
		return shape + " 모양 초콜릿 ";
	}
};

class Snackbasket
{
private:
	static int snackNum;

public :
	static int get_snakcNum()
	{
		return snackNum;
	}

};

int Snackbasket::snackNum = 0;

int main()
{


	int choice;
	Snackbasket basket;

	while (1)
	{
		cout << "과자 바구니에 추가할 간식을 고르시오. ( 1: 사탕, 2: 초콜릿, 0: 종료)  : " << endl;
		cin >> choice;

		if (choice < 1 || choice > 2)
		{
			cout << " 0~2 숫자를 입력하세요 ";
		}
		else if (choice == 1)
		{
			string flavor;
			cout << " 맛을 입력하세요 : ";
			cin >> flavor;
			

		}
		else if (choice == 2)
		{
			string shape;
			cout << " 모양을 입력하세요 ";
			cin >> shape;
		}
	}

}