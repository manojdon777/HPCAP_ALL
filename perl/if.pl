#!/usr/bin/perl -w
use strict;
my $a = $ARGV[0];
if ($a == "1" || $a <= "5"){
	print "First statement\n";
}elsif ($a == "10"){
	print "Second statement\n";
}else {
	print "None\n";
}
