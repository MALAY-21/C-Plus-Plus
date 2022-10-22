/**
 * Copyright 2020 @author omkarlanghe
 *
 * @file
 * A simple program to check if the given number if prime or not.
 *
 * @brief
 * Reduced all possibilities of a number which cannot be prime.
 * Eg: No even number, except 2 can be a prime number, hence we will increment
 * our loop with i+6 jumping and check for i or i+2 to be a factor of the
 * number; if it's a factor then we will return false otherwise true after the
 * loop terminates at the terminating condition which is (i*i<=num)
 */
 
#include<bits/stdc++.h> /// Header file
using namespace std;   

/**
 * Function to check if the given number is prime or not.
 * @param num number to be checked.
 * @return if number is prime, it returns @ is a Prime, else it returns @ not a Prime.
 * @return false if a no. is negative or either 0 or 1.
 */


/**
 * Main function
 */
int main(){

    long long int n;
    cin>>n;

    bool isPrime = 1;

    if (n <= 1) 
        return false;

     for(int i=2; i<n; i++){

         if(n%i==0){
             isPrime=0;
             break;
         }
     }

      if(isPrime==0){
          cout<<"Not a Prime"<<endl;
      }

       else{
           cout<<"is a Prime"<<endl;
       }
 return 0;
}
