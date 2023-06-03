#!/usr/bin/perl
use strict;
use warnings;
my $a = "123456789";
substr $a, 0, 7, "SMOK";
print "$a\n";
