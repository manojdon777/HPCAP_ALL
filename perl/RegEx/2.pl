#!/usr/bin/perl -w
use strict;
my $str = "This is Smokie";
if($str =~ m/\s/){
	print "Match\n";
}
