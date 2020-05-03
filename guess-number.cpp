#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

void wait(int n);
void middle();
int ask(bool url);
int correct(int cnt);
void wrong(int ans,int real,int url);

int main(){
	
	srand(time(NULL));
	system("title ����С��Ϸ"); 
	
	int n,guess,real;
	middle();
	cout<<"��ӭ����������������С����ף���������֣�"<<endl;
	wait(5000);
	
	middle(); 
	cout<<"������������"<<endl;
	wait(5000);
	
	n=ask(false);
	real=rand()%n+1;
	
	int cnt=0;
	
	while(1){
		cout<<"���������µ�����\n";
		cin>>guess;
		cnt++;
		
		if(guess!=real){
			wrong(guess,real,0);
		}else{
			int tmp;
			tmp=correct(cnt);
			if(!tmp)	break;
			else	real=tmp;
			cnt=0;
		}
	}
	
	return 0;
}

void wait(int n){
	Sleep(n);
	system("cls");
	cout<<endl<<"		";
	cout<<"�й������ѧ����Сѧ 2015��4�� ����������ר��С����"<<endl; 
	cout<<"			";
	cout<<"չ�־�����ɫ ���¾���"<<endl<<endl;
}

void middle(){
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"		";
}

int ask(bool url){
	int n=3;
	
	if(url){
		middle();
		cout<<"��������������������룺1����	2������"<<endl;
		cin>>n;
		
		if(n==1){
			system("cls");
			cout<<"�����뷶Χ����2<=n<=1000000��\n";
			cin>>n;
			return rand()%n+1;
		}else if(n==2){
			cout<<"��Ϸ������>_< ��ӭ�´����棡"<<endl;
			return 0;
		}else{
			cout<<"�����벻�ԣ���������������룺\n1����	2������"<<endl;
		}
	}else{
		cout<<"�����뷶Χ����2<=n<=1000000��\n";
		cin>>n;
		
		srand(time(NULL));
		return rand()%n+1;
	}
}

int correct(int cnt){
	system("color 02");
	wait(1000);
	
	middle();
	cout<<"��ϲ�������������"<<cnt<<"��"<<endl;
	wait(2000);
	system("color 0F");
	
	return ask(true);
}

void wrong(int ans,int real,int url){
	
	if(url)	return ;
	
	system("color 0C");
	Sleep(500);
	
	if(ans>real){
		cout<<"���µ������ˣ������"<<endl;
		cout<<"--------------"<<endl;
	}else{
		cout<<"���µ���С�ˣ������"<<endl; 
		cout<<"--------------"<<endl;
	}
	
	Sleep(500);
	system("color 0F");
	
}
