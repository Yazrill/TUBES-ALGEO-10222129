#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string ulang,operasi;
	
	do{
	cout<<"1. Operasi Penjumlahan dan Pengruangan Matrix \t(ketik 1)"<<'\n';
	cout<<"2. Operasi Matrix Transpose\t\t\t(ketik 2)"<<'\n';
	cout<<"3. Operasi Matrix Balikan (Invers)\t\t(ketik 3)"<<'\n';
	cout<<"4. Operasi Determinant Matrix\t\t\t(ketik 4)"<<'\n';
	cout<<"5. Operasi Siste Persamaan Linear Matrix\t(ketik 5)"<<'\n';
	cout<<'\n'<<"   Pilih Operasi Hitung Matrix = ";
	cin>>operasi;
	
	if(operasi == "1")
	{
		//Operasi Hitung Penjumlahan dan Pengurangan Matriks
		int b,k;
		double op;
		
		cout<<'\n'<<"Operasi Hitung Penjumlahan dan Pengurangan Matriks"<<'\n'<<'\n';
		cout<<"masukan baris = ";
		cin>>b;
		cout<<"masukan kolom = ";
		cin>>k;
		int m1[b][k],m2[b][k];
		cout<<"matriks 1 = "<<endl;
		for (int i=1;i<=k;i++)
		{
			for (int j=1;j<=b;j++)
			{
				cout<<"input nilai = ["<< i <<"] ["<< j <<"] =";
				cin>>m1[i][j];
			}
		}
			cout<<"tampilkan matrix ="<<'\n'<<'\n';
			for (int i=1;i<=k;i++)
			{
				for(int j=1;j<=b;j++)
				{
					cout<< m1[i][j]<<"\t";
				}
				cout<<'\n';
			}
		cout<<'\n';
		cout<<"Matriks 2 = "<<endl;
		for (int i=1;i<=k;i++)
		{
			for (int j=1;j<=b;j++)
			{
				cout<<"Input nilai = ["<< i <<"] ["<< j <<"] =";
				cin>>m2[i][j];
			}
		}
			cout<<"tampilkan matrix ="<<'\n'<<'\n';
			for (int i=1;i<=k;i++)
			{
				for(int j=1;j<=b;j++)
				{
					cout<< m2[i][j]<<"\t";
				}
				cout<<'\n';
			}
		cout<<'\n'<<'\n';
		cout<<"Pilih perhitungan"<<'\n';
		cout<<"Penjumlahan = ketik (1)"<<'\n';
		cout<<"Pengurangan = ketik (2)"<<'\n';
		cout<<"Masukan nilai perhitungan = ";
		cin>>op;
		cout<<'\n';
		if (op == 1)
		{
		cout<<"menampilkan penjumlahan matriks = "<<'\n'<<'\n';
			for (int i=1;i<=k;i++)
			{
				for(int j=1;j<=b;j++)
				{
					cout<< m1[i][j] + m2[i][j]<<"\t";
				}
				cout<<'\n';
			}
		}
		else if (op == 2)
		{
			cout<<"menampilkan pengurangan matriks = "<<'\n'<<'\n';
			for (int i=1;i<=k;i++)
			{
				for (int j=1;j<=b;j++)
				{
					cout<< m1[i][j] - m2[i][j]<<"\t";
				}
				cout<<'\n';
			}
		}
		
	}
	else if(operasi == "2")
	{
		//Operasi Hitung Matrix Transpose
		int b,k;
		
		cout<<'\n'<<"Operasi Hitung Matrix Transpose"<<'\n'<<'\n';
		cout<<"masukan baris = ";
		cin>>b;
		cout<<"Masukan Kolom = ";
		cin>>k;
		int m[b][k];
		for (int i=1;i<=k;i++)
			{
			for(int j=1;j<=b;j++)
				{
			 		cout<<"Input nilai = ["<< i <<"] ["<< j <<"] =";
			 		cin>>m[i][j];
				}
			}
		cout<<"tampilkan matrix ="<<'\n'<<'\n';
		for (int i=1;i<=k;i++)
			{
			for(int j=1;j<=b;j++)
				{
					cout<<m[i][j]<<"\t";
				}
				cout<<'\n';
			}
		cout<<"tampilkan matrix transpose ="<<'\n'<<'\n';
		for (int i=1;i<=b;i++)
			{
			for(int j=1;j<=k;j++)
				{
					cout<<m[j][i]<<"\t";
				}
				cout<<'\n';
			}
	
	}
	else if (operasi == "3")
	{
		//Operasi Hitung Matrix Balikan (Invers)
		double det;
		const int el = 2;
		
		cout<<'\n'<<"Operasi Hitung Matrix Balikan (Invers)"<<'\n'<<'\n';
		int M[el][el];
		for (int i=1;i<=el;i++)
			{
			for(int j=1;j<=el;j++)
				{
				 cout<<"Masukan elemen-elemen matrix = ["<< i <<"] ["<< j <<"] =";
				 cin>>M[i][j];
				}
			}
		cout<<'\n';
		
		cout<<"tampilkan matrix ="<<'\n'<<'\n';
		for (int i=1;i<=el;i++)
			{
			for(int j=1;j<=el;j++)
				{
					cout<<M[i][j]<<"\t";
				}
			cout<<'\n';
			}
		'\n';
			
		det=(M[1][1]*M[2][2]-M[1][2]*M[2][1]);
		cout<<'\n';
		cout<<'\n'<<"nilai determinan = "<<det<<'\n'<<'\n';
		
		double M2[el][el];
		M2[2][2] = M[1][1];
		M2[1][1] = M[2][2];
		M2[1][2] = M[1][2]*-1;
		M2[2][1] = M[1][2]*-1;
		
		cout<<"tampilkan matrix Adj="<<'\n'<<'\n';
		for (int i=1;i<=el;i++)
			{
			for(int j=1;j<=el;j++)
				{
				cout<<M2[i][j]<<"\t";
				}
			cout<<'\n';
			}
		cout<<'\n';
		
		cout<<"Matrix invers = "<<'\n'<<'\n';
		for (int i=1;i<=el;i++)
		{
		 	for (int j=1;j<=el;j++)
		 	{
		 		cout<<M2[i][j]/det<<"\t";
			}
		cout<<'\n';
		}
			
	}
	else if (operasi == "4")
	{
		//Operasi Hitung Determinant Matrix
		int el;
		double det;
		const int nilai = 3;
		
		cout<<'\n'<<"Operasi Hitung Determinant Matrix"<<'\n';
		while(1){
		cout<<"masukan jumlah elemen matrix (max"<<nilai<<") = ";
		cin>>el;
			if (el <= nilai){
				break;
			}cout<<"nilai melebihi batas, masukan kembali"<<'\n';
		}cout<<'\n';
		
		int M[el][el];
			for (int i=1;i<=el;i++)
			{
				for(int j=1;j<=el;j++)
				{	
				 cout<<"Masukan elemen-elemen matrix = ["<< i <<"] ["<< j <<"] =";
				 cin>>M[i][j];
				}
			}
		
			//fungsi cetak matrixnilai 
			cout<<"tampilkan matrix ="<<'\n'<<'\n';
			for (int i=1;i<=el;i++)
			{
				for(int j=1;j<=el;j++)
				{
						cout<<M[i][j]<<"\t";
				}
				cout<<'\n';
			}
				
			if(M[el][el] = M[2][2]){
				det=(M[1][1]*M[2][2]-M[1][2]*M[2][1]);
				cout<<'\n';
			}else if(M[el][el] = M [3][3]){
				det=(M[1][1]*M[2][2]*M[3][3]
					+M[1][2]*M[2][3]*M[3][1]
					+M[1][3]*M[2][1]*M[3][2]
					-M[1][3]*M[2][2]*M[3][1]
					-M[1][1]*M[2][3]*M[3][2]
					-M[1][2]*M[2][1]*M[3][3]);
			}
		cout<<'\n'<<"nilai determinan = "<<det<<'\n'<<'\n';
		
	}
	else if (operasi == "5")
	{
		//Operasi Hitung Sistem Persamaan Linear Matrix
		int i,j,k;
		const int n = 2 ;
		double d, x[n];
		double M[n][n+1];
	
		cout<<'\n'<<"Operasi Hitung Sistem Persamaan Linear Matrix"<<'\n'<<'\n';
		cout<<"Masukan persamaan Linear"<<'\n','\n';
		for (i=0;i<n;i++)
		{
			for (j=0;j<n+1;j++)
				if (j<n)
				{
					cout<<"persamaan linear ke-"<<i+1<<"variabel ke-"<<j+1<<" = ";
					cin>>M[i][j];
				}else{
					cout<<"Masukan Hasil = ";
					cin>>M[i][j];
					'\n';
				}
		}
		for (i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				d =M[j][i]/M[i][i];
				for (k=i+1;k<=n;k++)
					M[j][k]-=d*M[i][k];
					M[k][i]=0;	
			}	
		}
		for(i=n-1;i>=0;i--)
		{
			x[i]=M[i][n];
			for (j=i+1;j<n;j++)
				x[i]-=M[i][j]*x[j];
				x[i]/=M[i][i];
		}
		'\n';
		cout<<"solusi persamaan linear adalah = "<<'\n';
		for (i=0;i<n;i++)
		cout<<"x"<<i+1<<" = "<<x[i]<<'\n';
		
	}
	cout<<"mau mengulang program??? ketik (yes/no) = ";
	cout<<'\n'<<'\n';
	cin>>ulang;			
	}while(ulang == "yes");
	
	cout<<'\n'<<"Selesai"<<'\n'<<'\n';
	cout<<"Terima kasih sudah mengerjakan dengan baik"<<'\n'<<'\n';
	return 0;
}
