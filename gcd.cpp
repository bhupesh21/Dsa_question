#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int result=min(a,b);
	while(result>0){
		if(a%result==0 && b%result==0){
			cout<<result<<endl;
			break;
		}
		result--;
	}
	return 0;
}
