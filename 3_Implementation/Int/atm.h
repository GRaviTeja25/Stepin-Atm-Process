/**
 * @file atm.h
 * @author Raviteja
 * @brief 
 * @version 0.1
 * @date 2021-09-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ATM_H__
#define __ATM_H__

void mainMenu(void);
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit(void);
void errorMessage(void);

#endif