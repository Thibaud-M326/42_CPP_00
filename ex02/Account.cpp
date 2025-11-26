#include <iostream>
#include "Account.hpp"

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts (void) {
	return (_nbAccounts);
}

int		Account::getTotalAmount (void) {
	return (_totalAmount);
}

int		Account::getNbDeposits (void) {
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals (void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos ( void ) {
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits:" << _totalNbDeposits << ";";
	cout << "withdrawals:" << _totalNbWithdrawals;
	cout << endl;
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();

	this->_accountIndex = _nbAccounts;
	cout << "index:" << this->_accountIndex << ';';

	cout << "amount:" << initial_deposit << ";";
	this->_amount = initial_deposit;

	_nbAccounts++;
	_totalAmount += initial_deposit;
	cout << "created";
	cout << endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "closed";
	cout << endl;
}

void	Account::makeDeposit ( int deposit ) {
	_displayTimestamp();
	int p_amount = this->_amount;
	int amount = 0;

	cout << "index:" << this->_accountIndex << ';';
	cout << "p_amount:" << p_amount << ";";
	cout << "deposit:" << deposit << ";";
	amount = this->_amount += deposit;
	cout << "amount:" << amount << ";";
	this->_nbDeposits++;
	cout << "nb_deposits:" << this->_nbDeposits;
	_totalNbDeposits++;
	_totalAmount += deposit;
	cout << endl;
}

bool	Account::makeWithdrawal ( int withdrawal ) {
	int p_amount = this->_amount;
	int amount = 0;

	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << p_amount << ";";
	if (withdrawal > p_amount)
		cout << "withdrawal:refused";
	else {
		amount = p_amount - withdrawal;
		cout << "withdrawal:" << withdrawal << ";";
		cout << "amount:" << amount << ";";
		this->_nbWithdrawals++;
		cout << "nb_withdrawals:" << this->_nbWithdrawals;
		_totalNbWithdrawals++;
		this->_amount = amount;
		_totalAmount -= withdrawal;
	}
	cout << endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (1);
}

void	Account::displayStatus ( void ) const {
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals;
	cout << endl;
}

void	Account::_displayTimestamp( void ) {
	time_t	timestamp = time(NULL);
	struct tm datetime = *localtime(&timestamp);
	char output[50];

	strftime(output, 50, "[%Y%m%d-%H%M%S]", &datetime);
	cout << output << " ";
}