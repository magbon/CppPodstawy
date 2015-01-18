#include <iostream>
int main()
{
    double * pn; // moze wskazywac wartosci double
    double * pa; // tak samo pa
    char * pc; // pc mo¿e wskazywaæ wartoœci char
    double bubble = 3.2;
    pn = &bubble; //przypisanie pn adresu bubble
    pc = new char; // przypisanie pc adresu nowo zaalokowanego obszaru w pamieci
    pa = new double[30]; //przypisanie pa adresu tablicy 30 wartoœci double

        int tacos [ 10 ] = { 5 , 2 , 8 , 4 , 1 , 2 , 2 , 4 , 6 , 8 } ;
int * pt = tacos ; // za³ó¿my, ¿e pt i tacos maj¹ adres 3000
pt = pt + 1; // teraz pt ma adres 3004, o ile typ int ma 4 bajty
int *pe = &tacos[ 9 ] ; //pe to 3036, o ile typ int ma 4 bajty
pe = pe - 1; // teraz pe ma wartoœæ 3032, co jest adresem tacos[8]
int diff = pe - pt ; //diff jest równe 7, co jest odleg³oœci¹ miêdzy
// tacos[8] a tacos[ 1]

int * pl = new int [10];  // pt wskazuje blok 10 liczb int
*pl = 5; // ustawienie elementu zerowego na 5
pl[0] = 6; // zmiana wartoœci elementu zerowego na 6
pl[9] = 44; // ustawienie dziesi¹tego elementu (numer 9) na 44
int coats [ 10];
*(coats + 4) = 12; // ustawienie coats[4] na 12

    using namespace std;
    double wages[3] = {100000.0,200000.0,300000.0};
    short stacks[3] = {3,2,1};

    // to to samo
    double *p_w = wages;
    short *p_s = &stacks[0];

    cout << "p_w = " << p_w << ", *p_w = " << *p_w << ", *p_w + 1 = " << (p_w + 1) << endl;
    p_w = p_w + 1;
    cout << "dodaj do wskaznika p_w 1: \n";
    cout << "p_w = " << p_w << ", *p_w = " << *p_w << endl;

    cout << "p_s = " << p_s << ", *p_s = " << *p_s << endl;
    p_s = p_s + 1;
    cout << "dodaj do wskaznika p_s 1:\n";
    cout << "p_s = " << p_s << ", *p_s = " << *p_s << "\n\n";

    cout << "dostep do dwoch elementow, zapis tablicowy\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "dostep do dwoch elementow, zapis wskaznikowy\n";
    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = wielkosc tablicy wages\n";
    // w bajtach nom ^^
    cout << sizeof(p_w) << " = wielkosc wskaznika p_w\n";



   return 0;

}
