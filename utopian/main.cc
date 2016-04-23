#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Run the tree through N seasons
//-----------------------------------------------------------------------------
void utopian( int N ) {

  int height = 1;

  for ( int i = 1; i <= N; ++i ) {
    if ( i % 2 == 0 ) ++height;
    else height *= 2;
  };  // end for loop

  cout << height << endl;

};  // end utopian


// Main routine
//-----------------------------------------------------------------------------
int main( int, char*[] ) {

    int t;
    int n = 0;

    cin >> t;

    for( int a0 = 0; a0 < t; a0++ ) {
      cin >> n;
      utopian( n );
    }; // end for loop

    return 0;

};  // end main
