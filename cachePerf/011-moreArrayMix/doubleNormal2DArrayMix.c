
#define ARRAY_SIZE 32

int main() {
    int res = 0;
    int num[ARRAY_SIZE][ARRAY_SIZE];
    int num1[ARRAY_SIZE][ARRAY_SIZE];
    int num2[ARRAY_SIZE][ARRAY_SIZE];
    int num3[ARRAY_SIZE];
    int num4[ARRAY_SIZE];
    
    for (int i = 0; i < ARRAY_SIZE; i++) num3[i] = i;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num1[i][j] = i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) num4[i] = i;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num2[i][j] = i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) num4[i] += i;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num1[i][j] += i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) num3[i] += i;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num2[i][j] += i + j;

    for (int i = 0; i < ARRAY_SIZE; i++) res += num3[i] >= 0 ? 0 : 1;
            
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            res += num1[i][j] >= 0 ? 0 : 1;

    for (int i = 0; i < ARRAY_SIZE; i++) res += num4[i] >= 0 ? 0 : 1;

    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num[i][j] = num1[i][j] + num2[i][j];
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num[i][j] += i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            res += num[i][j] >= 0 ? 0 : 1;

    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            res += num2[i][j] >= 0 ? 0 : 1;
    return !(res == 0);
}