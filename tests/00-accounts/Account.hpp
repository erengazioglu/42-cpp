#ifndef ACCOUNT_H
# define ACCOUNT_H

class Account {
	public:
		static int getTotalAmount(void);
		Account(void);
		Account(int amount);
		// ~Account(void);
		int getAmount(void);
		int deposit(int amount);
		int withdraw(int amount);

	private:
		static int _totalAmount;
		int _amount;
};

#endif