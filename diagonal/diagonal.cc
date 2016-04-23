#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

  int n;
  int total_up = 0;
  int total_down = 0;

  cin >> n;
  vector< vector< int > > a( n, vector< int >( n ) );
  for( int a_i = 0; a_i < n; a_i++ ) {
    for( int a_j = 0; a_j < n; a_j++ ) {
      cin >> a[ a_i ][ a_j ];
    }
  }

  for ( int up = 0; up < n; ++up ) {
    total_up += a[ up ][ up ];
  };

  for ( int down = 0, col = n - 1; down < n; ++down ) {
    total_down += a[ col-- ][ down ];
  };

  cout << static_cast< int >( abs( total_up - total_down ) ) << endl;

    return 0;
}
