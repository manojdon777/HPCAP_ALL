#!/usr/bin/perl -w
use strict;
my $d = "123-45-6789 11-445-665";
#$d =~ s/(\d{3}-\d{2}-\d{4})/print "$1\n"/eg;
for ($d =~ m/\d{3}-\d{2}-\d{4}/g){
	print "$_\n";
}

