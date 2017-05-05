
#include "GasTank.h"
//#include<iostream>
#include <cassert>
using namespace std;

GasTank::GasTank(){
	capacity = 100; //default value
	amount = 0;
}

GasTank::GasTank(double gasCap){
	//assert(gasCap >= 1);
	capacity = gasCap;
	amount = 0;
}

 void GasTank::addGas(double fill){
	 //assert(fill > 0); //precondition: fill > 0
	 if(fill + amount > capacity){amount = capacity;}
	 else {amount += fill;}
}

 void GasTank::UseGas(double drain){
	 //assert(drain > 0);
	 if(amount - drain < 0){ amount = 0;}
	 else { amount -= drain;}
 }

bool GasTank::isEmpty(){
	if(amount < 0.1){return true;}
	else{return false;}
}

bool GasTank::isFull(){
	if(amount > capacity - 0.1) { return true;}
	else{return false;}
}

double GasTank::getGasLevel(){
	return amount;
}

double GasTank::fillUp(){
	double amount2full = capacity - amount;
	addGas(amount2full);
	return amount2full;
}
