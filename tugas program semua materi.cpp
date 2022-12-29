#include <iostream>
#include <cmath>
using namespace std;
char lagi, kembali;

void choose();
void bdatar();
void akar();
void urutan();
void faktor();
int faktorial(int);
void searching();
void loop_akar();
void loop_bdatar();
void loop_urutan();
void loop_faktor();
void loop_searching();

int main (){
	cout<<"=============================\n";
	
	cout<<"==        Math Tools       ==\n";
	
	cout<<"=============================\n";
	
	cout<<"Pilih Tools yang diinginkan:\n";
	cout<<"1. Hitung Luas Bangun Datar\n"; 
	cout<<"2. Hitung Akar Pangkat \n"; 
	cout<<"3. Pengurutan Angka \n";
	cout<<"4. Faktorial Angka \n"; 
	cout<<"5. Simulasi Searching Angka \n";
	
	choose();
}

//code pilih menu
void choose(){
	int pilihan;
	
	do {
		cout<<"-----------------------------\n";		
		cout<<"Pilihan Tools: "; cin>>pilihan;
		switch (pilihan){
			case 1:
				system("cls");
				bdatar(); 
				break;
			case 2:
				system("cls");
				akar();
				break;
			case 3:
				system("cls");
				urutan();
				break;
			case 4:
				system("cls");
				faktor();
				break;
			case 5:
				system("cls");
				searching();
				break;
			default:
				system("cls");
				cout<<"=============================\n";
	
				cout<<"==        Math Tools       ==\n";
				
				cout<<"=============================\n";
				
				cout<<"Pilih Tools yang diinginkan:\n";
				cout<<"1. Hitung Luas Bangun Datar\n";
				cout<<"2. Hitung Akar Pangkat \n";
				cout<<"3. Pengurutan Angka \n";
				cout<<"4. Faktorial Angka \n"; // done
				cout<<"5. Simulasi Searching Angka \n"; // done
				break;
		}	
	}while(pilihan != 1 && pilihan != 2 && pilihan != 3 && pilihan != 4 && pilihan != 5);	
}

//code bangun datar
void bdatar(){
	int pilih;
	cout<<"-----------------------------\n";
	cout<<"==   Pilih Bangun Datar    ==\n";
	cout<<"-----------------------------\n";
	cout<<"1. Persegi\n";
	cout<<"2. Segitiga \n";
	cout<<"3. Lingkaran \n\n";
	
	cout<<"Pilihanmu: ";cin>>pilih;
	
	if(pilih==1){
		//persegi
		int sisi, luas;
		cout << "Masukkan panjang sisi persegi: ";cin >> sisi;
		
		luas = sisi * sisi;
		cout << "Luas persegi adalah: " << luas << endl;
		loop_bdatar();
		
	}else if(pilih==2){
		//segitiga
		int alas, tinggi;
		cout << "Masukkan panjang alas segitiga: ";cin >> alas;
		cout << "Masukkan tinggi segitiga: ";cin >> tinggi;
		
		int luas = alas * tinggi / 2;
		cout << "Luas segitiga adalah: " << luas << endl;
		loop_bdatar();
		
	}else if(pilih==3){
		//lingkaran
		float r, luas;
		cout << "Masukkan jari-jari lingkaran: ";
		cin >> r;
		
		luas = M_PI * pow(r, 2);
		cout << "Luas lingkaran adalah: " << luas << endl;
		loop_bdatar();
		
	}else{
		system("cls");
		bdatar();
	}
}

//code akar pangkat
void akar(){
	float angka, result;
	cout<<"-----------------------------\n";
	cout<<"==      akar pangkat       ==\n";
	cout<<"-----------------------------\n";
	
	cout<<"Masukan Angka: "; cin>>angka;
	result = sqrt(angka);
	cout<<"-----------------------------\n";
	cout<<"Angka yang diinput: " << angka << "\nHasilnya: " << result <<endl;
	
	loop_akar();

}

//kode pengurutan angka
void urutan(){
	cout<<"-----------------------------\n";
	cout<<"==    Pengurutan Angka     ==\n";
	cout<<"-----------------------------\n";
	
	int i, j, angka, input, temp;
    int arrangka[10];
    char asdes;
    
    cout <<"Jumlah Banyak Bilangan: ";cin >> angka;
    cout <<"input sebanyak "<< angka << " angka: " << endl;
    
	for (i = 1; i <= angka; i++) {
        cin >> input;
        arrangka[i] = input;
    }
    cout<<"-----------------------------\n";
    
    do{
		cout<<"Ascending/Descending (A/D): "; cin >> asdes;
	    if(asdes == 'A' || asdes == 'a'){
	    	for (i = 1; i <= angka - 1; i++) {
	        for (j = i + 1; j <= angka; j++) {
	            if (arrangka[j] < arrangka[i]) {
	                temp = arrangka[j];
	                arrangka[j] = arrangka[i];
	                arrangka[i] = temp;
	            }
	        }
	    }
	    
	    }else if(asdes == 'D' || asdes == 'd'){
	    	for (i = 1; i <= angka - 1; i++) {
		        for (j = i + 1; j <= angka; j++) {
		            if (arrangka[j] > arrangka[i]) {
		                temp = arrangka[j];
		                arrangka[j] = arrangka[i];
		                arrangka[i] = temp;
		            }
		        }
			}
		}else{
			cout<<"";
		}
    	
	}while(asdes != 'A' && asdes != 'a' && asdes != 'D' && asdes != 'd');
    
    cout<<"-----------------------------\n";
    cout << "Selection sort : " << endl;
    for (i = 1; i <= angka; i++) {
        cout << arrangka[i] << endl;
    }
	loop_urutan();
}


void loop_bdatar(){
	cout<<"-----------------------------\n";
	cout<<"Lagi? (y/n): "; cin>>lagi;
	if (lagi == 'Y' || lagi== 'y') {
		system("cls");
		bdatar();
	}else if(lagi == 'N' || 'n'){
			system("cls");
			cout<<"-----------------------------\n";
			cout<<"Kembali ke Menu tools? (y/n): "; cin>>kembali;
			if(kembali == 'Y' || kembali == 'y'){
				system("cls");
				main();
			}
			if(kembali == 'N' || 'n'){
					system("cls");
					cout<<"-----------------------------\n";
					cout<<"Thanks for visit, goodbye! ";
			}
	}else{
		cout<<"input anda salah";
	}
}

//pengulangan operasi akar pangkat
void loop_akar(){
	cout<<"-----------------------------\n";
	cout<<"Lagi? (y/n): "; cin>>lagi;
	if (lagi == 'Y' || lagi== 'y') {
		system("cls");
		akar();
	}else if(lagi == 'N' || 'n'){
			system("cls");
			cout<<"-----------------------------\n";
			cout<<"Kembali ke Menu tools? (y/n): "; cin>>kembali;
			if(kembali == 'Y' || kembali == 'y'){
				system("cls");
				main();
			}
			if(kembali == 'N' || 'n'){
					system("cls");
					cout<<"-----------------------------\n";
					cout<<"Thanks for visit, goodbye! ";
			}
	}else{
		cout<<"input anda salah";
	}
}

//pengulangan operasi pengurutan angka
void loop_urutan(){
	cout<<"-----------------------------\n";
	cout<<"Lagi? (y/n): "; cin>>lagi;
	if (lagi == 'Y' || lagi== 'y') {
		system("cls");
		urutan();
	}else if(lagi == 'N' || 'n'){
			system("cls");
			cout<<"-----------------------------\n";
			cout<<"Kembali ke Menu tools? (y/n): "; cin>>kembali;
			if(kembali == 'Y' || kembali == 'y'){
				system("cls");
				main();
			}
			if(kembali == 'N' || 'n'){
					system("cls");
					cout<<"-----------------------------\n";
					cout<<"Thanks for visit, goodbye! ";
			}
	}else{
		cout<<"input anda salah";
	}
	
}

//main code faktorial
void faktor(){
	int n, result;
	cout<<"-----------------------------\n";
	cout<<"==     Faktorial Angka     ==\n";
	cout<<"-----------------------------\n";
	cout<<"masukan angka positif: ";cin>>n;
	
	result = faktorial(n);
	cout<<"Faktorial dari " << n << " adalah: " << result << endl;
	
	loop_faktor();
	
}
// logika faktorial
int faktorial (int n) {
	if(n > 1){
		return n * faktorial(n - 1);
	}else{
		return 1;
	}
}

// pengulangan operasi faktorial
void loop_faktor(){
	cout<<"-----------------------------\n";
	cout<<"Lagi? (y/n): "; cin>>lagi;
	if (lagi == 'Y' || lagi== 'y') {
		system("cls");
		faktor();
	}else if(lagi == 'N' || 'n'){
			system("cls");
			cout<<"-----------------------------\n";
			cout<<"Kembali ke Menu tools? (y/n): "; cin>>kembali;
			if(kembali == 'Y' || kembali == 'y'){
				system("cls");
				main();
			}
			if(kembali == 'N' || 'n'){
					system("cls");
					cout<<"-----------------------------\n";
					cout<<"Thanks for visit, goodbye! ";
			}
	}else{
		cout<<"input anda salah";
	}
	
}

// code searching
void searching(){
	int arrangka[10];
	int n = sizeof(arrangka) / sizeof(arrangka[0]);
	int angka, input, cari;
	cout<<"-----------------------------\n";
	cout<<"==     Searching Angka     ==\n";
	cout<<"-----------------------------\n";
	
	cout <<"Masukan Banyak Bilangan: "; cin>>input; 
    cout <<"input sebanyak "<< input << " angka: " << endl; cin >> angka;
    
	for (int i = 1; i < input; i++) {
        cin >> angka;
        arrangka[i] = angka;
    }
    
    cout <<"masukan angka yang dicari: ";cin >> cari;
    int indeks = -1;
    for(int i = 0; i < n; i++ ){
    	if (arrangka[i] == cari){
    		indeks =i;
    		break;
		}
	}
	
	if(indeks == -1){
		cout<<"angka tidak ditemukan" << endl;
	}else{
		cout<<"angka ditemukan di indeks ke-" << indeks << endl;
	}
	loop_searching();
}

//pengulangan operasi searching
void loop_searching(){
	cout<<"-----------------------------\n";
	cout<<"Lagi? (y/n): "; cin>>lagi;
	if (lagi == 'Y' || lagi== 'y') {
		system("cls");
		searching();
	}else if(lagi == 'N' || 'n'){
			system("cls");
			cout<<"-----------------------------\n";
			cout<<"Kembali ke Menu tools? (y/n): "; cin>>kembali;
			if(kembali == 'Y' || kembali == 'y'){
				system("cls");
				main();
			}
			if(kembali == 'N' || 'n'){
					system("cls");
					cout<<"-----------------------------\n";
					cout<<"Thanks for visit, goodbye! ";
			}
	}else{
		cout<<"input anda salah";
	}
}
