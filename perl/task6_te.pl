#!/usr/bin/perl -w
use strict;
my $ids = ("AAA bbb Ccc ddD EEE");
my $len = length $ids;
my @up;
my $count = 0;
for (my $i = 0; $i < $len; $i++) {
	if(substr($ids,$i,1) eq uc substr($ids,$i,1) and substr($ids,$i,1) ne " "){
		@up[$count++] = substr($ids,$i,1);
	}
}
print "@up\n";
