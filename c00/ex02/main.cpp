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
	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //