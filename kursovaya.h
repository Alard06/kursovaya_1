#ifndef kursovaya_h
#define kursovaya_h

/* подключенные заголовки */

#define N 6
#define M 8



#endif /* kursovaya_h */
/*

const char* filename = "input.txt";
FILE* f;

int InputZnach(void){
    
    int count;
    f = fopen(filename, "r");
    count = 0;
 
    while (fgetc(f) != EOF)
        count++;
    
    return count;
}


int ImportArr(int size){
    
    int arr[size];
    
    
    for(int i = 0; i < size; i++){
        fscanf(f, "%d",&arr[i]);
    };
    
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    };
    printf("\n");
    return 1;
}

int main() {
    InputZnach();
    
    int size = InputZnach();
    
    printf("Всего символов 1-го числа : %d\n",size);
    ImportArr(size);
    fclose(f);
    fprintf(f, "%d");
}
*/
/*
int main(void){
    
    int a_arr[size1]={5,1}, b_arr[size2]={0,3,2,3,5};
    int Osnovnoi_array[MaxSizeArray];
    
    for(int i = 0; i < 50; i++){
        Osnovnoi_array[i] = 0;
    }
    for(int i = 0; i < 50; i++){
        printf("%d ",Osnovnoi_array[i]);
    }
    printf("\n======================= \n");
    
    if ((size1 == 1) || (size2 == 1)){
        do{
            if (size1 > size2){
                int c_arr[size1];
                for(int i = 0; i < size1; i++){
                
                    c_arr[i] = b_arr[i] * a_arr[0];
                }
                for(int i = 0; i < size1; i++){
                    printf("%d  ", c_arr[i]);;
                }
                return 1;
            }
            else if(size2 > size1){
                int c_arr[size2];
                
                
                for(int i = 0; i < size2; i++){
                    c_arr[i] = b_arr[i] * a_arr[0];
                }

                for(int i = 0; i < size2; i++){
                    int tmp, tmpZnach;
                    if (c_arr[i] / 10 != 0){
                        tmp = i;
                        i = 0;
                        tmpZnach = c_arr[tmp] / 10;
                        c_arr[tmp-1] = c_arr[tmp-1] + tmpZnach;
                    }
                    else
                        continue;
                    c_arr[tmp] = c_arr[tmp] % 10;
                }
                
                for(int i = 0; i < size2; i++){
                    printf("%d  ", c_arr[i]);;
                }
                return 1;
            }
        }
        while(1);
    }
    
    else if(size1 != 1){
        do{
            if (size1 > size2){
                int c_arr[size1];
                for(int i = 0; i < size1; i++){
                
                    c_arr[i] = b_arr[i] * a_arr[0];
                }
                for(int i = 0; i < size1; i++){
                    printf("%d  ", c_arr[i]);;
                }
                return 1;
            }
            else if(size1 < size2){
                int c_arr[size2];
                
                for(int i = 0; i < size2; i++){
                    c_arr[i] = b_arr[i] * a_arr[0];
                }

                for(int i = 0; i < size2; i++){
                    int tmp, tmpZnach;
                    if (c_arr[i] / 10 != 0){
                        tmp = i;
                        i = 0;
                        tmpZnach = c_arr[tmp] / 10;
                        c_arr[tmp-1] = c_arr[tmp-1] + tmpZnach;
                        
                    }
                    else
                        continue;
                    c_arr[tmp] = c_arr[tmp] % 10;
                }
                
                for(int i = 0; i < size2; i++){
                    printf("%d  ", c_arr[i]);;
                }
                
                printf("\n======================= \n");
                for (int i = 0; i < size2; i++){
                    Osnovnoi_array[i] = c_arr[i];
         }
                for(int i = MaxSizeArray-1; i > 0; i--){
                    int temp_array;
                    temp_array = Osnovnoi_array[i];
                    Osnovnoi_array[i] = Osnovnoi_array[i-1];
                    Osnovnoi_array[i-1] = temp_array;

                }
                for(int i = 0; i < MaxSizeArray; i++){
                    printf("%d ",Osnovnoi_array[i]);
                }
                printf("\n======================= \n");
                return 1;
                
            }

            
                
        }
        while(1);
    }
    
    
    else
        printf("ERROR \n");
}
*/
