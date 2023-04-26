#!/usr/bin/perl -w
use strict;
my $d = `ip addr`;
for($d =~ m/\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}/g){
	$_ =~ s/\./_/g;
	print "Match: $_\n";
}

