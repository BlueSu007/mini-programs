#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

bool isprime(int n){
	
	if(n == 1){
		return false;
	}
	
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	
	return true;
	
}

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	
	return gcd(b, a % b);
	
}

int lcm(int a, int b){
	return (a * b) / gcd(a, b);
}

void pfd(int n){
	if(isprime(n)){
		printf("%d\n",n);
		return ;
	}else if(n == 1){
		printf("1 is neither a prime nor composite number!\n");
	}
	
	int copy = n;
	
	for(int i = 2; i <= copy; i++)
	{
		while(n % i == 0 && isprime(i))
		{
			n /= i;
			cout << i;
			if(n != 1)	cout << " * ";
			else	cout << endl;
		}
	}
	
}

int main(){
	
	int a, b;
	printf("Please input two integers:\n");
	
	while(cin >> a >> b){
		cout << endl;
		
		printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
		printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
		
		printf("isprime(%d) = %d, isprime(%d) = %d\n", a, isprime(a), b, isprime(b));
		cout << endl;
		printf("%d = ", a);pfd(a);
		printf("%d = ", b);pfd(b);
		
		cout << "---------------------------------------------" << endl;
		printf("Please input two integers:\n");
	}
	
	
	system("pause"); 

	return 0;
} 
