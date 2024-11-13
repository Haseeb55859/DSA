#include <iostream>
using namespace std;
int main()
{
	int num1 = 7, num2 = 6, response, count = 0, maxTry = 3;
	do
	{
		cout<<"What is"<<num1<<"*"<<num2<<"=";
		cin>>response;
		count++;
		if((response != num1 * num2) && (count < maxTry))
		cout<<"Wrong response. Please try again\n";
	}
	while((response != num1 * num2) &&(count < maxTry));
	if(response != num1 * num2 )
	printf("Congratulations ! You got the coorect answer\n");
}
//end of main