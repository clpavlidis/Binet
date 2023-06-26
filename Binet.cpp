# include <iostream>
# include <cmath>
using namespace std;

float f_n, n;

int main ()
{
    cout << endl;
    cout << "Give the wanted term of the Fibonacci Sequence: " << endl;
    cout << "The number of the term, must be positive and integer" << endl;

        do
        {
            cin >> n;
                if (n != (int)n or n < 0)
                {
                    cout << "Please, give a positive and integer number" << endl;
                }
        } while (n != (int)n or n < 0); // check if the entered number is strightly positive & integer

            f_n = (1/sqrt(5)) *
                  (pow((1+sqrt(5))/2,n) -
                  pow((1-sqrt(5))/2,n));
                
                cout << "The " << n << " term of the Fibonacci Sequence, is: "
                     << f_n << endl << endl;
        
return 0;
}