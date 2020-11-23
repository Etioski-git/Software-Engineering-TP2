// Problem 6 - Write a program to accept five integer values from keyword.


#include<iostream>


using namespace std;

   int main()
    {
     int arr[5],i;
     int *k=arr;
     cout<<"Select five numbers separated by space:";
     cin >> *k>>*(k+1)>>*(k+2)>>*(k+3)>>*(k+4);
     cout <<"Your numbers are:\n";
     for(i=0;i<5;i++)
        cout<<arr[i]<<endl;


     return 0;

    }

