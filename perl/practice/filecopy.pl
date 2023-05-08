#!/usr/bin/perl
open(f1, "<secret") or die "File not found";
open(f2, ">>aa.txt");
while(<f1>){
	print f2 $_;
}
close(f1);
close(f2);