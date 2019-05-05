#include <iostream>

using namespace::std;

string nama,member,cari,nb,ulang;
string no[5]={"A001","A002","A003","A007","A008"};
string nm[5]={"bayu","irvan","susiati","diana","roni"};
int ketemu,a[20],temp,jum,harga,jumlah,tot1,diskon,jumlahbrng,tot;

void data()
{
    cout<<"\nApakah anda member?(y/t) = ";
    cin>>member;
    if (member=="y"||member=="Y")
    {
       cout<<"Selamat anda mendapat diskon 5%\n";
       cout<<"\nNomor idenditas anda = ";
       cin>>cari;
       for (int i=0;i<5;i++)
       {
           if (cari==no[i])
            nama=nm[i];
       }
       cout<<"Anda member\n";
       cout<<"\nNo Identitas = "<<cari;
       cout<<"\nNama = "<<nama;
    }
    if (member=="t"||member=="T")
    {
        cout<<"\nAnda Bukan Member, Tidak Mendapat Diskon";
        cout<<"\nNama Anda = ";
        cin>>nama;
    }
}

void barang()
{
    cout<<"\nMasukkan Jumlah Barang Yang Ingin Anda Beli = ";
    cin>>jum;
    for (int q=0;q<jum;q++)
    {
        cout<<"\nBarang ke - "<<q+1;
        cout<<"\nNama Barang    = ";
        cin>>nb;
        cout<<"\nHarga Satuannya Adalah = ";
        cin>>harga;
        cout<<"\nJumlah Barang  = ";
        cin>>jumlahbrng;
        jumlah=harga*jumlahbrng;
        tot1=tot1+jumlah;
    }
}

void output()
{
    cout<<"\n===OUTPUT===\n";
    cout<<"\nTOTAL          = Rp. "<<tot1;
    diskon=tot1*0.05;
    tot=tot1-diskon;
    cout<<"\nDISKON MEMBER  = Rp. "<<diskon;
    cout<<"\nTOTAL BAYAR    =Rp. "<<tot<<endl;
}

void pembatas()
{
    cout<<"\n=========================================================\n";
}

main ()
{
    cout<<"===PROGRAM KASIR===\n";
do{ data();
    pembatas();
    barang();
    output();
    cout<<"\nApakah Ingin Mengulang Program(y/t)?";
    cin>>ulang;
}
while(ulang=="y"||ulang=="Y");
}
