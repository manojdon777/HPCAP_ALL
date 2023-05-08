#!/usr/bin/perl
use strict;
my $i;
print("$#ARGV+1\n");
for ($i = $#ARGV; $i >= 0; $i--){
	print("$ARGV[$i], $i\n")
}