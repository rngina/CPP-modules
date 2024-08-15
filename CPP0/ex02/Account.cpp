#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalNbDeposits = 0;
}

Account::Account( void ) {
	_displayTimestamp();
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += this->_amount;
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalNbDeposits = 0;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp( void ) {
	time_t now = time(NULL);
	tm* localTime = localtime(&now);
	char buffer[20];

	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
	std::cout << '[' << buffer << "] ";
}

int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts 
	<< ";total:" << Account::_totalAmount 
	<< ";deposits:" << Account::_totalNbDeposits 
	<< ";withdrawals:" << Account::_totalNbWithdrawals 
	<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
	<< ";p_amount:" << this->_amount 
	<< ";deposit:" << deposit 
	<< ";amount:" << this->_amount + deposit 
	<< ";nb_deposits:" << this->_nbDeposits + 1 
	<< std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (withdrawal > this->_amount) {
		std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";withdrawal:" << withdrawal
	<< ";amount:" << this->_amount - withdrawal
	<< ";nb_withdrawals:" << this->_nbWithdrawals + 1
	<< std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}
