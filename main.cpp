

#include<iostream>
#include <string>
using namespace std;

int main()
{
    
    int prime_num[11] = { 2,3,5,7,11,13,17,19,23,29,31 };
    
    int num, iter, c;

    
    cout << "Enter a positive number between 1 to 1000 "
        << "Other than first 11 prime numbers\n";
    cin >> num;

   
    c = 0;

   
    for (iter = 0; iter < 11; iter++) {

       
        if (num % prime_num[iter] != 0 || num == prime_num[iter]) {

            //Increase the counter.
            c++;
        }
    }

    
    if (c == 11)

        cout << num << " is Prime\n";

  
    else
    {
       
        cout << num << " is not prime and divisible by\n";
        
        for (iter = 0; iter < 11; iter++)
        {
           

            if (num % prime_num[iter] == 0)
                cout << prime_num[iter] << " ";

        }
        cout << "\n";
    }
    return 0;

}

