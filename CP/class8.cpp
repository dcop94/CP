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
		cout << " Candy �����縦 �Է��ϼ��� : ";
		cin >> manufacturer;
	}

	void printManufacture() const
	{
		cout << " Candy ������ : " << manufacturer << endl;
	}

	string getShow()
	{
		return flavor + " �� ���� ";
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
		cout << "Chocolate �����縦 �Է��ϼ��� : ";
		cin >> manufacturer;
	}

	void printManufacture() const
	{
		cout << " Chocolate ������ : " << manufacturer << endl;
	}

	string getShow()
	{
		return shape + " ��� ���ݸ� ";
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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�. ( 1: ����, 2: ���ݸ�, 0: ����)  : " << endl;
		cin >> choice;

		if (choice < 1 || choice > 2)
		{
			cout << " 0~2 ���ڸ� �Է��ϼ��� ";
		}
		else if (choice == 1)
		{
			string flavor;
			cout << " ���� �Է��ϼ��� : ";
			cin >> flavor;
			

		}
		else if (choice == 2)
		{
			string shape;
			cout << " ����� �Է��ϼ��� ";
			cin >> shape;
		}
	}

}