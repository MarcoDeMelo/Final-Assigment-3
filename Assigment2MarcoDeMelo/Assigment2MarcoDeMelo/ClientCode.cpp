#include "Product.h";

//Write the code for the polymorphic function. Label all output. Add a comment statement clearly identifying the polymorphic function.



void showInfo(const Product*);


int main()
{
	// do not change my main except where you call the polymorphic function as indicated below

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(phone);


	cout << endl << endl;
	delete phone;

	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(item);


	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(pasta);


	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(food);

	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(apples);


	cout << endl << endl;
	delete apples;

	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	showInfo(freshPtr);


	cout << endl << endl;
	delete freshPtr;

	system("pause");
}


void showInfo(const Product* productPtr)
{
	cout << " --- Inside polymorphic function --- " << endl;
	productPtr->show(cout);
}