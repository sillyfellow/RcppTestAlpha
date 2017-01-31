/*
 * =====================================================================================
 *
 *       Filename:  ovbOptimizer.cpp
 *
 *    Description:  Simple class with test.
 *
 *        Version:  1.0
 *        Created:  01/31/2017 12:49:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Sandeep Sadanandan (sillyfellow), grep@whybenormal.org
 *   Organization:
 *
 * =====================================================================================
 */

#include <Rcpp.h>

class Num {                     // simple class with two private variables
	public:                         // which have a getter/setter and getter
		Num() : x(0.0), y(0){} ;

		double getX() { return x ; }
		void setX(double value){ x = value ; }

		int getY() { return y ; }

	private:
		double x ;
		int y ;
};

RCPP_MODULE(NumEx){
	using namespace Rcpp ;

	class_<Num>( "Num" )

		.default_constructor()

		// read and write property
		.property( "x", &Num::getX, &Num::setX )

		// read-only property
		.property( "y", &Num::getY )
		;
}
