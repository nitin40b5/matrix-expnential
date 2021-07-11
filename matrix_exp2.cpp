#include <iostream>
#include <conio.h>
using namespace std;
void wwlcome();
void backto();
void menu();
void cal();
void welcome()
{
	system("cls");
	cout<<"\t\t\t\tWELCOME\n";
	cout<<"\t\t\tMARIX EXPONENTIAL CALCUATOR\n";
	cout<<"\t\t----------------------------------------\n\n\n";
	cout<<"\t\t\t\tcreated by:\n";
	cout<<"\t\t\t  Nilesh seth(2K20/B5/35)\n\t\t\t  Nitin patel(2K20/B5/40)\n";
	getchar();
    menu();
}
void backto()
{
	system("cls");
	cout<<"\t\t-----------------------------------------\n";
	cout<<"\t\t\t\tTHANK YOU FOR USING \n";
	cout<<"\t\t\t\tMATRIX EXPONENTIAL CALCUATOR\n";
	cout<<"\t\t-----------------------------------------\n";
	getchar();
	exit(0);
}
void menu()
{
	
	int d;
	cout<<"\t\t\t\t1.ENTER INTO CALCULATOR:\n\t\t\t\t2.EXIT\n\t\t\t\tENTER YOUR CHOICE:\n\t\t\t\t";
	cin>>d;
	switch(d)
	{
		case 1:
		cal();
		case 2:
		backto();
		default:
		cout<<"\t\t\t\twrong choice";
		menu();
	}

}
void cal()
{
	system("cls");
	int n;
	cout<<"\t\t\tENTER THE ORDER OF SQUARE MATRIX:"<<endl<<"\t\t\t";
	cin>>n;
	float a[n][n],sum[n][n],b[n][n],result[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				b[i][j]=1;
				result[i][j]=1;
			}
			else
			{
				b[i][j]=0;
				result[i][j]=0;
			}
		}
	}
	cout<<"\t\t\tENTER THE ELEMENT OF THE MATRIX"<<endl<<"\t\t\t";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	    cout<<endl<<"\t\t\t";
	}
    
    for(int s=1;s<100;s++)
    {
        	for(int i=0;i<n;i++)
	        {
		        for(int j=0;j<n;j++)	
		        {
		        	sum[i][j]=0;
		  	        for(int k=0;k<n;k++)
		  		       sum[i][j]+=b[i][k]*a[k][j];
		        }
	        }
	        for(int i=0;i<n;i++)
	        {
	        	for(int j=0;j<n;j++)
	        		b[i][j]=sum[i][j];
	        }

	        for(int i=0;i<n;i++)
	        {
	        	for(int j=0;j<n;j++)
	        		b[i][j]=(b[i][j]/(float)s);
	        }
            
            for(int i=0;i<n;i++)
            {
         	    for(int j=0;j<n;j++)
         		    result[i][j]+=b[i][j];
            }
    }

    for(int i=0;i<n;i++)
    {
    	if(i!=0)
    	{
    	cout<<"\t\t\t";
        }
    	for(int j=0;j<n;j++)
    		printf("%.6f\t",result[i][j]);
    	cout<<endl;
    }

    getchar();
    menu();
}
int main()
{

	welcome();
    return 0;   
}
