# GNUMAP
# Language: C++
# Input: TXT
# Output: PREFIX
# Tested with: PluMA 1.1, GCC 4.8.4
# Subread1.28

PluMA plugin that runs GNUMAP

The plugin expects as input a parameter file of tab-delimited keyword value pairs: 
   addRequiredParameter("-g", "genomefile");
   addOptionalParameter("-a", "alignscore");
   addOptionalParameter("-r", "useraw");
   addOptionalParameter("-G", "gappenalty");
   addOptionalParameter("-A", "adapter");
   addOptionalParameter("-M", "maxgaps");
   addOptionalParameter("-S", "posweightfile");
   addOptionalParameter("-T", "maxmatch");
   addOptionalParameter("-u", "unique");
   addOptionalParameter("-j", "jump");
   addOptionalParameter("-k", "seedhits");
   addOptionalParameter("--up_strand", "upstrand");
   addOptionalParameter("--down_strand", "downstrand");
   addOptionalParameter("--no_nw", "nonw");
   addOptionalParameter("-q", "readquality");
   addOptionalParameter("--illumina", "illumina");
   addOptionalParameter("-m", "mersize");
   addOptionalParameter("-s", "skip");
   addOptionalParameter("--bin_size", "resolution");
   addOptionalParameter("-h", "maxkmer");
   addOptionalParameter("-0", "printfull");
   addOptionalParameter("--print_all_sam", "printallsam");
   addOptionalParameter("--vcf", "vcf");
   addOptionalParameter("--snp", "snp");
   addOptionalParameter("--snp_pval", "snppval");
   addOptionalParameter("--snp_monop", "snpmonop");
   addOptionalParameter("-b", "CtoT");
   addOptionalParameter("-b2", "bisulfate");
   addOptionalParameter("-d", "AtoG");
   addOptionalParameter("--fast", "fast");
   addOptionalParameter("--assembler", "assembler");



index (corresponding flag: -i)
forward (corresponding flag: -r)
DNA (corresponding flag: -t)
reverse (corresponding flag: -R)
[ SAMinput (corresponding flag: --SAMinput) ]
[ BAMinput (corresponding flag: --BAMinput) ]
[ SAMoutput (corresponding flag: --SAMoutput) ]
[ Phred (corresponding flag: -P) ]
[ numselect (corresponding flag: -n) ]
[ consensushit (corresponding flag: -m) ]
[ consensusthreshold (corresponding flag: -p) ]
[ maxmismatch (corresponding flag: -M) ]
[ multiMapping (corresponding flag: --multiMapping) ]
[ maxequal (corresponding flag: -B) ]
[ maxindel (corresponding flag: -I) ]
[ complexIndels (corresponding flag: --complexIndels) ]
[ trim5 (corresponding flag: --trim5) ]
[ trim3 (corresponding flag: --trim3) ]
[ minfragment (corresponding flag: -d) ]
[ maxfragment (corresponding flag: -D) ]
[ orientation (corresponding flag: -S) ]
[ numthreads (corresponding flag: -T) ]
[ readgroupID (corresponding flag: --rg-id) ]
[ readgroup (corresponding flag: --rg) ]
[ colorspace (corresponding flag: -b) ]
[ DBGapOpen (corresponding flag: --DPGapOpen) ]
[ DBGapExt (corresponding flag: --DPGapExt) ]
[ DBMismatch (corresponding flag: --DPMismatch) ]
[ DBMatch (corresponding flag: --DPMatch) ]
[ SV (corresponding flag: --sv) ]
[ annotation (corresponding flag: -a) ]
[ format (corresponding flag: -F) ]
[ chromosome (corresponding flag: -A) ]
[ GTFFeature (corresponding flag: --gtfFeature) ]
[ GTFAttr (corresponding flag: --gtfAttr) ]

Plugin output format: TXT
