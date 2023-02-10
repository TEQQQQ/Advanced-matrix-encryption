#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string msg;
	cout<<"satýr sutun halinde sifrelenecek metini girin:";
	cin>>msg;
	int k = 0;
	int z = 0;

	while(true){
		if(k*k>=msg.size()){
			break;
		} else {
			k++;
		}
	}

	char matris[k][k];
	string sifrelenmis[k*k];
	for(int i = 0; i<k;i++){
		for(int j = 0;j<k;j++){
			matris[i][j] = msg[z];
			z++;
		}
	}

	for(int i = 0; i<k;i++){
		for(int j = 0;j<k;j++){
			cout<<matris[i][j];
		}
		cout<<endl;
	}

	int b = 0;
	for(int i = 0; i<k;i++){
		for(int j = 0;j<k;j++){
			sifrelenmis[b] = matris[j][i];
			b++;
		}
	}

	for(int i = 0; i<k*k;i++){
		cout<<sifrelenmis[i];
		
	}	
}
