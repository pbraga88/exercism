// CPP code to illustrate
// fabs() function
#include <cmath>
#include <iostream>
  
using namespace std;
  
int main()
{
    float a = 10.45000000000000000000001, answer;
  
    answer = fabs(a);
    cout << "fabs of " << a 
         << " is " << answer << endl;
  
    return 0;
}