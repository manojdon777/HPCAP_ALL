#!/usr/bin/perl -w
use strict;
my ($arg1, $arg2) = @ARGV;
if(defined $arg1 && defined $arg2){
	if($arg1 eq "-c"){
		my $command = "$arg2" ;
		print "$command\n";
	}
	else {
		print "Error : Wrong Argument...\n";
	}
}
elsif (defined $arg1 && not defined $arg2) {
	if($arg1 eq "-h"){
		print "-c : Command\n";
		print "-h : help\n";
	}
	elsif($arg1 eq "-c"){
		print "Command Required...\n";
	}
	else{
		print "Wrong Argument...\n";
	}
}
elsif (not defined $arg1 && not defined $arg2){
	print "Error : Argument Required...\n";
}
