#include <iostream>
#include <string>
using namespace std;

string c = "I can't do that!\n--------------------\n";
string d = "I'm a computer,I have brain!\n====================\n";
string e = "I'm not bad,isn't I!\n####################\n";
string f = "Computer is happy!/^_^/\n++++++++++++++++++++\n";
string g;

int main(){
	
	string a;
	char b; 
	cout << "����������룺0=������1=���ޣ���2=�������������Ļ�����" << endl;
	cout << "              3=�����ԣ�4=���������𣿣�5=���ܻ��仰��" << endl;
	cout << "              6=���õ���˵�Ļ�" << endl; 
	while(1){
		cin >> b;
		if(b == '0'){ 
			cout << "����������~  GoodBye!د^_^د" << endl << "**************";
			break;
		}
		else if(b == '1'){
			cout << c << endl;
		}
		else if(b == '2'){
			cout << e << endl;
		}
		else if(b == '3'){
			cout << f << endl;
		}
		else if(b == '4'){
			cout << d << endl;
		}
		else if(b == '5'){
			cout << "��ϣ����˵ʲô�������ܺ��ո�" << endl;
			cin >> a;
			g = a; 
		}
		else if(b == '6'){
			cout << g << endl;
		}
		else{
			cout << "�����벻�ԣ���������������룡" << endl;
		}
	}
	
	return 0;
}
