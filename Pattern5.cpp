/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=4  ,iCol=4

Output:A  B  C  D
       a  b  c  d
       A  B  C  D
       a  b  c  d
*/


#include<iostream>
using namespace std;

class Pattern6
{
    public:
    int iRow;
    int iCol;

    Pattern6()
    {
        iRow=0;
        iCol=0;
    }
    Pattern6(int iRow1,int iCol1)
    {
        this->iRow=iRow1;
        this->iCol=iCol1;
    }

   void display()
    {
        int i=0,j=0,k=0;
        char ch='A';
        char ch1='a';

        for(i=1;i<=iRow/2;i++)                    //Outer loop
        {
            for(j=1,ch='A';j<=iCol;j++,ch++)      //Inner loop
              {
                   printf("%c\t",ch);
              }
           printf("\n");
           for(k=1,ch1='a';k<=iCol;k++,ch1++)    //Inner loop
             {
                   printf("%c\t",ch1);
             }
           printf("\n");
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo1=0,iNo2=0;

    cout<<"Enter First Number"<<endl;
    cin>>iNo1;

    cout<<"Enter Second Number"<<endl;
    cin>>iNo2;
    
    Pattern6 pobj(iNo1,iNo2);
    pobj.display();

    return 0;

}