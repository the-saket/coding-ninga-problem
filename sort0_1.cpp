void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
     int count = 0;

    for(int i = 0; i < size; i++) {

        if(input[i] == 0) {

            count++;

        }

    }

    int j;

    for(j = 0; j < count; j++) {

        input[j] = 0;

    }

    for(int k = j; k < size; k++) {

        input[k] = 1;

    }
}
