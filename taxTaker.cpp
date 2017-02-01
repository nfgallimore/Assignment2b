/* Nicholas Gallimore */
/* taxTaker.cpp */
/* Implementation for taxTaker which collects the tax information from user(s)  */

#include <iostream>

#include "taxConst.hpp"
#include "taxPayer.hpp"
#include "taxTaker.hpp"

// takes an array of taxPayers as input and returns nothing
void taxTaker(taxPayer* tp)
{
	// heading
	std::cout << "Please enter the annual income and tax rate for " << SIZE << " tax payers:\n\n";

	// iterates through all elements
	for (int i = 0; i < SIZE; i++)
	{
		// asks user for income
		std::cout << "\nEnter this year's income for tax payer " << i + 1 << ": ";
		std::cin >> tp[i].income;

		// asks user for tax rate
		std::cout << "Enter the tax rate for tax payer # " << i + 1 << ": ";
		std::cin >> tp[i].rate;
		
		// computes tax where rate is treated as a percentage
		tp[i].taxes = tp[i].rate / 100 * tp[i].income;
}