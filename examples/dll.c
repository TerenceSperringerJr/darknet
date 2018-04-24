#include "dll.h"

extern void predict_classifier(char *datacfg, char *cfgfile, char *weightfile, char *filename, int top);
extern void test_detector(char *datacfg, char *cfgfile, char *weightfile, char *filename, float thresh, float hier_thresh, char *outfile, int fullscreen);
extern void run_yolo(int argc, char **argv);
extern void run_detector(int argc, char **argv);
extern void run_coco(int argc, char **argv);
extern void run_captcha(int argc, char **argv);
extern void run_nightmare(int argc, char **argv);
extern void run_classifier(int argc, char **argv);
extern void run_regressor(int argc, char **argv);
extern void run_segmenter(int argc, char **argv);
extern void run_char_rnn(int argc, char **argv);
extern void run_tag(int argc, char **argv);
extern void run_cifar(int argc, char **argv);
/*extern void run_go(int argc, char **argv);*/
extern void run_art(int argc, char **argv);
extern void run_super(int argc, char **argv);
extern void run_lsd(int argc, char **argv);



char* dllTest() {
	return "Hello! This seems to have exported just fine ;-)";
}

void darkDetect(char *cfgfile, char *weightfile, char *filename) {
	test_detector("cfg/coco.data", cfgfile, weightfile, filename, 0.5, 0.5, 0, 0);
	
	return;
}

void darkTestDetector(char *datacfg, char *cfgfile, char *weightfile, char *filename, float thresh, float hier_thresh, char *outfile, int fullscreen) {
	test_detector(datacfg, cfgfile, weightfile, filename, thresh, hier_thresh, outfile, fullscreen);
	
	return;
}
