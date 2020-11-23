// Problem 4 - Pascal Triangle
#include<iostream>
#include<conio.h>

using namespace std;
void printPascalTr(int size);
int main()
    {
     int size;
     cout <<"\nInput Pascal triangle size:";
     cin >> size;
     printPascalTr(size);
     getch();
     return 0;

    }



    void printPascalTr(int size){
         int PascalTr[size][size];
         int row,col;
         //assign zero to every array element
         for(row=0;row<size;row++)
            for(col=0;col<size;col++)  PascalTr[row][col]=0;
         //first and second rows are set to 1s
         PascalTr[0][0]=1;
         PascalTr[1][0]=1;
         PascalTr[1][1]=1;

         for(row=2;row<size;row++){
              PascalTr[row][0]=1;
              for(col=1;col<=row;col++){
                        PascalTr[row][col]=PascalTr[row-1][col-1]+PascalTr[row-1][col];
                                        }
                            }
          //display the Pascal Triangle
          for(row=0;row<size;row++){
            for(col=0;col<=row;col++){
                   printf("%d\t",PascalTr[row][col]);
                   }
            cout<<endl;
            }

         }
