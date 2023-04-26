#!/usr/bin/perl -w
use strict;
if (-e "content.txt"){
    open(DATA1, "<content.txt") or die $!;
    my $counter = 0;
    for (<DATA1>){
        if ($_ =~ m/hi/g){
            print "$_\n";
            $counter++;
        }
    }
        print "$counter\n";
    close(DATA1);
} else {
    exit 127;
}
