//�������� ��������� �� C++, ������� ���������� ������ �����.
//
//�������� ����� BankAccount, ������� �������� :
//����: ����� �����, ��� ���������, ������.
//������ : �����������, ������ ��� ����������(deposit) � ������ �������(withdraw).
// 
//�������� ����������� ����� SavingsAccount, ������� ��������� :
//����: ���������� ������.
//����� ��� ���������� ���������.
//� main() �������� ������� BankAccount � SavingsAccount, ��������� �������� ����������, ������ � ���������� ���������.

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
	protected:
		int accountId;
		string name;
		float balance;
	public:
		BankAccount(int accountId, string name, float balance) {
			this->accountId = accountId;
			this->name = name;
			this->balance = balance;
		}
		
		void deposit(float sum) {
			this->balance += sum;
			cout << balance << endl;
		}

		void withdraw(float sum) {
			this->balance -= sum;
			cout << balance << endl;

		}
};

class SavingAccount : public BankAccount {
private:
	float percent;
public:
	SavingAccount(float percent, int accountId, string name, float balance) : BankAccount (accountId, name, balance){
		this->percent = percent;
	}
	void addPercent() {
		balance += (percent/100) * balance;
		cout << balance << endl;

	}

};

int main() {
	BankAccount bank(1, "ouk puk", 777);
	SavingAccount sbank(2, 2, "ldsl", 7);
	bank.deposit(19);
	bank.withdraw(10);
	sbank.deposit(8);
	sbank.withdraw(10);
	sbank.addPercent();

	return 0;
}
