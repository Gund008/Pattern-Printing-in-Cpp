/*Accept number of rows and number of columns from user and display below pattern
pattern
Input : 1  2  3  4 
        1  *  *  4
        1  *  *  4
        1  2  3  4 
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
    Pattern(int iNo1,int iNo2 )
    {
        iRow=iNo1;
        iCol=iNo2;
    }
////////////////////////////////////////////////////////////////////////////////////////////

    void Display()
     {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
          for(j=1;j<=iCol;j++)
          {
            if((i==1) || (i==iRow)||(j==1)||(j==iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
          }
         printf("\n");
       }
   }
};
//////////////////////////////////////////////////////////////////////////////////////////

int main()
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