#!/usr/bin/perl
use strict;
use warnings;
my $a = <>;
chomp($a);
my $b = <>;
chomp($b);
my $c = <>;
chomp($c);
my $d = <>;
chomp($d);
my @ar =($a, $b, $c, $d);
my @nw = (lc $a, $b, uc $c, length $d);
print @nw;
