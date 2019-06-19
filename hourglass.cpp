/*Hour glass gets printed in two parts...Each half contains 3 for loops in each pass.
The middle for loop printes the 1's and the outer ones print the surrounding 0's.
*/


#include <iostream>

using namespace std;

int main()
{

int n;
cin >> n; //input

int temp1=n; //tracks 1's
int temp2=0; //tracks zeroes

for (int i=0;i<n/2;i++)  //top half
{

  for(int j=0;j<temp2/2;j++)
  {
    cout << 0 << " ";
  }

  for(int j=0;j<temp1;j++)
  {
    cout << 1 << " ";
  }

  for(int j=0;j<temp2/2;j++)
  {
    cout << 0 << " ";
  }

cout << endl;
temp1-=2;
temp2= n-temp1;
}

for (int i=n/2;i<n;i++)  //bottom half
{

  for(int j=0;j<temp2/2;j++)
  {
    cout << 0 << " ";
  }

  for(int j=0;j<temp1;j++)
  {
    cout << 1 << " ";
  }

  for(int j=0;j<temp2/2;j++)
  {
    cout << 0 << " ";
  }

cout << endl;
temp1+=2;
temp2= n-temp1;
}




return 0;
}
