#!/usr/bin/perl
use strict;
use warnings;
my %hash = ("Banana" => "Yellow","Apple" => "Red","Grapes" => "Green");
my @key = keys %hash;
print($key[0],"s are ",$hash{$key[0]},"\n");
print($key[1],"s are ",$hash{$key[1]},"\n");
print($key[2],"s are ",$hash{$key[2]},"\n");
