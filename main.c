#include <stdio.h>
#include "Matric .h"
#include "Matric_int.h"
#include "stdlib.h"
#include "string.h"
#include "compl_num.h"
#include "Matric_compl.h"
int main() {
    int pass = 0;
    int type;
    int size;
    printf("�롥�� ⨯ ������\n");
    while (pass == 0)
    {
        printf("1-���� 楫�� �᫥� || 2-���� ���������� �᫥� \n");
        scanf("%d", &type);
        if ((type == 1) || (type == 2))
        {
            pass = 1;
        }
        else
        {
            printf("������ ���祭�� �� �५�������!\n");
            printf("________________________________\n");
        }
    }
    while (pass == 1)
    {
        printf("�롥�� ࠧ��� ������ n>0\n");
        scanf("%d", &size);
        if (size > 0)
        {
            pass = 2;
        }
        else
        {
            printf("������ ���祭�� �� ����� 0\n");
            printf("____________________________\n");
        }
    }

    struct Matric Mat1;
    if (type == 1)
    {
        printf("������ ������ ������\n");
        Mat1 = init_int_Matric(sizeof(int), size,vvod_int_Matric(size));
    }
    else if (type == 2)
    {
        printf("������ ������ ������, ࠧ����� ����⢥���� ���� � ������ �஡����\n");
        Mat1 = init_compl_Matric(sizeof(struct compl), size, vvod_compl_Matric(size));
    }
    printf("____________________________\n");
    printf("�� ����� ������:\n");
    print_Matric(Mat1);
    printf("____________________________\n");

    int action;
    printf("�롥�� ����⢨� ��� ����楩\n");
    while (pass == 2)
    {
        printf("1-��������� || 2-�������� || 3-�࠭ᯮ��஢���� \n");
        scanf("%d", &action);
        if ((action == 1) || (action == 2) || (action == 3))
        {
            pass = 3;
        }
        else
        {
            printf("������ ���祭�� �� �५�������!\n");
            printf("________________________________\n");
        }
    }
    printf("________________________________\n");
    if (action ==1)
    {
        printf("������ ������ ������ ��ன ������ ��� 㬭������\n");
        struct Matric Mat2;
        struct Matric Mat3;
        if (type == 1)
        {
            Mat2 = init_int_Matric(sizeof(int), size, vvod_int_Matric(size));
        }
        else if (type == 2)
        {
            Mat2 = init_compl_Matric(sizeof(struct compl), size, vvod_compl_Matric(size));
        }
        printf("�� ����� ������:\n");
        print_Matric(Mat2);
        printf("________________________________\n");
        Mat3 = mult_Matric(Mat1,Mat2);
        printf("������� 㬭������:\n");
        print_Matric(Mat3);
    }
    if (action ==2)
    {
        printf("������ ������ ������ ��ன ������ ��� �㬬�஢����\n");
        struct Matric Mat2;
        struct Matric Mat3;
        if (type == 1)
        {
            Mat2 = init_int_Matric(sizeof(int), size, vvod_int_Matric(size));
        }
        else if (type == 2)
        {
            Mat2 = init_compl_Matric(sizeof(struct compl), size, vvod_compl_Matric(size));
        }
        printf("�� ����� ������:\n");
        print_Matric(Mat2);
        printf("________________________________\n");
        Mat3 = sum_Matric(Mat1,Mat2);
        printf("������� ᫮�����:\n");
        print_Matric(Mat3);
    }
    if (action ==3)
    {
        trans_Matric(&Mat1);
        printf("������� �࠭ᯮ��஢����:\n");
        print_Matric(Mat1);
    }
    return 0;
}
