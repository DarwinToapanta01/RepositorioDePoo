
using namespace std;

int main()
{

    float a,  b, c, a1, b1, c1,a3, x1, x2, r1, r;
    const int d=8;
    int a2=4;
    const double PI=3.1415;
    cout << "Ingrese el valor de a,b y c para la funcion cuadratica" << endl;
    cout << "Ingrese el valor de a" << endl;
    cin>> a;
    cout << "Ingrese el valor de b" << endl;
    cin>> b;
    cout << "Ingrese el valor de c" << endl;
    cin>> c;
    cout<<"Ingrese los valores para usar la ecuacion con incremento"<<endl;
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cout<< "Ingrese el valor para calcular el radio"<<endl;
    cin>>a3;
    r=a3/(2*PI);
    r1=((b)+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    x1=(a1++-b1)*(a1-c1);
    x2=(++a2-b1)*(a1-c1);

    cout<<"El resultado de x1=(a1++-b1)*(a1-c1) es:"<<x1<<endl;
    cout<<"El resultado de x2=(++a2-b1)*(a1-c1) es:"<<x2<<endl;
        if (x1>x2){
        cout <<"El resultado de x1 es mayor que x2"<<endl;
    }
    else {
        cout <<"x2 es mayor que x1"<<endl;
    }

cout<<"////////////////////////////////////////////////////////////"<<endl;
    cout<<"El resultado del radio es:"<<r<<endl;
    cout<<"////////////////////////////////////////////////////////////"<<endl;
    cout<<"El resultado de r1=((b)+(sqrt((pow(b,2))-(4*a*c))))/(2*a) es:"<<r1<<endl;
    return 0;
}
