#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

  int n = 0;
  int iter = 0;
  cin >> n;
  vector< int > value( n );
  vector< float > score;

  for ( iter = 0; iter < 3; ++iter ) score.push_back( 0.0 );

  for( iter = 0; iter < n; ++iter ){
    cin >> value[ iter ];
    if ( value[ iter ] == 0 ) ++score[ 2 ];
    if ( value[ iter ] < 0 ) ++score[ 1 ];
    if ( value[ iter ] > 0 ) ++score[ 0 ];
  };  // end for loop

  for ( iter = 0; iter < 3; ++iter ) {
    score[ iter ] = score[ iter ] / value.size();
    cout << score[ iter ] << endl;
  };  // end for loop

  return 0;

};  // end main
