#ifndef ACCOUNT_H
# define ACCOUNT_H

class Account {
	public:
		// Account(void);
		// Account(int amount);
		// ~Account(void);
		int getAmount(void);
		int deposit(int amount);
		int withdraw(int amount);

	private:
		int _amount;
};

#endif