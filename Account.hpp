/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.hpp
 * Author: JOHANN SEBASTIAN JOYA BELTRAN
 *
 * Created on 14 de abril de 2020, 09:47 PM
 */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include<string>
using namespace std;
/*ARCHIVO DE CABECERA 
 SIMULACION DE UNA CUENTA BANCARIA*/
class Account {
    
    /*DECLARACION DE LOS METODOS PUBLICOS A UTILIZAR */
    
public:
 
    Account(string,double);
    const static double minresidue;
    void setNumber(string);
    string getNumber();
    double getResidue();
    short int getWithdrawals();
    short int getConsignments();
    void Consign(double);
    bool Withdraw(double);
    bool Transfer(Account*, double);
    string toString();
    virtual ~Account();

    /*DECLARACION DE LOS METODOS Y ATRIBUTOS PRIVADOS A UTILIZAR.*/
    
private:

    string numberaccount;
    double residue;
    short int withdrawals;
    short int consignments;
    void setResidue(double);
    string parseString(double);
};

#endif /* ACCOUNT_HPP */

