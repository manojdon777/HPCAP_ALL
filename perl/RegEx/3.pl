#!/usr/bin/perl -w
use strict;
my $str = "This is sparta";
if($str =~ s/sparta/SMOKIE/){
	print "Match : $str\n";
}
