### Topics

- Compilation
- Arrays
- Strings
- Command-line arguments
- Problem Set 2

### Compilation

Converts Source Code to Binary
Binary can be executed by the machine

#### Functions

- Functions / Procedoures / Methods
  Functions are black box that processes input for a expected output
  Black box because we don't exactly know whats happening inside
  Can be used throughout many programs

```
int add(int a, int b)
{
  return a + b;
}

float mult(float a, float b)
{
  return a * b;
}
```

- Function Declaration
  They have to be on the top of the program code
  The declaration must have the return type, the name, and the arguments

```
int add(int a, int b);
float mult(float a, float b);
// or
double mult(double a, double b);
```

#### Variables and Scope

- Variables
  Variables must have different names

- Scope
  Variables can have same name when they are from different scopes
  Pointers help affecting the variables outside the scope

#### Debugging

Worthless learning _(too easy)_

#### Arrays

- Array Delcaration

```
char *friends[5];
type name[size];
```

- Array Atribution

```
friends[0] = "Jefferson";
friends[1] = "Nicolas";
```

- Array Initialization

```
char *friends[] = {"Jefferson", "Nicolas", "Israel", "Rafael", "Danielson / Danilo"};
```

#### Command-line arguments

```
int main(int argc, char argv[])
{
  // argc is count of arguments
  // argv is values of each arguments
}
```

```
$ ./hello_world shrek
arguments will be:
argv[0] = ./hello_world
argv[1] = shrek
```
