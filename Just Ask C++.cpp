//Tanyakan Saja Pada C++
//Randomizer sederhana penggacha handal

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    
	srand((unsigned) time(NULL));
    int random = rand();
    int jml_opsi;
    int opsi;
    string opsi1, opsi2, opsi3, opsi4, opsi5, opsi6, opsi7, opsi8, opsi9, opsi10;
    cout<<"Kalian tidak bisa mengerjakan quiz\ntapi bingung mau gacha yang mana?\nkalian di hari libur\ntapi bingung mau ngapain?\n\n\nTanyakan saja pada C++\n\n\n";
    cout<< "~~~~~~~~~~~~~~~~~~~~\n"<<"~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"Jumlah opsi (maks 10)";
    cin>>jml_opsi;
    cout<< "~~~~~~~~~~~~~~~~~~~~\n"<<"~~~~~~~~~~~~~~~~~~~~\n";
      
    switch(jml_opsi){
        case 2:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        
        opsi = random%jml_opsi;
        
        cout<<"\n\nC++ MEMUTUSKAN!!!\n";
        
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;}
        break;
        
        
        case 3:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;}
        break;
        
        case 4:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;}
        break;
          
        case 5:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;}
        
        break;
        
         case 6:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        cout<<"\nOpsi 6: "; cin>>opsi6;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;
            case 5:
            cout<<opsi6; break;
        }
        
        break;
        
        case 7:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        cout<<"\nOpsi 6: "; cin>>opsi6;
        cout<<"\nopsi 7: "; cin>>opsi7;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;
            case 5:
            cout<<opsi6; break;
            case 6:
            cout<<opsi7; break;
        }
        
        break;
        
        case 8:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        cout<<"\nOpsi 6: "; cin>>opsi6;
        cout<<"\nOpsi 7: "; cin>>opsi7;
        cout<<"\nOpsi 8: "; cin>>opsi8;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;
            case 5:
            cout<<opsi6; break;
            case 6:
            cout<<opsi7; break;
            case 7:
            cout<<opsi8; break;
        }
        
        break;
        
        case 9:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        cout<<"\nOpsi 6: "; cin>>opsi6;
        cout<<"\nOpsi 7: "; cin>>opsi7;
        cout<<"\nOpsi 8: "; cin>>opsi8;
        cout<<"\nOpsi 9: "; cin>>opsi9;
        
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;
            case 5:
            cout<<opsi6; break;
            case 6:
            cout<<opsi7; break;
            case 7:
            cout<<opsi8; break;
            case 8:
            cout<<opsi9; break;
        }
        
        break;
        
         case 10:
        cout<<"Opsi 1: "; cin>>opsi1;
        cout<<"\nOpsi 2: "; cin>>opsi2;
        cout<<"\nOpsi 3: "; cin>>opsi3;
        cout<<"\nOpsi 4: "; cin>>opsi4;
        cout<<"\nOpsi 5: "; cin>>opsi5;
        cout<<"\nOpsi 6: "; cin>>opsi6;
        cout<<"\nOpsi 7: "; cin>>opsi7;
        cout<<"\nOpsi 8: "; cin>>opsi8;
        cout<<"\nOpsi 9: "; cin>>opsi9;
        cout<<"\nOpsi 10: "; cin>>opsi10;
        opsi = random%jml_opsi;
        
         cout<<"================="<<"\n\nC++ MEMUTUSKAN!!!\n";
         
        switch(opsi){
            case 0:
            cout<<opsi1; break;
            case 1:
            cout<<opsi2; break;
            case 2:
            cout<<opsi3; break;
            case 3:
            cout<<opsi4; break;
            case 4:
            cout<<opsi5; break;
            case 5:
            cout<<opsi6; break;
            case 6:
            cout<<opsi7; break;
            case 7:
            cout<<opsi8; break;
            case 8:
            cout<<opsi9; break;
            case 9:
            cout<<opsi10; break;
        }
        
        break;
        
        
            
        }
        

	return 0;}
	
	//kayaknya ada metode yang lebih singkat dan efektif si.....
	//tapi saya masih maba yang tidak tau apa apa :)
