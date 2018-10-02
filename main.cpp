#include <iostream>

using namespace std;

int main()
{
    // >>>>> ES MAYOR DE EDAD <<<<<<<<

    /*
    cout << "Ingresa tu edad: \n" ;
    int n = 0;
    cin >> n ;
    if (n<100 && n>=18)
        cout << "Tienes " << n << " !!eres mayor de edad !!\n";
    else
        cout << " >>> No eres mayor de edad.\n";
    */

    // >>>>> LOS NUMEROS MENORES A "N"

    /*
    int m = 0;
    cout << "Ingresa el numero : " << endl;
    cin >> m;
    cout << " Los numeros menores son: \n" << (m-1) ;
    for (int n = (m-1); n > 0; n--){
        cout << ", " << n-1;
    }
    cout << endl;
    */
    // >>>> LOS NUMERO IMPARES MENORES A n <<<<
    /*

    int p = 1;
    cout << "Ingresa el numero : " << endl;
    cin >> p;
    cout << " Los numeros impares  menores son: \n" << (p-(p-1))  ;

    for (int n=2 ; n < p; n++){

        if (n%2==1)
            cout << ", " << n;

    */

    /* Implemente un programa que solicite dos numeros y evalue:
    a) Si el primer y el segundo numero son multiplos de 2.
    b) Si el primer numero es multiplo del segundo.
    c) Si el primer elevado al cuadrado tiene como resultado el segundo.
    */
    /*
    int a,b;

    cout << " Ingrese dos numeros para evaluar: " << endl;
    cin >> a  >> b;
    if (a%2 ==0)
        if (b%2==0)
            cout << a << " y " << b << " son multiplos de 2 ." << endl;

    if (a%b)
        cout << a << " no es multiplo de "  << b << endl;
    else
        cout << a << " es multiplo de " << b <<endl;

    if (a*a == b )
        cout << a <<"  al cuadrado es " << b << endl;

    */
    /* Implemente un programa que solicite un numero y evalue si dicho numero es
       primo.*/
    /*
    int s=0, div=2,c=0;
    cout << " Ingrese el numero: " << endl;
    cin >> s;
    while (div<s){
        if (s%div==0){
            c=c+1;
            if (div*div == s)
                c=c+2;
            }
        div =div +1;}

    if (c<=2)
        cout << " >> es primo << " << endl;
    else
        cout << " >> no es primo << " << endl;*/

    cout << endl;

    /* Implemente un programa que solicite un numero n e imprima todos los numero
        primos menores a n. */

    /*
    int v=0,c=0;
    cout << " Ingrese el numero mayor:" <<endl;
    cin >> v;
    for (int n=1; n<=v; n++){
        for (int i=1; i<=n;i++){
            if(n%i==0)
                c++;
        }
        if (c==2){
            cout << n<<"\t";
            c=0;}
        else
            c=0;

    }

    */
    cout << endl;


    /* Implemente un programa que solicite un numero de cinco digitos e imprima
        los digitos separados por un caracter de tabulacion.

    */
    int num,a,b=10000,c;
    cout<<"Ingrese el numero de 5 cifras"<<endl;
    cin>> num;
    a=0;
    for(int i=0;i<5;i++){
        a=num/b;
        num=num-a*b;
        cout<< a <<"\t";
        b/=10;
    }



    /*  Implemente un programa que solicite un numero de cinco digitos e indique si
        se trata de un palindrome. Tome en cuenta que un palindrome cuando se lee de derecha a
        izquierda es lo mismo que leerlo de izquierda a derecha, 12321 es un palindrome y 12345 no
        es un palindrome.
    */
    /*
    int num, x, a1, y, b1, z, c1, d, d1, e;
    cout<<"Ingrese el numero de 5 cifras"<<endl;
    cin>> num;
    x=num/10000;
    a1=num%10000;
    y=num%10;
    if(x=!y)
    cout<<"No palindrome"<<endl;
    else{
        z=a1/1000;
        c1=a1%1000;
        d=c1/100;
        d1=c1%100;
        e=d1/10;
        if (z==e)
        cout<<"Si es palindrome"<<endl;
        else
        cout<<"No es palindrome"<<endl;}
        */

    /*
    char num;
    char letrA[];
    cout<< " Ingrese el numero: "<< endl;
    cin>> num;
    letrA=

*/
    /*  Implemente un programa que evalue si un a~no es bisiesto.
    */
    /*
       int year;
       cout << " Ingresa la fecha(year): \n" ;cin>> year;
       if (year%4!= 0 ||(year%100==0 && year%400!=0))
            cout << " No es bisiesto "<< endl;
       else
        cout << " Es bisiesto " << endl;
        */

    /* Implemente un programa que solicite un numero n e imprima los n numeros
        de la serie fibonacci (No use la forma recursiva). Tenga en cuenta que f(0) = 1 y f(1) = 1.
    */
/*
    int n=0,a=0,b=1,c=1;
    cout  << " Ingrese la cantidad: " << endl;
    cin >> n;
    cout << c;
    for(int i=1;i<n;i++){
        c = a + b;
        cout <<  " " << c ;
        a=b;
        b=c;

    }
    */

    /* Implemente un programa que solicite un numero n e imprima el valor
        factorial de dicho numero.
    */

/*
    int n=0,f=1;
    cout << " Ingrese el numero: "<<endl;
    cin >> n;
    for (int i=1;i=<n;i++)
        f=f*i;

    cout << " El " << n << "!"<<" es: " << f<<endl;
*/

    /*  Implemente un programa que solicite un numero n e imprima los n
        numeros perfectos.
    */
      /*
    int cp=0;
    cout << " Cantidad de numeros perfectos: " << endl;
    cin >>  cp;

    int c=0,i=6;
    cout << i;
    while (c<cp-1){
        int d=0;
        i=i+1;
        for (int x=1;x<i-1;x++){
            if (i%x==0)
                d=d+x;
        }
        if(d==i){
            c=c+1;
            cout <<" "<< i6;}
    }

*/




    return 0;
}
