#include "mySort.h"
#include <math.h>

void mySort(int data[], unsigned int first, unsigned int last)
    {
        int mid;
        if(first < last){
            mid = floor((first + last)/2);
            mySort(data, first, mid);
            mySort(data, mid + 1, last);
            myMerge(data, first, mid, last);
        }
    }

void myMerge(int data[], unsigned int first, unsigned int mid, unsigned int last)
    {
        int i = first, x = mid + 1, temp[MAX_SIZE_N_TO_SORT];
       while((first <= mid) && (x <= last)){
            if(data[first] <= data[x]){
                temp[i] = data[first];
                first++;
            }
            else{
                temp[i] = data[x];
                x++;
            }
           i++;
        }
        
        if(first > mid){
            for(int k = x; k<= last; k++){
                temp[i] = data[k];
                i++;
            }
        }
        
        else{
            for(int k = first; k<= mid; k++){
                temp[i] = data[k];
                i++;
            }
        }
        
            for(int z = first; z <= last; z++){
            data[z] = temp[z];
        }
    }

