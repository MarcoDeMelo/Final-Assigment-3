#pragma once
#include <iostream>
#include <string>
#include <cassert>
#include <fstream>
#include <iomanip>

using namespace std;

//specification file for Product Class

class Product
{
public:
	Product(); //default constructor
	Product(int/*barCode*/, string /*productName*/); //non default constructor
	virtual ~Product(); //decustructor
	void show(ostream& /*console or file*/) const;
	int getBarCode() { return barCode; }
	string getProductName() { return *productName; }



private:
	string* productName;
	int barCode;

};



class PrePackedFood : public Product
{
public:
	PrePackedFood();
	PrePackedFood(int/*bar code*/, string/*productName*/, double/*unit price*/);
	void show(ostream& /*console or file*/) const;
	double getUnitPrice() { return unitPrice; }
private:
	double unitPrice;
};




class FreshFood : public Product
{
public:
	FreshFood();
	FreshFood(int/*Product code*/, string/*ProductName*/, double/*unit price*/, double /*Weight*/);
	void show(ostream& /*console or file*/) const;
	double getUnitPrice() { return unitPrice; }
	double getWeight() { return weight; }
private:
	double unitPrice;
	double weight;


};

