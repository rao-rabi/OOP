// #include<iostream>
// using namespace std;

// class Simple{
//     public:
//     int a;
//     int b;
//     Simple(){
//         a = b =0;
//     };
//     void add();
//     void sub();
//     void mul();
//     void div();
//     void input(){
//         cout<<"Enter a: ";
//         cin>>a;
//         cout<<"Enter b: ";
//         cin>>b;
//     }
// };

// void Simple::add(){
//     cout<<"a + b = "<<a + b<<endl;
// }

// void Simple::sub(){
//     cout<<"a - b = "<<a - b<<endl;
// }

// void Simple::mul(){
//     cout<<"a x b = "<<a * b<<endl;
// }

// void Simple::div(){
//     cout<<"a / b = "<<a / b<<endl;
// }

// class Complex:public Simple{
//     public:
//     void add(){
//         if(a<=0 || b<=0){
//             cout<<"Invalid Values"<<endl;
//         }
//         else{
//             Simple::add();
//         }
//     }

//      void sub(){
//         if(a<=0 || b<=0){
//             cout<<"Invalid Values"<<endl;
//         }
//         else{
//             Simple::sub();
//         }
//     }

//      void mul(){
//         if(a<=0 || b<=0){
//             cout<<"Invalid Values"<<endl;
//         }
//         else{
//             Simple::mul();
//         }
//     }

//      void div(){
//         if(a<=0 || b<=0){
//             cout<<"Invalid Values"<<endl;
//         }
//         else{
//             Simple::div();
//         }
//     }
// };
// int main(){
//     Complex obj;
//     obj.input();
//     obj.add();
//     obj.sub();
//     obj.mul();
//     obj.div();
// }