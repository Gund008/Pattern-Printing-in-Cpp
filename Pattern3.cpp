/*
Accept number of rows and number  of Columns from user and display below pattern
Input:   *  *  *  *
         *  *  *  *
         *  *  *  *
         *  *  *  *

*/

#include<iostream>
using namespace std;

class Pattern
{
    public:
    int iRow;
    int iCol;
    Pattern()
    {
        iRow=0;
        iCol=0;
    }
    Pattern(int iRow1,int iCol1)
    {
        this->iRow=iRow1;
        this->iCol=iCol1;
    }
    void display()
    {
       int i=0,j=0;
       for(i=1;i<=iRow;i++)
       {
         for(j=1;j<=iCol;j++)
         {
             cout<<"*"<<"\t";
         }
         cout<<"\n";
       }
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo1=0,iNo2=0;
    cout<<"Enter the First Number"<<endl;
    cin>>iNo1;

    cout<<"Enter the First Number"<<endl;
    cin>>iNo2;
    
    Pattern pobj(iNo1,iNo2);
    pobj.display();
    return 0;

}