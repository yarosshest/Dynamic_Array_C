struct Matric_int
{
    int* mas;
};
struct Matric init_int_Matric(int element_size, int size, void* ar);
struct Matric mult_int_Matric(struct Matric,struct Matric);
struct Matric sum_int_Matric(struct Matric,struct Matric);
struct Matric trans_int_Matric(struct Matric);
void print_int_Matric(struct Matric);
int * vvod_int_Matric(int size);