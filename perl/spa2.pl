#!/usr/bin/perl
use strict;
use warnings;
my $a = "This is sparta";
substr $a, -6, 6, "SMOKIE";
print "$a\n";
