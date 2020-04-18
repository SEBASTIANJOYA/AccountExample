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

    //Casos de prueba.
    //Creacion de la primera cuenta
    Account accountone("0956-A",65000);
    
    //Realiza una consignacion a la cuenta uno
    accountone.Consign(135000);
    
    //Otra opcion en la cual podemos crear otra cuenta
    Account * accounttwo = new Account("345-H",350000);
   
    //realizamos un retiro a la cuenta dos.
    if (accounttwo->Withdraw(100000)) {

        cout<<"NumberAccount... = " + accounttwo->getNumber() + "  Transaccion Exitosa... \n" ;
    
    }else{
        
        cout<<"Transaccion Fallida \n";
    }

    //Muestra por consola los atributos con su respectivo valor.
    cout<<accountone.toString();
    cout<<accounttwo->toString();
    return 0;
}

