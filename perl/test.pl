#!/usr/bin/perl -w
use strict;
my $len = length @ARGV;
for(my $i = 0; $i <= $len; $i++){
	print "$ARGV[$i]";
}
