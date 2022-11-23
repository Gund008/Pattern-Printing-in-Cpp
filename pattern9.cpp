
/*
Accept number of rows and number of columns from user and display below pattern,
Input : iRow-4    iCol-4
Output : * * * *
         * * *
         * *
         *
*/      

#include<iostream>
using namespace std;

//Declaration
class Pattern
{
    public:
    int iRow;
    int iCol;

    Pattern();
    Pattern(int iNo1,int iNo2);
    void Display();
};    
//Defination
    Pattern::Pattern()
    {
       iRow=0;
       iCol=0;
    }
   Pattern::Pattern(int iNo1,int iNo2)
    {
       iRow=iNo1;
       iCol=iNo2;
    }
   void Pattern::Display()
    {
       int i=0,j=0;
      for(i=1;i<=iRow;i++)
       {
         for(j=1;j<=iCol;j++)
         {
           if(i<=j) 
           {
            printf("*\t");
           }
         }
        printf("\n");
      }
    }
        
//////////////////////////////////////////////////////////////////////////////////////////

int main()                        //Neked function
{
    int iValue1=0;
    int iValue2=0;
    
    cout<<"Enter the Number of rows:"<<endl;
    cin>>iValue1;

    cout<<"Enter the Number of Columns:"<<endl;
    cin>>iValue2;
    
    Pattern pobj(iValue1,iValue2);
    pobj.Display();
  
    return 0;
}