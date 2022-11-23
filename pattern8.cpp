
/*
Accept number of rows and number of columns from user and display below pattern.
Input :  iRow=4  ,iCol=4
Output:  *   *   *  *
         *   *   *  #
         *   *   #  #
         *   #   #  #
*/        

#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRow;
    int iCol;

    public:
    void Setter(int iNo1,int iNo2)
    {
        iRow=iNo1;
        iCol=iNo2;
    }
     void Getter()
      {
         int i=0,j=0;
         for(i=iRow;i>=1;i--)
          {
             for(j=1;j<=iCol;j++)
            {
               if(i>=j) 
               {
                  printf("*\t");
               }  
             else
              {
                printf("#\t");
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
    
    Pattern pobj;
    pobj.Setter(iValue1,iValue2);
    pobj.Getter();
    

    return 0;
}