#!/usr/bin/perl -w
use strict;
my $count = 0;
for my $i (@ARGV){
	print ("ARGV$count ".$i."\n");
	$count++;
}