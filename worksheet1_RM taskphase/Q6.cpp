#include <bits/stdc++.h>
using namespace std;
 
int ProDivSum(int n)
{
    int sum = 1;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int main()
{
    int n, i, j, ctr,nm1,nm2;
 cout << "\n\n Check whether two numbers are Amicable pairs or not: \n";
 cout << "\n Sample: (220, 284), (1184, 1210), (2620, 2924).. \n";
 cout << " --------------------------------------------------------\n";	
      cout<<" Input the 1st number : ";
      cin>>nm1;
      cout<<" Input the 2nd number : ";
      cin>>nm2;	  
   

      if( chkAmicable(nm1,nm2))
        cout << " The given numbers are an Amicable pair."<<endl;
    else
        cout << " The given numbers are not an Amicable pair."<<endl;
    return 0;
}