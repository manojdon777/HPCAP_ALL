#!/usr/bin/perl
use strict;
use warnings;
my $a = 111;
my $b = 777;
($a, $b) = ($b, $a);
print("$a...$b")