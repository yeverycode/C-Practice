#include <stdio.h>

struct Vector3 { // 3���� ���� ��ǥ
    union {          // �͸� ����ü
        struct {         // �͸� ����ü
            float x;         // x ��ǥ
            float y;         // y ��ǥ
            float z;         // z ��ǥ
        };
        float v[3];      // ��ǥ�� �迭�� ����
    };
};

int main()
{
    struct Vector3 pos;

    for (int i = 0; i < 3; i++)    // 3�� �ݺ�
    {
        pos.v[i] = 1.0f;           // v�� �迭�̹Ƿ� �ε����� ���� �� �� ����
    }

    printf("%f %f %f\n", pos.x, pos.y, pos.z);    // 1.000000 1.000000 1.000000: x, y, z�� ����

    return 0;
}