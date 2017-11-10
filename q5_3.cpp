class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create(char*,int,int,int)
	  {
	  } // prototype of create function goes here
      void Destroy (); // destroy function 
      char* name1()
      {
      	return name;
	  }
      char* reptName (); // Returns the reptile name
      int daysSinceLastWeighed (int today);
   };
   // ========== an application to use the ZooAnimal class
   void main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.name1() << endl;

    bozo.Destroy ();
   }
