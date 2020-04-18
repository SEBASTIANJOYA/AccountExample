/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: JOHANN SEBASTIAN JOYA BELTRAN
 * 201711476
 *
 * Created on 14 de abril de 2020, 09:46 PM
 */

#include <cstdlib>
#include<iostream>
#include "Account.hpp"

using namespace std;

/*
 * Metodo main en cual ejecutara la aplicacion del simulador del banco.
 */
int main(int argc, char** argv) {

    Account accountone("0956-A",65000);
    accountone.Consign(135000);
    
    Account * accounttwo = new Account("345-H",350000);
   
    if (accounttwo->Withdraw(100000)) {

        cout<<"NumberAccount... = " + accounttwo->getNumber() + "  Transaccion Exitosa... \n" ;
    
    }else{
        
        cout<<"Transaccion Fallida \n";
    }

    
    cout<<accountone.toString();
    cout<<accounttwo->toString();
    return 0;
}

