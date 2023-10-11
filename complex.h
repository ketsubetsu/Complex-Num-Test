/**
 * public interface for the complex number class.
 * @author ketsubetsu
 * <pre>
 * File: complex.h
 * </pre>
 */

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

/**
 * This class describes a typical complex number of the form a+bi.
 */ 
class Complex
{
	private:
	/**
	 * The real portion of the complex number
	 */
		double real;
	
	
	
	
	/**
	 * The imaginary portion of the complex number
	 */
		double imag;
	public:
	
	
	
	
	/**
	 * The default construtor of complex numbers in this program
	 */
		Complex();
    
    
    
    
    /**
     * parameterized constructor
     * @param real The value of the real part of the complex number.
     * @param imag The value of the imaginary part of the complex number.
     */
    Complex(double real, double imag);
    
    
    
    
    /**
     * parameterized constructor
     * @param double The value within the complex number of type 'double'.
     */
    Complex(double);
    
    
    
    
    /**
     * Gets the value of the real portion of the complex number
     */
    double getReal() const;
    
    
    
    
    /**
     * Gets the value of the imaginary portion of the complex number.
     */
    double getImag() const;
    
    
    
    
    /**
     * Returns the conjugate on the complex number it is assigned to.
     */
    Complex conjugate() const;
    
    
    
    
    /**
     * Returns the magnitude of the complex number.
     */
    double modulus() const;
    
    
    
    
    /**
     * Returns the polar angle of a complex number.
     * Throws a -2, when an exception occurs. An exception occurs when both y and x are 0.
     */
    double argument() const;
    
    
    
    
    /**
     * Overloaded addition operator
     * @param z1 A constant reference to the first of the two complex numbers being added.
     * @param z2 A constant reference to the second of the two complex numbers being added.
     * @return The sum of the complex numbers.
     */
    friend Complex operator +(const Complex& z1, const Complex& z2);
    
    
    
    
    /**
     * Overloaded subtraction operator
     * @param z1 A constant reference to the first of the two complex numbers being subtracted.
     * @param z2 A constant reference to the second of the two complex numbers being subtracted.
     * @return The difference of the complex numbers.
     */
    friend Complex operator -(const Complex& z1, const Complex& z2);
    
    
    
    
    /**
     * Overloaded multiplication operator
     * @param z1 A constant reference to the first of the two complex numbers being multiplied.
     * @param z2 A constant reference to the second of the two complex numbers being multiplied.
     * @return The product of the complex numbers.
     */
    friend Complex operator *(const Complex& z1, const Complex& z2);
    
    
    
    
    /**
     * Overloaded division operator
     * @param z1 A constant reference to the first of the two complex numbers being divided.
     * @param z2 A constant reference to the second of the two complex numbers being divided.
     * @return The quotient of the complex numbers.
     * Throws a -1 when an exception occurs. An exception occurs when both the real and imaginary
     * parts of the divisor are 0
     */
    friend Complex operator /(const Complex& z1, const Complex& z2);
    
    
    
    
    /**
     * Overloaded insertion operator
     * @param out A reference to an ostream object.
     * @param z A reference to a Complex object.
     * @return A reference to an ostream object.
     */
    friend ostream& operator<<(ostream& out, const Complex& z);
    
    
    
    
    /**
     * Defining the 'pow' function
     * Raises a complex number 'z' to the nth power: Z^n.
     * @param Complex& z A constant reference to the complex number called upon.
     * @param n A reference to the power that complex number 'z' is being raised to.
     * @return The product of the exponential function.
     */
    friend Complex pow(const Complex& z, int n);

};
#endif
