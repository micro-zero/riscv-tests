
#define ARRAY_SIZE 8

int main() {
    int res = 0;
    int num[ARRAY_SIZE][ARRAY_SIZE][ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            for (int k = 0; k < ARRAY_SIZE; k++)
                num[i][j][k] = i + j + k;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            for (int k = 0; k < ARRAY_SIZE; k++)
                num[i][j][k] += i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            for (int k = 0; k < ARRAY_SIZE; k++)
                res += num[i][j][k] >= 0 ? 0 : 1;
    return !(res == 0);
}