void red () {
  printf("\033[1;31m");
}

void blue(){
  printf("\033[0;34m");
}

void ran(int lower, int upper, int count) {
    for (int i = 0; i < 1; i++) {
      int i;
      for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        red(); // color
        printf("key: %d \n", num); // generate random numbers and printed
      }
    }
  }
