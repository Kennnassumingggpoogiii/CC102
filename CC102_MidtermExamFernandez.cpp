#include <iostream>

using namespace std;

int main()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float usdToPhp, poundToPhp;
	cout << "=====SEVENPM SARI-SARI STORE POINT OF SALE SYSTEM=====\n ";
	//get the price of each product
	cout << "Price of sugar: "; cin >> sugarPriceUSD;
	cout << "Price of rice: "; cin >> ricePricePound;
	cout << "Price of sardines: "; cin >> sardinesPricePound;
	cout << "Price of coffee: "; cin >> coffeePriceUSD;
	cout << "Price of milk: "; cin >> milkPriceUSD;
	
	//get quantity of each product
	cout << "Enter the Quantity of sugar: "; cin >> sugarQty;
	cout << "Enter the Quantity of rice: "; cin >> riceQty;
	cout << "Enter the Quantity of sardines: "; cin >> sardinesQty;
	cout << "Enter the Quantity of coffee: "; cin >> coffeeQty;
	cout << "Enter the Quantity of milk: "; cin >> milkQty; 
	cout << "===========================================\n ";
	
	//calculate the total cost of each item in Php
	//calculate the total cost in Php
	sugarCostPhp =  sugarPriceUSD *Php = exchange_rate
	riceCostPhp = ricePricePound * Php = exchange_rate
	sardinesCostPhp = sardinesPricePound *Php
	coffeeCostPhp =coffeePriceUSD *Php;
	milkCostPhp = milkPriceUSD * Php;
	return 0; 
}
