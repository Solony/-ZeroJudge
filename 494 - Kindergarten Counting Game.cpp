#include<iostream>
using namespace std;
int main(){
	int k;
	char cha[1000]={0};
	while(cin.getline(cha,1000)){
		int sum=0;
		bool word=false;
		for(k=0;k<1000;k++){
			if( (cha[k]>=65&&cha[k]<=90) || (cha[k]>=97&&cha[k]<=122) ){
				word=true;
			}
			else
				if(word==true){
					sum++;
					word=false;
				}
			cha[k]=0;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
