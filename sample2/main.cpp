#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string a="Tina Sarah Maryam Medisa", b="  ";int i=0,j=0;int c[15];
	l1:
		if(b.length()%2==0){i++;cout<<"b.length l1="<<b.length()<<endl;goto l4;}else{cout<<b<<endl;goto l3;}						
	l2:
		for(int y=0;y<15;y++){for(int x=0;x<15;x++){if(b[x]==a[c[y]]){goto l1;}}goto l4;}
	l3:
		cout<<"endline="<<b<<endl;goto l5;		
	l4:
		if(i<10){cout<<"i= "<<i<<endl;cout<<"a[i]= "<<a[i]<<endl;b=b+a[i];i+=2;c[j]=i;j++;goto l4;}else{i=0;goto l2;}		
	l5:		
	cout<<"goodluck";
}