/* Nicholas Gallimore */
/* taxTaker.cpp */
/* Implementation for taxTaker which collects the tax information from user(s)  */

#include <iostream>
#include <cmath>

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
		// tmp variable to store income input for validation before it is written to struct
		float incomeInput;

		// asks user for income
		std::cout << "\nEnter this year's income for tax payer " << i + 1 << ": ";

		while (1)
		{
			// must be a number and greater than 0
			if (std::cin >> incomeInput && !std::isnan(incomeInput) && incomeInput > 0) 
			{
				break;
			}
			else // otherwise it will print this
			{
				std::cout << "Please enter a number greater than 0." << std::endl;

				// flushes input stream
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}

	        // tmp variable to store rate input for validation before it is written to struct
		float rateInput;

		// asks user for tax rate
		std::cout << "Enter the tax rate for tax payer # " << i + 1 << ": ";

		while (true)
		{
			// must be a number and greater than 0
			if (std::cin >> rateInput && !std::isnan(rateInput) && rateInput >= 0.01 && rateInput <= 9.9) 
			{
				break;
			}
			else // otherwise it will print this
			{
				std::cout << "Please enter a number greater than 0." << std::endl;

				// flushes input stream
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
	    	}
		
		// computes tax where rate is treated as a percentage
		tp[i].taxes = tp[i].rate / 100 * tp[i].income;
	}
}
