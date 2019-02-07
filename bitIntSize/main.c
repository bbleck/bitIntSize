//
//  main.c
//  bitIntSize
//
//  Created by Brian on 2/5/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>

int main(){
  unsigned int zeroInt = 0;
  int maxInt = ~zeroInt>>1;
  int minInt = (~zeroInt>>1)+1;
  printf("The max int val is: %d\n", maxInt);
  printf("The min int val is: %d\n", minInt);
  return 0;
}
