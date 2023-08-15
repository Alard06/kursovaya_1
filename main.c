/*      Подключенные заголовки    */
#include <stdio.h> // для ввода и вывода
#include <stdlib.h> // функция rand()
#include <math.h> // для математических операций
#include <time.h> // для корректной работы функции rand()
//В случае windows
//#include <locale.h> //***************WINDOWS***************
/*---------------------------------*/

/*  FAQ  */
/*  Алгоритм реализован на способе умножения столбиком  */

void Welcome_the_project(void){
    printf("###############################\n");
    for(int i = 0; i < 1; i++){
        printf("#                             #\n");
    }
    printf("#   УМНОЖЕНИЕ БОЛЬШИХ ЧИСЕЛ   #\n");
    for(int i = 0; i < 1; i++){
        printf("#                             #\n");
    }
    printf("###############################\n");
    printf("Подготовил: Никита Минеев.\n");
    printf("Группа.\n");
    printf("\n");
    printf("Примечание: ввод чисел должен быть по модулю \n");
    printf("Выберите тип операции:\n 1 - ввод собственных чисел \n 2 - ввод рандомных чисел \n");
    
}

/*Умножение больших чисел*/
int main(){
    //SETLOCALE(LC_ALL,"Ru"); //***************WINDOWS***************
    Welcome_the_project();
    int size1 = 1000, size2 = 10000;
    int operation;
    int MSA;
    char ch;
    int a_arr[size1], b_arr[size2];
    
    scanf("%d",&operation);
    if(operation == 1){
      
        printf("Размерности 1-го и 2-го массивов \n");
        scanf("%d%c%d",&size1,&ch,&size2);

        if ((size1 < size2)){
            printf("Введите 1-е число...\n");
            for (int i = 0; i < size1 - 1; i++){
                scanf("%d", &a_arr[i]);
            }
            size2 = size2 + 1;
            printf("Введите 2-е число...\n");
            for (int i = 0; i < size2 - 1; i++){
                b_arr[0] = 0;
                scanf("%d", &b_arr[i+1]);
            }
        }
        else if((size1 > size2)||(size1 == size2)){
            printf("Введите 1-е число...\n");
            size1 = size1 + 1;
            for (int i = 0; i < size1; i++){
                a_arr[0] = 0;
                scanf("%d",&a_arr[i+1]);
            }
            printf("Введите 2-е число...\n");
            for (int i = 0; i < size2; i++){
                scanf("%d",&b_arr[i]);
            }
        }
    }
    
    else if(operation == 2){
        printf("Размерности 1-го и 2-го массивов \n");
        scanf("%d%c%d",&size1,&ch,&size2);
        if ((size1 < size2)||(size1 == size2)){
            printf("Ввод чисел 1-го массива...\n");
            for (int i = 0; i < size1; i++){
                a_arr[0] = 0;
                a_arr[i+1] = rand() % 9;
            }
            size2 = size2 + 1;
            printf("Ввод чисел 2-го массива...\n");
            for (int i = 0; i < size2; i++){
                b_arr[0] = 0;
                b_arr[i+1] = rand() % 9;
            }
        }
        else if(size1 > size2){
            printf("Ввод чисел 1-го массива...\n");
            size1 = size1 + 1;
            for (int i = 0; i < size1; i++){
                a_arr[0] = 0;
                a_arr[i+1] = rand() % 9;
            }
            printf("Ввод чисел 2-го массива...\n");
            for (int i = 0; i < size2; i++){
                b_arr[i] = rand() % 9;
            }
        }
    }
    
    printf("Отрицательные числа: \n 1 - 1 отрицательное число \n 2 - 2 отрицательных числа либо нет отрицательных чисел \n");
    int operation_2;
    char Sign_Operation = '-';
    scanf("%d",&operation_2);
    
    MSA = size1+size2; //Кол-во символов для массива с ответом

    
    // Вывод чисел
    printf("\n!!!!!!КОНТРОЛЬ ЧИСЕЛ!!!!!!\n");
    for(int i = 0; i < size1; i++){
        printf("%d",a_arr[i]);
    }
    printf("\n");
    for(int i = 0; i < size2; i++){
        printf("%d",b_arr[i]);
    }
    /*---------------------------------*/
    
    int Osnovnoi_array[MSA]; //Массив для ответа
    
    for(int i = 0; i < MSA; i++){
        Osnovnoi_array[i] = 0; //Заполнение массива нулями
    }
    printf("\n======================= \n");
    
        do{
            if ((size1 > size2) || (size1 == size2)){
                printf("run ");
                for(int JH = size2-1; JH >= 0; JH--){
                    int c_arr[size1];
                    
                    for(int i = 0; i < size1; i++){
                        c_arr[i] = a_arr[i] * b_arr[JH];
                    }

                    for(int i = 0; i < size1; i++){
                        int tmp, tmpZnach;
                        if (c_arr[i] / 10 != 0){ //Проверка на деление на 10 в массиве
                            tmp = i;
                            i = 0;
                            tmpZnach = c_arr[tmp] / 10;
                            c_arr[tmp-1] = c_arr[tmp-1] + tmpZnach;
                            
                        }
                        else
                            continue;
                        c_arr[tmp] = c_arr[tmp] % 10;
                    }
                
                
                    for (int i = 0; i < size1; i++){
                        Osnovnoi_array[i] = Osnovnoi_array[i] + c_arr[i];
        
                   }
                
                    for(int i = MSA-1; i > 0; i--){
                        int temp_array;
                        temp_array = Osnovnoi_array[i];
                        Osnovnoi_array[i] = Osnovnoi_array[i-1];
                        Osnovnoi_array[i-1] = temp_array;

                    }
                }
                for(int i = 0; i < MSA; i++){
                    int tmp, tmpZnach;
                    if (Osnovnoi_array[i] / 10 != 0){
                        tmp = i;
                        i = 0;
                        tmpZnach = Osnovnoi_array[tmp] / 10;
                        Osnovnoi_array[tmp-1] = Osnovnoi_array[tmp-1] + tmpZnach;
                        
                    }
                    else
                        continue;
                    Osnovnoi_array[tmp] = Osnovnoi_array[tmp] % 10;
                }
                printf("Куда вывести результат умножения? \n 1 - в файл \n 2 - в консоль \n");
                int operation_3;
                scanf("%d", &operation_3);
                
                if (operation_3 == 1){
                    FILE *f = fopen("output.txt", "w");
                    
                    fprintf(f, "%c", Sign_Operation);
                    for(int i = 1; i <= MSA - 1; i++){
                        if (Osnovnoi_array[i] == 0){
                            int temp;
                            temp = Osnovnoi_array[i];
                            Osnovnoi_array[i] = Osnovnoi_array[i+1];
                            Osnovnoi_array[i+1] = temp;
                            i = 1;
                        }
                        else
                            break;
                    }
                        for(int i = 1; i <= MSA - 1; i++){
                            fprintf(f, "%d" ,Osnovnoi_array[i]);
                        }
                    fclose(f);
                    printf("======================= \n");
                    printf("Ответ записан в файл output.txt \n");
                    printf("======================= \n");
                    return 0;
                }
                
                else if (operation_3 == 2){
                        printf("Ваш ответ: \n");
                    if (operation_2 == 1){
                        printf("%c",Sign_Operation);
                    }
                    for(int i = 1; i <= MSA - 1; i++){
                        if (Osnovnoi_array[i] == 0){
                            int temp;
                            temp = Osnovnoi_array[i];
                            Osnovnoi_array[i] = Osnovnoi_array[i+1];
                            Osnovnoi_array[i+1] = temp;
                            i = 1;
                        }
                        else
                            break;
                    }
                        for(int i = 1; i <= MSA - 1; i++){
                            printf("%d",Osnovnoi_array[i]);
                        }
                        printf("\n======================= \n");
                    return 1;
                
                
            }
            else if((size1 < size2)){
                printf("Run \n");
                for(int JH = size1-1; JH >= 0; JH--){

                    int c_arr[size2];
                    
                    for(int i = 0; i < size2; i++){
                        c_arr[i] = b_arr[i] * a_arr[JH];
                        printf("** \n");
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
                
                
                    for (int i = 0; i < size2; i++){
                        Osnovnoi_array[i] = Osnovnoi_array[i] + c_arr[i];
        
                   }
                
                    for(int i = MSA-1; i > 0; i--){
                        int temp_array;
                        temp_array = Osnovnoi_array[i];
                        Osnovnoi_array[i] = Osnovnoi_array[i-1];
                        Osnovnoi_array[i-1] = temp_array;

                    }
                }
                for(int i = 0; i < MSA; i++){
                    int tmp, tmpZnach;
                    if (Osnovnoi_array[i] / 10 != 0){
                        tmp = i;
                        i = 0;
                        tmpZnach = Osnovnoi_array[tmp] / 10;
                        Osnovnoi_array[tmp-1] = Osnovnoi_array[tmp-1] + tmpZnach;
                        
                    }
                    else
                        continue;
                    Osnovnoi_array[tmp] = Osnovnoi_array[tmp] % 10;
                }
                
                printf("Куда вывести результат умножения? \n 1 - в файл \n 2 - в консоль \n");
                int operation_3;
                scanf("%d", &operation_3);
                
                if (operation_3 == 1){
                    FILE *f = fopen("output.txt", "w");
                    
                    fprintf(f, "%c", Sign_Operation);
                    for(int i = 1; i <= MSA - 1; i++){
                        if (Osnovnoi_array[i] == 0){
                            int temp;
                            temp = Osnovnoi_array[i];
                            Osnovnoi_array[i] = Osnovnoi_array[i+1];
                            Osnovnoi_array[i+1] = temp;
                            i = 1;
                        }
                        else
                            break;
                    }
                        for(int i = 1; i <= MSA - 1; i++){
                            fprintf(f, "%d" ,Osnovnoi_array[i]);
                        }
                    fclose(f);
                    printf("======================= \n");
                    printf("Ответ записан в файл output.txt \n");
                    printf("======================= \n");
                    return 0;
                }
            }
                else if (operation_3 == 2){
                        printf("Ваш ответ: \n");
                    if (operation_2 == 1){
                        printf("%c",Sign_Operation);
                    }
                    for(int i = 1; i <= MSA - 1; i++){
                        if (Osnovnoi_array[i] == 0){
                            int temp;
                            temp = Osnovnoi_array[i];
                            Osnovnoi_array[i] = Osnovnoi_array[i+1];
                            Osnovnoi_array[i+1] = temp;
                            i = 1;
                        }
                        else
                            break;
                    }
                        for(int i = 1; i <= MSA - 1; i++){
                            printf("%d",Osnovnoi_array[i]);
                        }
                        printf("\n======================= \n");
                    return 1;
                }
            }
        }
        while(2);
}
