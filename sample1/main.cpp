#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int a=123,b=124,c=125,d=23,e=25,f=25;
	for(int i=2;i<=30;i=(i+5)+(i%2)){
		if(i%2==0){
			d*=(a*2);
		}
		if((i+e)%2==0){
			e+=(66*9+21-311);
		}
		if((i-f)%5==0){
			f*=(a+2);
		}
//		cout<<i<<endl;
	}
//	cout<<d<<e<<f;
	//d=5658   e=1241    f=3125          
	a=((d*21)+e*f/(d-f))*3+(d+e)-((e+f+8)/27); //a=367784
	b=((d*20+f/e*f)*4+(e+f+d)+(d/(7*8))-2)/4;  //b=3
//	a=(d*20+f/e*f)*4+(e+f+d)+(d/(7*8))-2 ==>487763
	int k[a/b];
	for(int i=0;a>0;a/=100){
		k[i]=a%100;
		i++;
	}
	cout<<char(k[0])<<char(k[1])<<char(k[2]);  //TM$
	}