// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

/*
int		main( void ) {
	Account Rabi1(42);
	Account Rabi2(54);
	Account Rabi3(957);
	Account Rabi4(432);
	Account Rabi5(1234);
	Account Rabi6(0);
	Account Rabi7(754);
	Account Rabi8(16576);
	Rabi1.displayAccountsInfos();
	Rabi1.displayStatus();
	Rabi2.displayStatus();
	Rabi3.displayStatus();
	Rabi4.displayStatus();
	Rabi5.displayStatus();
	Rabi6.displayStatus();
	Rabi7.displayStatus();
	Rabi8.displayStatus();
	Rabi1.makeDeposit(5);
	Rabi2.makeDeposit(765);
	Rabi3.makeDeposit(564);
	Rabi4.makeDeposit(2);
	Rabi5.makeDeposit(87);
	Rabi6.makeDeposit(23);
	Rabi7.makeDeposit(9);
	Rabi8.makeDeposit(20);
	Rabi1.displayAccountsInfos();
	Rabi1.displayStatus();
	Rabi2.displayStatus();
	Rabi3.displayStatus();
	Rabi4.displayStatus();
	Rabi5.displayStatus();
	Rabi6.displayStatus();
	Rabi7.displayStatus();
	Rabi8.displayStatus();
	Rabi1.makeWithdrawal(47);
	Rabi2.makeWithdrawal(34);
	Rabi3.makeWithdrawal(657);
	Rabi4.makeWithdrawal(4);
	Rabi5.makeWithdrawal(76);
	Rabi6.makeWithdrawal(23);
	Rabi7.makeWithdrawal(657);
	Rabi8.makeWithdrawal(7654);
	Rabi1.displayAccountsInfos();
	Rabi1.displayStatus();
	Rabi2.displayStatus();
	Rabi3.displayStatus();
	Rabi4.displayStatus();
	Rabi5.displayStatus();
	Rabi6.displayStatus();
	Rabi7.displayStatus();
	Rabi8.displayStatus();
	return 0;
}*/

int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //