// Resolução da Segunda Atividade Avaliativa da Disciplina de Programação Aplicada
//Nome da atividade: EA2_Programacao_Aplicada
#include <iostream>

using namespace std;
void numsMaxMin(int* nums, int num, int* min, int* max);

int main()
{

	cout << endl << endl;
	return 0;
}

void numsMaxMin(int* nums, int num, int* min, int* max) {

    *min = nums[0];
    *max = nums[0];

    for (int i = 1; i < num; i++) {
        if (nums[i] > *max) {
            *max = nums[i];
        }
        else if (nums[i] < *min) {
            *min = nums[i];
        }
    }
}