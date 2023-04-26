#!/usr/bin/perl -w
use strict;
my $d = "this is sparta";
$d =~ s/(\w)(\w+)/uc ($1).$2/eg;
print "$d\n";
