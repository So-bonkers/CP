# Strivers A2Z DSA playlist
## L1

What is the first thing to do when writing a c++ code?
-> To write the skeleton of the code

Let's say we have to print our name. In such cases, you have to give output, or in some other cases you t=have to take in an input. So in order to take an input or give an output, we have to use the library ```iostream```. Other libraries which are often useful are ```math.h``` and ```string.h```.

### Data Types
Since we are talking about input and output, let's say we need to take in a number as an input, then we also need to store it somewhere in your program. The place where we store this information can be your data type. The data types in c++ are:
* Primary or Builtin Data Types: These data types are built-in or predefined and can be used directly by the user to declare variables. Primary data types are:
  1. Integer
  2. Character
  3. Boolean
  4. Floating Point
  5. Double Floating Point
  6. Valueless or Void
  7. Wide Character

* Derived Data Types: Derived data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely:
  1. Function
  2. Array
  3. Pointer
  4. Reference

* Abstract or User-Defined Data Types: Abstract data types are defined by the user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:
  1. Class
  2. Structure
  3. Union
  4. Enumeration
  5. Typedef defined Datatype. 

### Primitive Data Types
* **Integer**: The keyword used for integer data types in ```int```. Integers typically require **4 bytes** of memory space and range from -2147483648 to 2147483647 (i.e -2^31 to 2^31-1)
* **Character**: Character data type is used for storing characters. The keyword used for the character data type is ```char```. Characters typically require **1 byte** of memory space and range from -128 to 127 or 0 to 255.
* **Boolean**: Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either **true** or **false**. The keyword used for the Boolean data type is ```bool```. 
* **Floating Point**: Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is ```float```. Float variables typically require **4 bytes** of memory space.
* **Double Floating Point**: Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is ```double```. Double variables typically require **8 bytes** of memory space.
* **Void**: Void means without any value. void data type represents a valueless entity. A ```void``` data type is used for those function which does not return a value.
* **Wide Character**: Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit data type. Represented by ```wchar_t```. It is generally **2 or 4 bytes** long.

### Derived Data Types
* **Function**: A function is a block of code or program-segment that is defined to perform a specific well-defined task. A function is generally defined to save the user from writing the same lines of code again and again for the same input. All the lines of code are put together inside a single function and this can be called anywhere required. main() is a default function that is defined in every program of C++.
* **Array**: An array is a collection of items stored at continuous memory locations. The idea of array is to represent many instances in one variable.
* **Pointers**: Pointers are symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.
* **Reference**: When a variable is declared as reference, it becomes an alternative name for an existing variable. A variable can be declared as reference by putting ```‘&’``` in the declaration.