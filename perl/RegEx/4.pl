#!/usr/bin/perl -w
use strict;
my $str = "This is SMOKIE";
if($str =~ s/\s/_/){
	print "Match : $str\n";
}
