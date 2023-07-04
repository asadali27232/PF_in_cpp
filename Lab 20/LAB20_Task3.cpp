#include<iostream>
using namespace std;
int main()
{

int arr1[3][3];
int arr2[3][3];
int arr[3][3];

int i,j;
int n,m;
n=1;
m=12;
for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		arr1[i][j]=n;
		n++;

	}


}
cout<<"The valuse in Array 1 are :";
for (i=0;i<3;i++)
{cout<<endl;
	for (j=0;j<3;j++)
	{
		cout<<arr1[i][j]<<" ";
	}

}
for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		arr2[i][j]=m;
		m++;

	}


}
cout<<endl;
cout<<"The valuse in Array 2 are :";
for (i=0;i<3;i++)
{cout<<endl;
	for (j=0;j<3;j++)
	{
		cout<<arr2[i][j]<<" ";
	}

}
for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		arr[i][j]=arr1[i][j]+arr2[i][j];


	}


}
cout<<endl;
cout<<"The Sum of valuse of Array 1 and Array 2 are :";
for (i=0;i<3;i++)
{cout<<endl;
	for (j=0;j<3;j++)
	{
		cout<<arr[i][j]<<" ";
	}

}

	return 0;
}