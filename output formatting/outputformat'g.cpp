#include <iostream>
int main()
{
    /// included in header <iostream> which itselft includes <istream> and <ostream>///
    // std::endl is used to insert a newline and flush the output buffer //ostream
    //std::flush is used to flush the output buffer without inserting a newline // ostream

    ///included in header <iomanip> ///
    // std::setw(n) is used to set the width of the next output field to n characters
    // std::setfill(c) is used to set the fill character to c for padding the output field
    //std::setprecision(n) is used to set the number of digits to be displayed after the deimal point for floating-point numbers
    

    ///included in header <ios> /// below all are of header <ios> ///
    // std::right is used to right-align the output within the specified width
    // std::left is used to left-align the output within the specified width
    // std::internal is used to align the output in the internal field (for numbers, the sign is left-aligned, and the number is right-aligned)
    // std::boolalpha is used to print boolean values as true/false instead of 1/0
    // std::noboolalpha is used to print boolean values as 1/0 instead of true/false(which is by default)
    //std::showpos is used to show the positive sign for positive numbers and vice versa for std::noshowpos
    // std::dec, std::hex, std::oct are used to set the base for integer(only integers) output to decimal, hexadecimal, and octal respectively we can further add std::showbase to show the base prefix(0x for hex, 0 for octal) and std::noshowbase to hide the base prefix(which is by default)

    //std::uppercase and std::nouppercase are used to set the case for hexadecimal output to uppercase and lowercase respectively(which is by default)
    // std::fixed it is used to represent floating-point numbers in fixed-point notation
    // std::scientific it is used to represent floating-point numbers in scientific notation
    // std::defaultfloat it is used to represent floating-point numbers in the default notation(which is by default)
    //std::cout.unsetf(std::ios::scientific | std::ios::fixed); is used to unset the flags for scientific and fixed notation, reverting to the default notation which can be done by std::defaultfloat as well

    //std::showpoint is used to show the decimal point for floating-point numbers even if there are no digits after the decimal point and vice versa for std::noshowpoint


}