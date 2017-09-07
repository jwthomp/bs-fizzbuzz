A ReasonML implementation of Fizzbuzz in library form.

I built this to work through creating a npm installable ReasonML package.

Simple example:

```
include Fizzbuzz;

for index in 0 to 100 {
  print_string (Fizzbuzz.get index);
  print_string " ";
};

print_string "\n";
```
