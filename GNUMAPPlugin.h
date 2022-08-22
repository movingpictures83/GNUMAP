#ifndef GNUMAPPLUGIN_H
#define GNUMAPPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class GNUMAPPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "GNUMAP";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
