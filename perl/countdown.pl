#!/usr/bin/perl -w
use strict;
my $i;
#my $len = length @ARGV;
for ($i = $#ARGV+1; $i > 0; $i--){
	print "$i\n";
	sleep(1);
}

