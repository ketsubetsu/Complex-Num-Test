/**
 * Implementation for the complex class 
 * @author ketsubetsu
 * <pre>
 * File: complex.cpp
 * </pre>
 */

#include <cmath>
#include <cstdlib>
#include "complex.h"

Complex::Complex()
{
   real = 0.0;
   imag = 0.0;
}

Complex::Complex(double r)
{
    real = r;
    imag = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

double Complex::getReal() const
{
   return real;
}

double Complex::getImag() const
{
    return imag;
}

Complex Complex::conjugate() const
{
   return Complex(real,-imag);
}

double Complex::modulus() const
{
    return (sqrt(((real*real)+(imag*imag))));
}

double Complex::argument() const
{
    int e;
    e=-2;
        
    if ((real==0)&&(imag==0))
    throw e;
    else

    return (atan(imag/real));
}

Complex operator +(const Complex& z1, const Complex& z2)
{
   return Complex(z1.real+z2.real,z1.imag+z2.imag);
}

Complex operator -(const Complex& z1, const Complex& z2)
{
    return Complex(z1.real-z2.real,z1.imag-z2.imag);
}

Complex operator *(const Complex& z1, const Complex& z2)
{
    double r,i;
    r=(z1.real*z2.real)-(z1.imag*z2.imag);
    i=(z1.real*z2.real)+(z1.imag*z2.imag);
    return Complex(r,i);
}

Complex operator /(const Complex& z1, const Complex& z2)
{
    Complex z,numerator,denominator;
    double r,i;
    int e;
    e=-1;
    r=z2.real;
    i=z2.imag;
        if ((r==0)&&(i==0))
        throw e;
        
        if (z2.imag==0)
            {
                z = (z1.real / z2.real, z1.imag / z2.imag);
                return z;
            }
        numerator = (z1 * z2.conjugate());
        denominator = (z2 * z2.conjugate());
        r = (numerator.real / denominator.real);
        i = (numerator.imag / denominator.real);
        return Complex(r,i);    
}

ostream& operator<<(ostream& out, const Complex& z)
{
   if (z.real == 0 && z.imag == 0)
   {
      out<<"0";
      return out;
   }
   if (z.real == 0)
   {
      if (z.imag < 0)
      {
         if (z.imag != -1)
            out<<z.imag<<"i";
         else
            out<<"-i";
      }
      else
      {
         if (z.imag != 1)
            out<<z.imag<<"i";
         else
            out<<"i";
      }
      return out;
   }
   if (z.imag == 0)
   {
      out<<z.real;
      return out;
   }
   out <<z.real;
   if (z.imag < 0)
   {
      if (z.imag != -1)
         out<<z.imag<<"i";
      else
         out<<"-i";
   }   
   else
   {
      if (z.imag != 1)
         out<<"+"<<z.imag<<"i";
      else
         out<<"+i";  
   }
   return out;
}

Complex pow(const Complex& z, int n)
{
    if (n==0)
    {
        return Complex(1,0);
    }
    int m = abs(n);
    Complex ans=z;
    
    for(int i=1; m>=i; i++)
    {
        ans=ans*z;
        return ans;
    }
    return ans;
}