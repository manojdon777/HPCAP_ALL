#!/usr/bin/perl
use strict;
use warnings;
my $a = "1234567";
substr $a, 0, 6, "SMOKIE";
print "$a\n";
