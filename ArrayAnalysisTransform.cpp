#include <iostream>
using namespace std;
int test (int a[] ,int ,int);
void test_2 (int a[] ,int ,int);
int main ()
{
	int a[20];
	int n,k,o;
	cin>>n;
	for (int i=0 ; i<n ; i++)
	    cin>>a[i];
    cout<<"minus : "<<test(a,n,k)<<'\n';
    test_2(a,n,o);
    for (int i=0 ; i<n ; i++)
        cout<<a[i];
}
int test (int a[] , int n , int k)
{
	int max=a[0];
	int min=a[0];
	for (int i=0 ; i<n ; i++)
	{
		if (a[i]>=max)
		    max=a[i];
		else if (a[i]<=min)
		    min=a[i];
	}
	return max-min;
}
void test_2 (int a[] , int n , int o)
{
	for (int i=0 ; i<n ; i++)
	    if (a[i]>0)
	        a[i]*=(-1);
}
