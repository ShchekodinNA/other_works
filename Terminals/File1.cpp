#pragma hdrstop
//#pragma package(smart_init)

#include <iostream>

#include <conio.h>
//#include <cstdio>
//#include <cstdlib>
#include <windows.h>
//#include "mylb.h"
#include "Unit1.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
/*int errs;
//double** mtz;
t2daMatr kkd,copymtx;
string FNAME="D:\\o.txt";
//Infmt infmt;
//returntobs( &infmt);
 errs=zagrmtEMB(kkd,FNAME);

 //cout<<kkd.get_length()<<"                                      "<<kkd[1].get_length()<<endl<<endl;
 cout<<vremString(kkd);
 copymtx= CopyMTXEMB(kkd);
 bool hg;
 int pfobr[2];
 pfobr[0]=2;pfobr[1]=3;
 obrEMB(kkd, pfobr[0], pfobr[1]) ;
 cout<<endl<<endl<<vremString(kkd)<<endl<<endl<<vremString(copymtx);
																 */
// cout << matr_out(mtz, &infmt)<<endl<<endl<<endl;
 //bool s=true;


//cout<<infmt.strk<<endl<<infmt.stlb<<endl<<endl;*/
/*kkd.Length = 5;
for(int i=0;i<kkd.get_length();i++)
{
	kkd[i].Length = 5;
}
double j=221;
 kkd[4][4]= j;
 cout<<kkd[4][4];

 kkd.Length= infmt.strk;
for(int i=0;i<infmt.strk;i++)
{kkd[i].Length=infmt.stlb-1;
for(int j=0;
}
cout<<endl<<endl<<"ssd: "<<kkd.get_length()<<endl<<kkd[1].get_length();
*/

/**/

	Infmt  infmt;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int err_t, pfobr[2];
	t2daMatr mtx,copymtx;
	cout << "x������ � ��������" << endl << "������� �������� ����� �� ����� D, ����� ����� ������� �������:" << endl;
	string FNAME;
	do
	{   String z;
		cin >> FNAME;
		FNAME = "D:\\" + FNAME + ".txt";

		err_t = zagrmtEMB(mtx, FNAME,infmt);
		switch (err_t)
		{
		case openf_fail: cout << "��� ����� �������� �� �����!" << endl; break;

		case nof_mt: cout << "���� ������!" << endl; break;

		case nonprem_mt:cout << infmt.strk << "-� ������ - �������� ��������������� �������!" << endl; break;

		case uncor_elem: cout << "������ � " << infmt.strk << "-� ������," << infmt.stlb << "-� ������� - �������: \"" << infmt.k << "\"!" << endl;break;

		case nonsq: cout << "���� ������ ��������, ������ ��� ���������� ������� ����� ���������� �������, � �� �������������!" << endl;break;

		case no_alloc: cout << "��������� ������ ��������� ������!" << endl;break;			//(1)

		}

		if (err_t == no_err) {
			cout << "������� ������� ��� ������" << endl;
			break;
		}
		cout << "������� ��� ����� ������:" << endl;
	} while (true);
	cout<<vremString(mtx);

	cout << "z������� �� ����� ������ � ������� ����� ���������� ������������:" << endl << "������:  ";
	while(true)
	{   if((cin>>pfobr[0]) || cin.get() == '\n')
		{
			if(pfobr[0]>0 &&pfobr[0]<=mtx.get_length()) break;
		}
		cout<<"������!! ������� �������� �������� ��� ���� int \n";
		cin.clear(); // ���������� ��� ���� ������, ������ ����� ���������� "�������"
		cin.sync();//������ ������ �� �������
		cout<<"��������� ����: ";
	}
	cout << endl << "�������: ";
	while(true)
	{   if((cin>>pfobr[1]) || cin.get() == '\n')
		{
			if(pfobr[1]>0 &&pfobr[1]<=mtx.get_length()) break;
		}
		cout<<"������!! ������� �������� �������� ��� ���� int \n";
		cin.clear(); // ���������� ��� ���� ������, ������ ����� ���������� "�������"
		cin.sync();//������ ������ �� �������
		cout<<"��������� ����: ";
	}
	//cout<<pfobr[0]<<"  "<<pfobr[1]<<endl;
	if(obrEMB(mtx,pfobr[0],pfobr[1]))
{
	cout<<"������������ �������: "<<endl<<vremString(mtx)<<endl;
}
else cout<<"������ ��������� �������!"<<endl;




cout<<"����� ������ ���������"<<endl;
	mtx.Length=0;
	copymtx.Length = 0;

/*	if (vivodmt(matr, &infmt) == false)
	{
		cout << "������ ��� ������� ������ �������" << endl;
	}

	cout << "������� �� ����� ������ � ������� ����� ���������� ������������:" << endl << "������:  ";
	//pfobr[0] = provr(infmt.strk);		//��� ������� ��������
	while (true)						//��� ������������� ��������
	{
		cin >> FNAME;
		pfobr[0] = provr(infmt.strk, FNAME);
		if (pfobr[0] > infmt.strk || pfobr[0] < 1) cout << "������ ������� �����������, ���������� ��������� ����: " << endl;
		else break;
	}
	cout << endl << "�������: ";
	//pfobr[1] = provr(infmt.strk);		//��� ������� ��������
	while (true)						//��� ������������� ��������
	{
		cin >> FNAME;
		pfobr[1] = provr(infmt.strk, FNAME);
		if (pfobr[1] > infmt.strk || pfobr[1] < 1) cout << "������ ������� �����������, ���������� ��������� ����: " << endl;
		else break;
	}
	mt_ish = matr_ishalloc(matr, &infmt);
	if (mt_ish == NULL) cout << "������ ����������� �������" << endl;
	//if (mt_ish == NULL) cout << "������ � ������ ������� ����������, �.�. ���� ������ � � ���������. ��������� ���������� ������" << endl;		//(1)
	Matr_obr(matr, infmt.strk, pfobr[0], pfobr[1]);
	cout << "���������:" << endl;
	cout << matr_out(matr, &infmt);      //6-� ����� � ������� � ��� 4
	cout << endl << "����� ������ ���������" << endl;
	//cout << matr_out(mt_ish, &infmt);  //��� �������� ����, ��� �������� ����� �������
	if (freemem(matr, infmt.strk) == false)
	{
		cout << "�� �������� ���� ��������� ��� ������ �������!" << endl;
	}
	freemem(mt_ish, infmt.strk);
    */
	_getch();
	return 0;
}

