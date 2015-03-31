#include"BMI.h"

void BMI::setw(float a)
{
	weight=a;
	
}

float BMI::getw()
  {
  	return weight;
  }
  
  void BMI::seth(float b)
{
	height=b;
	
}

float BMI::geth()
  {
  	return height;
  }
  
  float BMI::cal(float c)
  {
  	c= ((getw())*(getw()))/geth();
  	return c;
  }
