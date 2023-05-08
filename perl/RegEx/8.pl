#!/usr/bin/perl -w
use strict;
my $d = "abcd1234";
$d =~ s/([a-z]+)(\d+)/print "$1_$2"/eg;
