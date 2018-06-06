/**
 * \class BigNumbers
 *
 * \ingroup BigNumbers
 *
 *
 * \brief Create Large Numbers
 *
 * This class is meant to create larger numbers beyond the primitive
 * data types. It will allow users to modify and manipulate numbers
 * with basic operations, given the need to use numbers exceeding
 * 10,000 digits.
 *
 *
 * \author $Author: Justin Tagalogon-Nguyen $
 *
 * \version 1
 *
 * \date $Date: 2018/06/05 $
 *
 *
 *
 */

#ifndef BIGNUMBERS_H_
#define BIGNUMBERS_H_
#include <vector>
#include <iostream>
#include <string>
using namespace std;




class BigNumbers {

public:
	/// create a vector which uses each index to represent a digit
	vector<int> bigNumber;

	/// create a big number class
	BigNumbers();

	/// override operator to allow addition of big numbers
	BigNumbers operator+ (BigNumbers a);

	/// override operator to allow subtraction of big numbers
	BigNumbers operator- (BigNumbers a);

	/// override operator to allow multiplication of big numbers
	BigNumbers operator* (BigNumbers a);

	/// override operator to allow division of big numbers
	BigNumbers operator/ (BigNumbers a);

	/// override operator to allow modulous of big numbers
	BigNumbers operator% (BigNumbers a);

	/// sets a value to a big number
	void setValue(long a);

	/** \brief A conversion method.
	      * \param A vector representing a big number.
	      * \return an integer version of the big number to allow modification.
	      *
	      * This method takes the contents of a vector
	      * and returns it as an integer.
	      * This is required to allow operations of big numbers.
	      */
	static int convert(vector<int> &a);

	/** \brief Reconfigures the big number vector.
		      * \param A vector representing a big number.
		      * \param A long to be converted into a big number.
		      * \return void.
		      *
		      * This method takes the digits of a long number.
		      * and adds them to the big number vector.
		      * This is required to represent big numbers in a vector.
		      */
	static void update(vector<int> &a, long b);

	/// an exception class that checks if a number exceeds 10,000 digits.
	class InvalidNumberSize{};
};

#endif /* BIGNUMBERS_H_ */
