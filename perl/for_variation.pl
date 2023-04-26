#!/usr/bin/perl -w
use strict;
my $count = 1;
for my $i (@ARGV){
	print "ARGV$count ".$i."\n";
	$count++;
}	
