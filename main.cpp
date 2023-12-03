#include <iostream>
#include <math.h>
using namespace std;

void sort(int a[], int n);

int main() {

    int t;
    cin >> t;


    while(t--){
        int n;cin >> n;int a[n];int b[n];

        for(int i = 0; i < n; i++)cin >> a[i];

        //while(a[0] > a[1])a[0]--;

        for(int m = 0; (1<<m) - 1 <= n; m++){

            while((a[(1 << m)-1] > a[(1<<m) ] ) && ((1 << m) - 1 < n)){
                for(int j = 0; j < (1 << m) ; j++)
                    a[j]--;
            }

        }
         /*for(int i = 0; i < n; i++)cout << a[i]<< " ";
         cout<<endl;*/
       for (int i = 0; i < n; i++)b[i] = a[i];
       sort(a, n);

//        for(int i = 0; i < n; i++)cout << a[i]<< " ";
//         cout<<endl;
//        for(int i = 0; i < n; i++)cout << b[i]<< " ";
//        cout<<endl;
        int flag = 1;
        for(int i = 0; i < n; i++ ){
            if(a[i] != b[i]){
                //cout<<"NO"<<endl;
                flag = 0;
                break;
            }
        }

        if(flag == 1)cout <<  "YES" << endl;
        else cout << "NO\n";
    }

    return 0;
}

void sort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

