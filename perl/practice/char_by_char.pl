my $var = "junk sit here. not all the time.";

while ($var =~ /(.)/sg) {
   my $char = $1;
   print $1.""
}