#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int y,z;
	float rata,ta;

	cout<<"Masukan jumlah angka yang akan dirata-rata kan = ";cin>>z;
	int a[z];

	for(y=0;y<z;y++){
		cout<<"Masukkan angka indeks ke-"<<1+y<<" = ";cin>>a[z];
		ta=ta+a[z];
	}
	cout<<endl;
	rata=ta/z;
	cout<<"Rata-rata dari angka-angka diatas = "<<rata;

	getch();
	return 0;
}

