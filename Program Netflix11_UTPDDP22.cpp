/*Program ini dibuat oleh kelompok 11 pada Senin, 17 Oktober 2022 sampai dengan Selasa, 18 Oktober 2022
Anggota Kelompok :
					1. Bernadetha Belva Arjanti 
						NPM : 2257051021
					2. Dewi Nurhaliza
						NPM : 2217051057
					3. Indah Kusuma Ningrum
						NPM : 2217051139
						
Program yang kami buat adalah program Transaksi online dengan produk berupa Paket Langganan akun premium Netflix
*/

#include <iostream> //Library untuk input dan output
#include <windows.h> //Library untuk tipe data HANDLE , fungsi GetStdHandle 
#include <conio.h> //Library untuk menggunakan fungsi getch()
#include <ctime> //Library Untuk menampilkan Hari, Tanggal dan Waktu yang Real pada program

using namespace std;

//Membuat prosedur setcolor untuk mengatur warna teks 
void setcolor (unsigned short color){
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

//Membuat prosedur header
void header(){
	//Memanggil prosedur setcolor dengan parameter 3, 3 mengatur warna teks menjadi biru terang
	setcolor(3);
	cout<<"------------------------------------------------------------------------ \n";
	cout<<"--------------------------     WELCOME TO      ------------------------- \n";
	cout<<"--------------------------  TOKO NETFLIX 24/7  ------------------------- \n";
	//Memanggil prosedur setcolor dengan parameter 7, 7 mengatur warna teks menjadi putih (warna teks semula)
	setcolor(7);

}



//Membuat fungsi program
int program (){
	
	//menyimpan data paket langganan, metode pambayaran, dan kode pembayaran pada array betipe string
	string kode[3] = {"2217051057", "2217051139", "2257051021"}, kodee, cetakbukti;
	string paket[4] = {"1 BULAN", "3 BULAN", "6 BULAN", "12 BULAN"}, payment [5] = {"SHOPEEPAY", "DANA", "OVO", "GOPAY", "LINK AJA"};
	char username[50], name [50];
	int metode_payment, order;
	//Menyimpan data harga pada array bertipe data integer
	int harga [4] = {35000, 100000, 195000, 385000};
	
	time_t sekarang = time(0); //Untuk mendapatkan waktu sekarang (realtime) dari lokal time
    string waktu = ctime(&sekarang); //Mengkonversi waktu yang telah didapat menjadi tipe data string untuk ditampilkan
	
	
	do{
		
		cout<<"----------------------------- PRICE LIST -------------------------------"<<endl;
		cout<<"--------------------------  ++++++++++++++  ----------------------------"<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"|	[1]  1 BULAN                   = Rp. "<<harga[0]<<"			|"<<endl;
		cout<<"|	[2]  3 BULAN                   = Rp. "<<harga[1]<<"			|"<<endl;
		cout<<"|	[3]  6 BULAN                   = Rp. "<<harga[2]<<"			|"<<endl;
		cout<<"|	[4]  12 BULAN                  = Rp. "<<harga[3]<<"			|"<<endl;
		cout<<"------------------------------------------------------------------------";
		cout <<endl<<endl;
		
		
		
		cout<<"Username                           	: "; //Meminta user untuk menginput username akun netflixnya, kemudian nilai itu disimpan dalam variabel username
		cin>>username;
		cout<<"Nickname                           	: "; //Meminta user menginput nama panggilan, yang disimpan dalam variabel name
		cin>>name;
		cout<<"Pilih Paket Yang Ingin Anda Beli   	: "; //Meminta user meilih paket yang ingin dibeli sesuai dengan menu pricelist, disimpan dalam variabel order
		cin>>order;
		cout << endl;
		cout << "Paket yang Anda pilih adalah paket langganan ";
		
			//Jika user memilih paket 1
			if (order == 1){ 
			cout << " 1 Bulan "; //Maka menampilkan jangka waktu langganan 1 bulan dan harga sebagai konfirmasi
			cout << "seharga Rp. " << harga[order - 1] <<endl;
			}
			//Jika user memilih paket 2
			else if (order == 2){
				cout << "3 Bulan "; //Maka menampilkan jangka waktu langganan 3 bulan dan harga sebagai konfirmasi
				cout << "seharga Rp. " << harga[order - 1] <<endl;
			}
			//Jika user memilih paket 3
			else if (order == 3){
				cout << "6 Bulan "; //Maka menampilkan jangka waktu langganan 6 bulan dan harga sebagai konfirmasi
				cout << "seharga Rp. " << harga[order - 1] <<endl;
				}
			//Jika user memilih paket 4
			else if (order == 4){
				cout << "12 Bulan "; //Maka menampilkan jangka waktu langganan 12 bulan dan harga sebagai konfirmasi
				cout << "seharga Rp. " << harga[order - 1] <<endl;
			}
			//Jika user menginputkan angka yang tidak ada dalam price list, maka akan menampilkan peringatan dan meinta kembali ke menu price list
			else {
				setcolor (4); //Memanggil prosedur setcolor dengan parameter 4, 4 mengatur warna teks menjadi merah
				cout << "yang tidak tersedia dalam toko kami" <<endl;
				cout << "TEKAN ENTER UNTUK KEMBALI KE MENU PRICELIST" <<endl;
				getch(); //Menahan sekuensi program atau menunggu input dari user
				
				/*system ("CLS") digunakan untuk membersihkan layar pada program yang akan dijalankan
				sehingga pem-rogram dapat menentukan saat untuk menghapus data yang telah dijalankan
				tanpa harus menutup program tersebut dan membukanya kembali.*/
				system ("CLS"); 
				setcolor (7); //Memanggil prosedur setcolor dengan parameter 7, 7 mengatur warna teks menjadi putih (warna teks semula)
			}
}
	while (order < 1 || order > 4); //Jika kondisi pada while terjadi, maka akan menampilkan ulang do
	
	//Jika kondisi pada while di atas tidak terjadi (false) maka program akan dilanjutkan
	setcolor (3);
	cout << "TEKAN ENTER UNTUK MELANJUTKAN KE MENU PEMBAYARAN" <<endl;
	getch(); //Menahan sekuensi program atau menunggu input dari user
	system ("CLS");
	setcolor (7);
		


			
	do {
		
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"----------------------------- METODE PEMBAYARAN ------------------------"<<endl;
		cout<<"----------------------------  TOKO NETFLIX 24/7  -----------------------"<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"| [1] " << payment[0] << "								|" <<endl;
		cout<<"| [2] " << payment[1] << "								|" <<endl;
		cout<<"| [3] " << payment[2] << "								|" <<endl;
		cout<<"| [4] " << payment[3] << "								|" <<endl;
		cout<<"| [5] " << payment[4] << "								|" <<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		
		
		cout << "Pilih metode pembayaran : "; //Meminta user menginput metode pembayaran sesuai dengan daftar di atas, tersimpan di var metode_payment
		cin >> metode_payment;
		cout << "Anda memilih metode pembayaran ";
		
		switch(metode_payment){
			//Jika user menginput 1, menampilkan payment[0]
			case 1:{
				cout << payment[0] << endl;
				break;
			}
			//Jika user menginput 2, menampilkan payment[1]
			case 2:{
				cout << payment[1] << endl;
				break;
			}
			//Jika user menginput 3, menampilkan payment[2]
			case 3:{
				cout << payment[2] << endl;
				break;
			}
			//Jika user menginput 4, menampilkan payment[3]
			case 4:{
				cout << payment[3] << endl;
				break;
			}
			//Jika user menginput 5, menampilkan payment[4]
			case 5:{
				cout << payment[4] << endl;
				break;
			}
			//Jika user menginput angka yang tidak ada pada daftar
			default:{
				setcolor (04); 
				cout << "yang belum tersedia dalam toko kami \n";
				cout << "Maaf :(" << endl;
				cout << "SILAKAN TEKAN ENTER UNTUK MEMASUKKAN ULANG METODE PEMBAYARAN" <<endl;
				getch();
				system ("CLS");
				setcolor (7);
			}
		}
	}
	while (metode_payment <1 || metode_payment > 5); //jika kondisi while terjadi, maka akan menampilkan ulang do
	
	//Jika kondisi pada while sebelumnya tidak terjadi, maka program berlanjut
	cout << endl;	
	cout << "SILAKAN MELAKUKAN TRANSFER KE NOMOR 081234567890 ";
	cout << "SEBESAR RP. "<< harga[order - 1] << endl << endl;
	
	//Membuat label menukode
	menukode:
	cout << "Masukkan kode bukti pembayaran : "; 
	cin >> kodee; //Input kode bukti pembayaran
	cout << endl;
	
	//Kode bukti pembayaran hanya akan bernilai benar ketika kode itu termasuk dalam anggota array kode
	//Jadi, apabila user menginput kode yang sesuai, maka transaksi berhasil
	if (kodee == kode[0] || kodee == kode[1] || kodee == kode[2]){
		setcolor(03); 
		cout << "SELAMAT! TRANSAKSI ANDA BERHASIL!" << endl;
		cout << "SILAKAN PERIKSA AKUN NETFLIX ANDA" << endl <<endl;
		setcolor(07); 
		
		//Apabila transaksi telah berhasil program akan menawarkan kepada user untuk mencetak bukti pembayaran
		ulang :
		cout << "Apakah Anda ingin mencetak bukti pembayaran ? (Y/N)" << endl;
		cin >> cetakbukti;
		
		//Jika user menginput Y, maka akan menampilkan struk yang tercetak
		if (cetakbukti == "Y" || cetakbukti =="y"){
				goto cetak;
			}
			//Jika user menginput N, maka label cetak terlewati dan program langsung menampilkan label footer
			else if(cetakbukti =="N" || cetakbukti =="n"){
				system ("CLS");
				goto footer;
				
			}
			//Jika user menginput karakter yag tidak sesuai, makan akan kembali ke label ulang
			//Dan menanyakan kembali apakah ingin mencetak struk atau tidak
			else{
				setcolor (04);
				cout << endl;
				cout<<"Inputan Tidak Sesuai!"<<endl;
				setcolor (7); 
				goto ulang;
			}	


}
	//Apabila user menginput kode yang tidak sesuai, akan diminta memasukkan ulang kode dengan kembali ke label  menukode		
	else {
		
		setcolor (04);
		cout << "Kode yang Anda masukkan salah!" << endl;
		cout << "SILAKAN MASUKKAN ULANG" << endl;
		setcolor (7);
		goto menukode;
	}


    //Label cetka untuk mencetak struk pembayaran	
	cetak:
		system ("CLS");
		cout << " -------------------------------------------------------" << endl;
		cout << "|  	       	 STRUK PEMBAYARAN	     	   	|" << endl;
		cout << " -------------------------------------------------------" << endl;
		cout << "\t Waktu Transaksi \t: "	<< waktu <<endl;	//Menampilkan waktu real yang telah disimpan dalam var waktu
		cout << "\t Username \t\t: "	<< username <<endl; 	//Menampilkan username yg telah diinput oleh user
		cout << "\t Nickname \t\t: "	<< name <<endl;			//Menampilkan nama panggilan yang telah diinput oleh user
		cout << "\t Order \t\t\t: Paket Netflix " << paket[order - 1] <<endl;	//Menampilkan orderan user 
		cout << "\t Payment \t\t: " << payment [metode_payment - 1] <<endl;		//Menampilkan metode pembayaran yang telah dipilih user
		cout << "\t Kode pembayaran \t: " << kodee <<endl;						//Menampilkan kode pembayan yang diinput oleh user
		cout << "\t Total \t\t\t: Rp. " << harga[order - 1] <<endl;				//Menampilkan total harga yang telah dibayar user
	
	//Membuat label footer sebagai penutup program
	footer:	
		setcolor(03);
		cout << endl << endl;
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<"------------- TERIMA KASIH TELAH BERBELANJA ---------------"<<endl;
		cout<<"------------------ DI TOKO NETFLIX 24/7 -------------------"<<endl;
		cout<<"------ BER-NETFLIX-LAH SETIAP HARI SUPAYA HARIMU INDAH ----"<<endl;
		cout<<"-----------------------------------------------------------"<<endl;
		setcolor (7);
		
return 0;
	
}


int main(){
	header ();
	program();

return 0;
}
