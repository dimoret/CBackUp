$lines = 0;
$^I = '.bak';
while (<>) {
	$lines++;
	$_ =~ s/\n/, /;	
	print;
}
$file = $ARGV;
$new_file = "JobIDsNew.txt";
$odd_lines = $lines/20;
$odd_lines = int($odd_lines);
if($lines < 20)
{
	open STEP_ONE,$file;
	$first_step = <STEP_ONE>;
	$first_step =~ s/(.*), $/$1/;
	open STEP_ONE,">",$new_file;
	print STEP_ONE $first_step;
}
open STEP_TWO,$file or die"stop in 1\n";
$content = <STEP_TWO>;
if($content =~ s/(.{758}), /$1\n\n/gm)
{
open STEP_TWO,">",$new_file;
print STEP_TWO $content;
close STEP_TWO;
}
if($lines >20 && $odd_lines !=0)
{
open STEP_THREE,$new_file;
@t = <STEP_THREE>;
$text = join '',@t;
$temp = ($lines%20)*38-2;
$text =~ s/\n\n(.{\Q$temp\E}),\s$/,\n$1/gm;
open RESULT,">","JobIDsNew.txt";
print RESULT $text;
}
