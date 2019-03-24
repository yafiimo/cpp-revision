# Data Structures

### Call Stack
Call stack is a last in first out data structure. It is used for the call stack
in programs, and keeps track of where each function/method should return control
when they complete.

Stacks do not allow random access to it's elements. Only the top element can be
accessed using the `Top()` method. 

Other methods include `Push()` and `Pop()`:
* `Push()` adds an element to the top of the stack and increments the stack pointer
* `Pop()` removes and returns the element at the top of the stack and decrements the stack pointer