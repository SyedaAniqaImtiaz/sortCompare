#include "mySort.h"

void mySort(int data[], unsigned int first, unsigned int last)
    {
        int i;
        if(first < last){
            for(int n = first+1; n <= last; n++){
                i = n;
                
                while(myCompare(data[i], data[i-1]) < 0/*(data[i] < data[i-1])*/ && (i > 0)){
                    mySwap(&data[i], &data[i-1]);
                    /*temp = data[i];
                    data[i] = data[i-1];
                    data[i-1] = temp;*/
                    i = i-1;
                }
                
            }
        }
    }
        
