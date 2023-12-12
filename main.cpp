#include <iostream>
using namespace std;
int main()
{

                int kode, kode2, pri, tot, byr, kbl, pri2;
                char ulang;
                do
                {
                                cout<<endl;
                                cout<<endl;
                                cout<<"            RUMAH MAKAN DESTIO WAHYU       "<<endl;
                                cout<<"              Nyaman, Bersih, Lezat        "<<endl;
                                cout<<"         Dimasak oleh chef professional    "<<endl;
                                cout<<"                Jl. ni saja dulu           "<<endl;
                                cout<<endl;
                                cout<<"================================================"<<endl;
                                cout<<"                  Daftar Menu                   "<<endl;
                                cout<<"================================================"<<endl;



                                string makanan[5] = {   "Bakso \t",
                                                        "Soto \t",
                                                        "Mie Ayam \t",
                                                        "Pecel \t",
                                                        "Sate \t"};

                                string harga[5] = { "15000","8000","11000","8000","20000" };

                                for(int i = 0; i < 5; i++) {
                                    cout << "\t" <<i+1 << ". " << makanan[i] << "Harga : Rp "<< harga[i]<< "\n";
                                }
                                cout<<"================================================"<<endl;





                                string minuman[5] = {   "Kopi Item \t Harga : Rp. 5.000",
                                                        "Teh \t\t Harga : Rp. 3.500",
                                                        "Soju \t Harga : Rp. 50.000",
                                                        "Bir Pletok \t Harga : Rp. 10.000",
                                                        "Air Mineral \t Harga : Rp. 2.500"};
                                for(int i = 0; i < 5; i++) {
                                    cout << "\t" <<i+1 << ". " << minuman[i] << "\n";
                                }
                                cout<<"================================================"<<endl;



                                cout<<endl;
                                cout<< "----------------------------------------------------------"<<endl;
                                cout<< "Input angka 0 jika anda tidak memesan makanan atau minuman"<<endl;
                                cout<< "----------------------------------------------------------"<<endl;
                                cout<<""<<endl;


                                cout<<"Masukan Pilihan Makanan Anda : ";
                                cin>>kode;
                                /*Switch untuk Makanan*/
                                switch (kode)
                                {
                                case 1:
                                cout<<"Bakso"<<endl<<endl;
                                pri=15000;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;


                                case 2:
                                cout<<"Soto"<<endl<<endl;
                                pri=8000;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;

                                case 3:
                                cout<<"Mie Ayam"<<endl<<endl;
                                pri=11000;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;


                                case 4:
                                cout<<"Pecel"<<endl<<endl;
                                pri=8000;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;


                                case 5:
                                cout<<"Sate"<<endl<<endl;
                                pri=20000;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;


                                case 0:
                                cout<<"Anda tidak memesan makanan"<<endl<<endl;
                                pri=0;
                                cout<<"Masukkan Pilihan Minuman Anda : ";
                                cin>>kode2 ;
                                break;
                                }

                                switch (kode2)
                                /*Switch untuk Minuman*/
                                {
                                case 1:
                                cout<<"Kopi Item"<<endl<<endl;
                                pri2=5000;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                case 2:
                                cout<<"Teh"<<endl<<endl;
                                pri2=3500;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                case 3:
                                cout<<"Soju"<<endl<<endl;
                                pri2=50000;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                case 4:
                                cout<<"Bir Pletok"<<endl<<endl;
                                pri2=10000;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                case 5:
                                cout<<"Air Mineral"<<endl<<endl;
                                pri2=2500;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                case 0:
                                cout<<"Anda Tidak Memesan Minuman"<<endl<<endl;
                                pri2=0;
                                tot=pri+pri2;
                                cout<<"Total Bayar           : Rp "<<tot<<endl;
                                cout<<"Dibayar               : Rp ";
                                cin>>byr;
                                kbl=byr-tot;
                                cout<<"Kembalian             : Rp "<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain (y/t) : ";
                                cin>>ulang;
                                break;

                                default:
                                cout<<"                                       "<<endl;
                                cout<<"Kode Yang Anda Masukan Tidak Tersedia, ";
                                cout<<"Ingin Mengulangi Pesanan Dari Awal? (y/t) ";
                                cin>>ulang;
                                cout<<"                                       "<<endl;break;
                                }
                }
                while (ulang/='y');
                cout<<" "<<endl;
                cout<<"TERIMAKASIH ATAS KUNJUNGAN ANDA DI RESTAURANT DESTIO WAHYU";
                cout<<" "<<endl;
                cout<<" "<<endl;
                return 0;
}
