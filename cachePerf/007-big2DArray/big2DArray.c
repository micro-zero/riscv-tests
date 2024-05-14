
#define ARRAY_SIZE 128

int main() {
    int res = 0;
    int num[ARRAY_SIZE][ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num[i][j] = i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            num[i][j] += i + j;
    for (int i = 0; i < ARRAY_SIZE; i++) 
        for (int j = 0; j < ARRAY_SIZE; j++)
            res += num[i][j] >= 0 ? 0 : 1;
    return !(res == 0);
}