 #include "windows.h"
   #include <iostream>
   using namespace std;

   int main() {

        while (true){

             if (GetAsyncKeyState(VK_LEFT) & (0x8000 != 0)){
                  cout << ("left button pressed") << endl;
             }
             else if (GetAsyncKeyState(VK_RIGHT) & (0x8000 != 0)){
                  cout << ("right button pressed") << endl;
             }
            int myDelay=1000;
             int myRand=rand()%100;
             cout<<myRand<<"\n";
             Sleep(myDelay);
        }

     return 0;
   }
