#!/usr/bin/perl -w
use strict;
my $d = "alice: 43565 
bob:5645
# we need to file charlie
   charlie : 6456
#demise is a new hire
demise : 34553";
my %hash;
for ($d =~ /(\w+):(\d+)/xg){
	print "$1 $2\n";	
}
# $d =~ s/(\w+):(\d+)/ $hash{$1} = $2/xge;
# $d =~ s/(\w+):(\d+)/ print "$1 $2\n" /xge;
