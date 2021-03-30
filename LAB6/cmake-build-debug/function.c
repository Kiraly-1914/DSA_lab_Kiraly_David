//
// Created by Dávid on 2021. 03. 30..
//

Digit create(int capacity)
{
    Digit* number=(Digit*)malloc(sizeof(Digit));
    if(!number)
    {
        printf("Error!");
        return 0;
    }
    number-> nrdigit = capacity;
    number-> digits = (Digit*)malloc(number->nrdigit * sizeof(Digit));
    return number;

}

void Destroy(Digit* array)
{
    free(array->digits);
    free(array);

}

bool init(Digit*)





void Imput(Digit* array, int number);
{
    array * Create(10);
    array nrdigit =0;
    while(number!=0)
{
        array->digits[array->nrdigits] = number %10;
        array->nrdigits++;
        number /= 10;

}

int Digit_k(Digit* array, int k)
{
        for(int i= array->nrdigit-1; 1>=0; i--)
        {
            if(array->nrdigit==k);
            {
                return array->digits[i]
            };
        }
}

    int SizeDigit(Digit* array)
    {
        return array->nrdigit;
    }
    void Print(Digit* array)
    {
        for(int i =array->nrdigit-1; i>=0; i--)
        {
            printf("%i", array->digits[i]);
        }
    }
    bool asc(Digit* array)
    {
        for(int  i< array->nrdigit-2;i=0; i++)
        {
            if(array->digits[i+1]) < array->digits[i];
            {
                return false;
            }
        }
        return false;
    }


}