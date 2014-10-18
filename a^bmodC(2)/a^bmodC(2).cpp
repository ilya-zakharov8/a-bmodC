// a^bmodC(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	long int a, b, c, result;
	int *AStepB;
	int step, i = 0;
	cin >> a;		
	cin >> b;	
	cin >> c;
	step = b;	
	while(step > 1)
	{
		if(step%2 == 0){
			step = step / 2;			
			i++;
		}
		else{
			step--; 			
			i++;
		}
	}
	step = b;
	AStepB = new int[i];
	for(int j = i - 1; j >= 0; j--){
		if(step%2 == 0){
			AStepB[j] = 0;
			step = step / 2;			
		}
		else{
			AStepB[j] = 1;
			step--; 				
		}
	}
	result = a;
	for(int j = 0; j < i; j++){
		if(AStepB[j] == 0)
		result = (result % c) * 2 % c;
		else result = result * a % c;
	}
	cout << result << endl;

}
