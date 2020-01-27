//JUAN ANTONIO GARDE JIMÉNEZ
#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int fibo(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    int num = 40;
    auto start = high_resolution_clock::now();
    cout<<"\nLa serie es: \n\n\t";

    for(int i=0; i<num; i++)
    {
        if(fibo(i) != 0)
            cout<< ", ";

        cout<< fibo(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTiempo "<< duration.count()<< " microseconds" << endl;
    return 0;
}

/*#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
// function to find factorial of given number
int fibonacci(int num)
{
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}


int main()
{
    long num = 40;
    auto start = high_resolution_clock::now();
    cout << "\nThe fibonacci series : " ;
    fibonacci(num);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo: "
         << duration.count()<< " microseconds" << endl;
    return 0;
}*/
//Checked
