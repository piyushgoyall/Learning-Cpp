// different salutations using switch

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char button;
//     cin>>button;
//     switch(button)
//     {
//         case 'a':
//             cout<<"Hello"<<endl;
//             break;
//         case 'b':
//             cout<<"Namaste"<<endl;
//             break;
//         case 'c':
//             cout<<"Salut"<<endl;
//             break;
//         case 'd':
//             cout<<"Hola"<<endl;
//             break;
//         case 'e':
//             cout<<"Ciao"<<endl;
//             break;
//         default:
//             cout<<"I am still learning more"<<endl;
//             break;
//     }    
//     return 0;
// }



// simple calculator using switch

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n1,n2;
    cin>>n1>>n2;
    char op;
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Enter a valid operation";
            break;
    }   
    return 0;
}