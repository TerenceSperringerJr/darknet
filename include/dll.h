#ifdef BUILDING_DARKNET_DLL
#define DARKNET_DLL __declspec(dllexport)
#else
#define DARKNET_DLL
#endif

extern char* DARKNET_DLL dllTest();
void DARKNET_DLL darkDetect(char *cfgfile, char *weightfile, char *filename);
void DARKNET_DLL darkTestDetector(char *datacfg, char *cfgfile, char *weightfile, char *filename, float thresh, float hier_thresh, char *outfile, int fullscreen);
