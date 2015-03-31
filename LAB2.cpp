#include <iostream>
#include <fstream>

#include"BMI.h"

using namespace std;
 int main()
 {
 	ifstream inFile("filein.txt",ios::in);
 	ofstream outFile("fileout.txt",ios::out);
 	float d,e,f,g;
 	BMI bmi;
 	
	 if(!inFile)
	 {
	   cerr<<"Fail"<<endl;
	   return 0;
	 }
	 
	 
	 
	 
	 while(inFile>>d>>e)
	 {   
	      bmi.seth(d);
	      bmi.setw(e);
	      
	      f=bmi.cal(g);
	      
	     if(f<15)
	     {
	     	outFile<<f<<"\t"<<"Very severely underweight"<<endl;
		 }
		  
		else if(f>=15&&f<16)
		  {
		  	outFile<<f<<"\t"<<"Severely underweight "<<endl;
		  }
	 	else if(f>=16&&f<18.5)
		  {
		  	outFile<<f<<"\t"<<"Underweight"<<endl;
		  }
	    else if(f>=18.5&&f<25)
		  {
		  	outFile<<f<<"\t"<<"Normal"<<endl;
		  }
		else if(f>=25&&f<30)
		  {
		  	outFile<<f<<"\t"<<"Overweight"<<endl;
		  }
		else if(f>=30&&f<35)
		  {
		  	outFile<<f<<"\t"<<"Obese Class I (Moderately obese) "<<endl;
		  }
		else if(f>=35&&f<40)
		  {
		  	outFile<<f<<"\t"<<"Obese Class II (Severely obese) "<<endl;
		  }
		else if(f>=40)
		  {
		  	outFile<<f<<"\t"<<"Obese Class III (Very severely obese) "<<endl;
		  }
	 }
	 
	 cout<<"its down"<<endl;
	 
	 return 0;
 }




