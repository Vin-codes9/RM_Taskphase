#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str="worksheet";
    int Length = str.length();
    cout<<"\n Input: "<<str<<" \n";
for (int i = 0; i < Length; i++)
	{
        for (int j = i+1; j < Length; j++)
	    {
            if (str[i] > str[j])

	    {

                char temporary = str[i];
                str[i] = str[j];
                str[j] = temporary;
            }
        }
    }
    cout<<"\n Output: "<<str<<" \n";
    return 0;
}
