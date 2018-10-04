#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
main(){
	char word[20];
	int a,n,w;
	cout<<"Masukan suatu kata = ";cin>>word;
	cout<<endl;
	w=strlen(word);

	for(a=w;a>=0;a--){
		for(n=0;n<a;n++){
			cout<<word[n];
		}
	cout<<endl;
	}
}



