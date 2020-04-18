/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.cpp
 * Author: JOHANN SEBASTIAN JOYA BELTRAN.
 * 201711476
 * Created on 14 de abril de 2020, 09:47 PM
 */


/* Arcivo de implementacion de los metodos a utilizar.*/
#include "Account.hpp"
#include<sstream>
#include<string>

//implementacion del atributo constante minresidue
const double Account::minresidue = 50000;

//constructor de la clase Account.
Account::Account(string number,double residue) {
    setNumber(number);
    setResidue(residue);
    this->consignments = 0;
    this->withdrawals = 0;
    
}

//metodos set que reciben el numero de la cuenta y el saldo actual de la cuenta.

void Account::setNumber(string number){
    this->numberaccount = number;
} 

void Account::setResidue(double residue){
    this->residue = residue;
}

//Metodos en el cual retornaran numero de la cuenta y el saldo actual.
string Account::getNumber(){
    
    return Account::numberaccount;
}

double Account::getResidue(){

    return Account::residue;
}

//metodo para saber la cantidad de retiros.
short int Account::getWithdrawals(){
    
    return Account::withdrawals;
}

//metodo para saber la cantidad de consignaciones.
short int Account::getConsignments(){
    
    return Account::consignments;
}

//Metodo para realizar una consignacion que tiene por parametro el valor a consigar.
//y se incrementa el contador de consignaciones
void Account::Consign(double consign){
    
    setResidue(getResidue() + consign);
    consignments++;
}

//Metodo de retirar que recibe por parametro el valor a retirar.

bool Account::Withdraw(double withdraw){
    if (withdraw <= getResidue() - minresidue) {

        setResidue( getResidue() - withdraw);
        withdrawals++;
        
        return true;
    }

    return false;
}

//Metodo para transferir de una cuenta a otra recibe un apuntador a la cuelta y el valor a transferir.
bool Account::Transfer(Account* account, double value){
    if (Withdraw(value)) {
        account->Consign(value);
        
        return true;
        
    }

    return false;
}

//metodo que recibe un valor numerico y lo retorna como cadena de caracteres.
string Account::parseString(double value){
    ostringstream aux;
    aux << value;
    
    return aux.str();
}

//Metodo que retorna una cadena de caracteres y se le da valor a los atributos.
string Account::toString(){
    
    return "Account number... = " + numberaccount +  "  Residue... =  " + parseString(residue) + 
            "Consignmet... " + parseString(consignments) +  "  WithDrawals... = " +parseString(withdrawals)+"\n ";

}
Account::~Account() {
}

