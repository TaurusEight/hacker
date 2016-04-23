#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//====================================================================
namespace big {

  class integer {

  public:

    integer( const string& );
    integer operator+( const big::integer& );
    friend ostream& operator<<( ostream&, integer );

  private:

    vector<int> digits;

  };  // end class integer

  ostream& operator<<( ostream&, integer );

};  // end NS big


//====================================================================
int c2i( const char c ) { return c - '0'; };

//====================================================================
big::integer::integer( const string& bint ){

  if ( bint.size() == 0 ) return;

   transform(
             bint.rbegin(),
             bint.rend(),
             back_inserter( digits ),
             c2i
             );  // end transform

};  // integer constructor


//====================================================================
big::integer big::integer::operator*( const big::integer& integer ) {

  int digit = 0;
  int carry = 0;

  for ( int iter = 0;
        iter < digits.size() && iter < integer.digits.size();
        ++iter ) {
    digit = ( digits[ iter ] + carry ) * integer.digits[ iter ];
    carry = 0;
    if ( digit > 9 ) {
      carry = ( digit / 10 ) * 10;
      digit = digit % 10;
    };  // end if digit > 9
    digits[ iter ] = digit;
  };  // end for loop

};  // end operator*


//====================================================================
big::integer big::integer::operator+( const big::integer& integer ) {

   int digit = 0;
   int carry = 0;

   for ( int iter = 0; iter < digits.size(); ++iter ) {

     digit = digits[ iter ] + integer.digits[ iter ] + carry;
     carry = 0;  // clear the carry
     if ( digit > 9 ) {
       carry = 1;
       digit -= 10;
     };  // end if digit > 9
     digits[ iter ] = digit;
   };  // end for loop

   if ( carry == 1 ) digits.push_back( 1 );

   return *this;

};  // end operator+


//====================================================================
ostream& big::operator <<( ostream& out, big::integer integer ) {

  for( int iter = 0; iter < integer.digits.size(); ++iter )
    out << integer.digits[ iter ] << endl;
  return out;

};  // end operator<<



string int2string( int integer ) {

  ostringstream result;
  result << integer;
  return result.str();

};  // end int2string


//====================================================================
void factorial( int N ) {

  big::integer bi( N );

  for ( int iter = N - 1; iter > 1; --iter )
    bi = bi

};  // end factorial



int main( int, char*[] ) {

    int n;
    cin >> n;
    return 0;

};  // end main
