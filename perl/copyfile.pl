#!/usr/bin/perl -w
use strict;
open(data1, "<secret") or die $!;
open(data2, ">>file.txt");
while (<data1>){
	print data2 $_;
}
close(data1);
close(data2);