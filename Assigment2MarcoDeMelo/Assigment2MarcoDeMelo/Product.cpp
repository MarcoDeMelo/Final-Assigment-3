#include "Product.h";
//Marco De Melo
//Implementation code


Product::Product(int newCode, string newProduct)
{
	cout << " ***Inside non-default constructor for Product Class*** " << endl;
	productName = new string(newProduct.length() == 0 ? "No Product Name Set" : newProduct);
	assert(productName != NULL);
	barCode = (newCode <= 0) ? 0 : newCode;
}

Product::~Product()
{
	cout << endl << " *** Inside Product Destructor*** " << endl;

	delete productName;
}

void Product::show(ostream& out) const
{
	out << "***Using Product Show Function***" << endl;
	out << left << setw(20) << "Product Name" << "Bar Code" << endl;
	out << left << setw(20) << *productName << barCode << endl;
}

PrePackedFood::PrePackedFood(int newCode, string newProduct, double newPrice)
	:Product(newCode, newProduct)
{
	cout << endl << " *** Inside PrePackedFood non-default constructor*** " << endl;
	unitPrice = (newPrice <= 0) ? 0 : newPrice;
}

void PrePackedFood::show(ostream& out) const
{
	Product::show(out);
	out << "***Using PrePackedFood Show Function***" << endl;
	cout << "Price is: " << unitPrice << endl;
}

FreshFood::FreshFood(int newCode, string newProduct, double newPrice, double newWeight)
	: Product(newCode, newProduct)
{
	cout << endl << " *** Inside FreshFood non-default constructor*** " << endl;
	unitPrice = (newPrice <= 0) ? 0 : newPrice;
	weight = (newWeight <= 0) ? 0 : weight;
}

void FreshFood::show(ostream& out) const
{
	out << "***Using FreshFood Show Function***" << endl;
	Product::show(out);
	cout << "Price is: " << unitPrice * weight << " " << "Weight is: " << weight << " g" << " Price Per g = $" << unitPrice / weight << endl;
}

