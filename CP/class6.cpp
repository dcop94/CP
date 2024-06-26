#include <iostream>
#include <string>

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
};

int main()
{
	Snack* snackBasket[4];
	
	snackBasket[0] = new Candy("Sweet", 1.0, "chup");
	snackBasket[1] = new Candy("Sweet", 1.2, "chuchu");
	snackBasket[2] = new Chocolate("Square", 1.5, "gana");
	snackBasket[3] = new Chocolate("Round", 2.0, "chco-");


	for (int i = 0; i < 4; i++)
	{
		cout << "상품이름 : " << snackBasket[i]->getName() << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			Candy* candy = (Candy*)snackBasket[i];
			candy->printManufacture();
		}
		else
		{
			Chocolate* chocolate = (Chocolate*)snackBasket[i];
			chocolate->printManufacture();
		}
		
	}


	for (int i = 0; i < 4; i++)
	{
		delete snackBasket[i];
	}

	return 0;
}
