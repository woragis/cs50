# Review

- Variables and Types
- Input and Printing
- Functions, Loops and Conditionals
- Problem Set 1

### Data Types

- Int _**4 bytes** (32 bits)_
- Unsiagned Int _**4 bytes** (32 bits)_
- Char **_1 byte (4 bits)_**
- Float _**4 bytes** (32 bits)_
- Double _**8 bytes** (64 bits)_
- Void _**No Type**_
  > CS50 types:
- Bool **1 byte**
- String
- Long
  > Type Defs: _create any type_

### Variables

- Declaration

```
int number;
```

- Assignement

```
number = 10;
```

- Initialization

```
int number = 10;
```

### Operators

- Add

```
a + b;
a = a + b;
a += b;
a++;
```

- Minus

```
a - b;
a = a - b;
a -= b;
a--;
```

- Multiply

```
a * b;
a = a * b;
a *= b;
```

- Division

```
a / b;
a = a / b;
a /= b;
```

- Modulus

```
a % b;
a = a % b;
a %= b;
```

### Boolean Expressions

#### Logical Operators

- Or

```
true || true = true;
true || false = true;
false || false = false;
```

- And

```
true && true = true;
true && false = false;
false && false = false;
```

- Not

```
!true = false;
!false = true;
```

#### Relational Operators

- Greater than

```
a > b;
```

- Lesser than

```
a < b;
```

- Greater or Equal than

```
a >= b;
```

- Lesser or Equal than

```
a <= b;
```

- Equal to

```
a == b;
```

- Not Equal to

```
a != b;
```

### Conditionals

> If Statement

- if (boolean expression 1) { executed block }
- else if (boolean exrpession 2) { executed block }
- else if (boolean exrpession 3) { executed block }
- else if (boolean exrpession 4) { executed block }
- else { executed block }

> Switch case

- Switch (variable)
  {
- case 1: block; break
- case 2: block; break
- case 3: block; break
- default: block;
  }

> Ternary Operator

```
int x = (expression) ? 5 : 6;

int x;
if (exrpession)
{
  x = 5;
}
else
{
  x = 6;
}
```

### Loops

- While Loop

```
while (boolean expression)
{
  code block;
}
```

- For Loop

```
for (variables initialization, boolean exrpession, code to execute every iteration)
{
  code block;
}
```

### Linux Commands

- List Items

```
$ ls
```

- Change Directory

```
$ cd
$ cd ..
$ cd ~
$ cd /
```

- Copy

```
$ cp $copy_source $item_copied
```

- Move or Rename

```
$ mv item destination
$ mv item destination/new_name
$ mv item new_name
```

- Create and Remove

```
$ touch item_name
$ rm item_name
$ rm -rf dir_name/
```

- Create or Remove Directories

```
$ mkdir dir_name
$ mkdir -p dir_name/subdir_name
$ rmdir empty_dir/
```
