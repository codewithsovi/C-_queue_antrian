#include<iostream>
using namespace std ;

#define max 3
string data [max];
int top =0;

bool full(){
	if (top >=max){
		return true;
	}else {
		return false;
	}
}

bool empty(){
	if (top == 0){
		return true;
	} else{
		return false;
	}
}

void view(){
	if (!empty ()){
		cout<<" nama pengantri : "<<endl;
		for(int a=top-1; a>= 0; a--){
			cout<<a+1 <<". "<<data[a]<<endl;
		}
	}else {
		cout<<"antrian kosong "<<endl;
	}	
	if(full()){
		cout<<"antrian penuh "<<endl;
	}
	cout<<endl;
}

void tambahkan(){
	if (!full ()){
		cout<<"masukkan nama : ";
		cin>>data[top];
		top++;
	}
}

void kurangi (){
	if (! empty()){
		for(int a=0; a<top-1; a++){
			data [a] = data [a +1];
		}
		top --;
	}
}

int main(){
	int pilihan ;
	string isi;
	
	queue :
		system ("cls");
		view();
		cout<<"1. ngantri \n2. keluar \npilih :";
		cin>>pilihan;
	
	switch (pilihan){
		case 1:
			tambahkan ();
			goto queue;
		break;
			
		case 2:
			kurangi();
			goto queue;
		break;	
		
		default:
			cout<<"pilihan tidak tersedia ";
		break;
		goto queue;
	}
}
