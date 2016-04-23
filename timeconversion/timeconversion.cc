#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


//-----------------------------------------------------------------------------
namespace military {

  //---------------------------------------------------------------------------
  class time {

  public:

    time( const string& );

    friend ostream& operator<<( ostream&, const time& );

  protected:

    int str2int_( const string& ) const;

  private:

    int minutes;
    int hours;
    int seconds;

  };  // end class time

  ostream& operator<<( ostream&, const time& );

};  // end NS military


//-----------------------------------------------------------------------------
military::time::time( const string& when )
  : hours( 0 ), minutes( 0 ), seconds( 0 ) {

  bool pm = when.substr( 8, 2 ) == "PM";

  hours = str2int_( when.substr( 0, 2 ) );
  minutes = str2int_( when.substr( 3, 2 ) );
  seconds = str2int_( when.substr( 6, 2 ) );

  if ( pm == true ) hours += 12;  // add twelve to the time
  if ( hours >= 24 ) hours -= 12;
  if ( ( hours == 12 ) && ( pm == false ) ) hours -= 12;

  };  // end constructor


//-----------------------------------------------------------------------------
int military::time::str2int_( const string& when ) const {

  return atoi( when.c_str() );

};  // end str2int_

//-----------------------------------------------------------------------------
ostream& military::operator<<( ostream& out, const military::time& when ) {

  out << setfill( '0' ) << setw( 2 ) << when.hours << ':'
      << setfill( '0' ) << setw( 2 ) << when.minutes << ':'
      << setfill( '0' ) << setw( 2 ) << when.seconds;

  return out;

};  // end operator<<


//-----------------------------------------------------------------------------
int main( int, char*[] ){

  string time;
  cin >> time;
  military::time when( time );
  cout << when << endl;

  return 0;

};  // end main
