#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int a[10000],n;
string name[10000];

int main(){
	
	cout<<"������ѧ��������"<<endl;
	cin>>n; 
	
	int max1=-1,min1=0x7fffffff,cnt=0;
	
	cout<<"������ѧ��������"<<endl;
	for(int i=1;i<=n;i++){
		cin>>name[i]>>a[i];
		
		if(a[i]>max1) max1=a[i];
		if(a[i]<min1) min1=a[i];
		
		cnt+=a[i];
		
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
				swap(name[i],name[j]);
			}
		}
	}
	
	for(int i=1;i>=n;i++){
		cout<<name[i]<<a[i]<<endl;
	}
	
	cout<<"��߷֣�"<<max1<<endl;
	cout<<"��ͷ֣�"<<min1<<endl;
	
	cout<<"�ܷ֣�"<<cnt<<endl;
	cout<<"ƽ���֣�"<<cnt/(double)n<<endl;
	
	return 0;
}
