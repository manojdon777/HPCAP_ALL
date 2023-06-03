#!/usr/bin/perl -w

# Defining string to be reversed
$string = "Hello World";
print scalar reverse("$string"), "\n";

$string = "Geeks For Geeks";
print scalar reverse("$string"), "\n";


#!/usr/bin/perl -w

# Defining list of +ve Integers to the array
@array1 = (20, 30, 40, 50, 60, 70);
print reverse(@array1), "\n";

# Defining list of Integers to the array
@array2 = (1, -2, 3, 4, -5, 6);
print reverse(@array2), "\n";
