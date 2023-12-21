#include <iostream>
using namespace std;


namespace USA{
   void Microsoft(){
      cout << "The Microsoft campus in Redmond, Washington, United States" << endl;
   }
}

namespace JAP{
   void Microsoft(){
      cout << "Microsoft Japan's headquarters in Minato, Tokyo" << endl;
   }
}

int main ()
{
 
   USA::Microsoft();
   
   JAP::Microsoft(); 

   return 0;
}