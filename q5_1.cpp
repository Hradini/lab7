#include <iostream>
using namespace std;

class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      void Create (char * a,int x,int y,int z);
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };
