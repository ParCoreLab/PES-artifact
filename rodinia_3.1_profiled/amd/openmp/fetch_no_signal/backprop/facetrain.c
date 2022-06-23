#include "perf.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "backprop.h"
#include "omp.h"

extern char *strcpy();
extern void exit();

int layer_size = 0;

backprop_face()
{
  BPNN *net;
  int i;
  float out_err, hid_err;
  long long time0;

#include "perf1.h"


//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"/#include "perf_barrier.h"
//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"include "perf_barrier.h"
//#include "perf_event.h"

//#include "test_utils.h"
//#include "perf_helpers.h"
//#include "matrix_multiply.h"
//#include "parse_record.h"	

#include "perf_clock_start.h"

#include "perf_counter_start.h"

  net = bpnn_create(layer_size, 16, 1); // (16, 1 can not be changed)
  printf("Input layer size : %d\n", layer_size);
  load(net);
  //entering the training kernel, only one iteration
  printf("Starting training kernel\n");
  bpnn_train_kernel(net, &out_err, &hid_err);
  bpnn_free(net);
  printf("Training done\n");

#include "perf_counter_stop.h"

#include "perf_clock_stop.h"

#include "perf_print_sample.h"
}

int setup(argc, argv)
int argc;
char *argv[];
{
  if(argc!=2){
  fprintf(stderr, "usage: backprop <num of input elements>\n");
  exit(0);
  }

  layer_size = atoi(argv[1]);
  
  int seed;

  seed = 7;   
  bpnn_initialize(seed);
  backprop_face();

  exit(0);
}
