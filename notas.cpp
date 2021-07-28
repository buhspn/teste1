#include<iostream>
using namespace std;

int main()
{
	float n,a=0,b=0;
	int i=1;
	while ( i<=5)
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
     a+=n;
	}
	b=a/i;
    cout<<"Media da turma :"<<b;

	return 0;
}
