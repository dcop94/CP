#include <iostream>

using namespace std;

class User
{
	int use_id;
	string use_name;
	string use_account;
	string use_phon;
	int branch_id;
};
 
class Bank
{
	int branch_id;
	string bank_address;
	int active_accounts;

	void Add_use();
	void Remove_use();
	void Add_branch();
	void Remove_branch();


};

class Active_Func
{
	void New_Account();
	void Account_Trans();
	
};