#include<iostream>
using namespace std;

int main()
{
	float n;
	int i=1;
	while ( i<=10)
	{
	 cout<<"Digite uma nota"<<endl;
 	 cin>>n;
		if (n<=7)
	    {
      		cout<<"Reprovado!"<<endl;
        }
	    if ((7<n)&&(n<10))
	    {
	     	cout<<"Aprovado!"<<endl;
	    }
	    if (n==10)
	    {
	    	cout<<"Aprovado com louvor!!"<<endl;
		}
     i++;
	}

	return 0;
}
