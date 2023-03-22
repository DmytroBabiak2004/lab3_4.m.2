#include <iostream>
using namespace std;

int main() {
    // �������� �������
    double A[3][3] = { {0.65, -0.93, 0.45},
                      {1.15, 0.43, -0.72},
                      {0.56, -0.18, 1.03} };
    double B[3] = { -0.72, 1.24, 2.15 };  // �������� ������� ������ ������

    // ����������� �������� �������
    double det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
        - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
        + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    double invA[3][3] = { {(A[1][1] * A[2][2] - A[1][2] * A[2][1]) / det, -(A[0][1] * A[2][2] - A[0][2] * A[2][1]) / det, (A[0][1] * A[1][2] - A[0][2] * A[1][1]) / det},
                         {-(A[1][0] * A[2][2] - A[1][2] * A[2][0]) / det, (A[0][0] * A[2][2] - A[0][2] * A[2][0]) / det, -(A[0][0] * A[1][2] - A[0][2] * A[1][0]) / det},
                         {(A[1][0] * A[2][1] - A[1][1] * A[2][0]) / det, -(A[0][0] * A[2][1] - A[0][1] * A[2][0]) / det, (A[0][0] * A[1][1] - A[0][1] * A[1][0]) / det} };

    // ����'������ ������� ������
    double X[3] = { 0, 0, 0 };  // ������ ����'����
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            X[i] += invA[i][j] * B[j];
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << "Answer:\t";
        cout<< X[i]<<'\t';
    }
}
