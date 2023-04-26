#!/usr/bin/perl -w
use strict;
open(DATA, "<content.txt") or die "Cant open data : $!";

while( my $line = <
chomp(my @lines = <DATA>);


print "Out: @lines\n";
close(DATA);
