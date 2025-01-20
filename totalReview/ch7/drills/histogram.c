
/*
  h: Occured 2 times
  e: and so on
 */


#include <stdio.h>

#define alphabet 26

int main(){
    char letters;
    int freq[alphabet] = {0};
    int times = 0;
    char alpha[times];

    while((letters = getchar()) != EOF){
	if(letters == '\n')
	    break;
	    ++freq[letters - 'a'];
	    if(letters == ' ')
		break;
	    alpha[times] = letters;
	    ++times;
	}

    //print it
    for(int i = 0; i < alphabet; ++i){
	printf("%d\n", freq[i]);
    }


    //histogram
    for(int i = 0; i < alphabet; ++i){
	printf("%c", alpha[i]);

	for(int x = 0; x <= alpha[i]; ++x){
	    printf(" *");
	}
	printf("\n");

    }
    return 0;
}
