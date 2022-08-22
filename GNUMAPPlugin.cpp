#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "GNUMAPPlugin.h"

void GNUMAPPlugin::input(std::string file) {
	readParameterFile(file);
}

void GNUMAPPlugin::run() {

}

void GNUMAPPlugin::output(std::string file) {
	std::string stuff = " ";
	std::string tmp;
	std::ifstream thefiles(std::string(PluginManager::prefix())+"/"+myParameters["sequencefile"], std::ios::in);
	std::string tmp2;
	while (!thefiles.eof()) {
	  thefiles >> tmp;
	  if (tmp != tmp2) {
          stuff += tmp;
	  stuff += " ";
	  tmp2 = tmp;
	  }
	}
	myCommand += "gnumap";
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

   myCommand += stuff;
   myCommand += " -o "+file;
 std::cout << myCommand << std::endl;

 system(myCommand.c_str());
}

PluginProxy<GNUMAPPlugin> GNUMAPPluginProxy = PluginProxy<GNUMAPPlugin>("GNUMAP", PluginManager::getInstance());
