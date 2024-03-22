#include<iostream>
using namespace std;

int main(){
	int harga, jmlBrg, total, pilihan, bayar, kembalian;
	string item;
	
	cout<<"============================\n";
	cout<<"========Kai Desserts========\n";
	cout<<"============Menu============\n";
	cout<<"1. Ice Cream\t: Rp. 7.000\n";
	cout<<"2. Muffin Cake\t: Rp. 8.000\n";
	cout<<"3. Milkshake\t: Rp. 10.000\n";
	cout<<"4. Selesai Belanja\n";
	cout<<"============================\n";
	
	do{
		
		cout<<"Pilih Menu: \a";
		cin>>pilihan;
		
		switch(pilihan){
			case 1 :
				item = "Ice Cream";
				harga = 7000;
				cout<<"Beli berapa? \a";
				cin>>jmlBrg;
				total += jmlBrg * harga;
				cout<<jmlBrg<<" "<<item<<" = Rp. "<<jmlBrg * harga<<endl;
				cout<<"=========================================\n";
		}
		
		switch(pilihan){
			case 2 :
				item = "Muffin Cake";
				harga = 8000;
				cout<<"Beli berapa? \a";
				cin>>jmlBrg;
				total += jmlBrg * harga;
				cout<<jmlBrg<<" "<<item<<" = Rp. "<<jmlBrg * harga<<endl;
				cout<<"=========================================\n";	
		}
		
		switch(pilihan){
			case 3 :
				item = "Milkshake";
				harga = 10000;
				cout<<"Beli berapa? \a";
				cin>>jmlBrg;
				total += jmlBrg * harga;
				cout<<jmlBrg<<" "<<item<<" = Rp. "<<jmlBrg * harga<<endl;	
				cout<<"=========================================\n";	
		}
		
		switch(pilihan){
			case 4 :
				cout<<"=============Struk Pembayaran=============\n";
				cout<<"Total belanja: "<<total;
				cout<<endl<<"Uang pembayaran: Rp. \a";
				cin>>bayar;
				kembalian = bayar - total;
				cout<<endl<<"Kembalian: Rp. \a"<<kembalian<<endl;
				cout<<"==========================================\n";
		}
	}while(pilihan != 4);
	cout<<"Terima Kasih!";
}