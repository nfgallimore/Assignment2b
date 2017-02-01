/* Nicholas Gallimore */
/* taxPayer.hpp */
/* Creates a structure that contains the tax payer information */

#ifndef taxPayer_hpp
#define taxPayer_hpp

// rate is tax rate,
// income is total income they earned,
// and taxes is computed product of percetange rate * income
struct taxPayer
{
	float rate, income, taxes;
};

#endif