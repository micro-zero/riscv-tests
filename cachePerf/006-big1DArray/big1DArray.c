
#define ARRAY_SIZE 128

int main() {
    int res = 0;
    int num[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) num[i] = i;
    for (int i = 0; i < ARRAY_SIZE; i++) num[i] += i;
    for (int i = 0; i < ARRAY_SIZE; i++) res += num[i] >= 0 ? 0 : 1;
    return !(res == 0);
}