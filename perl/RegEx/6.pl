#/usr/bin/perl -w
use strict;
my $d = `curl -ks $ARGV[0]`;
for ($d =~ m/[a-zA-Z]{1,}\w{0,}-{0,}\w{0,}@\w{1,}\.\w{1,}/g){
	print "email : $_\n";
}
