// Resolução da Segunda Atividade Avaliativa da Disciplina de Programação Aplicada
// Nome da atividade: EA2_Programacao_Aplicada
// Feito consulta no stackoverflow no link https://pt.stackoverflow.com/questions/34060/como-criar-um-vetor-de-tamanho-vari%C3%A1vel
// para verificar como poderia usar um vetor com tamanho variavel.

#include <iostream>

using namespace std;

void numsMaxMin(int* nums, int num, int* min, int* max);

int main()
{
    int num, * nums, min, max;

    cin >> num;
    nums = (int*)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < num; i++) {
        cout << nums[i] << ",";
    }

    cout << endl;
    numsMaxMin(nums, num, &min, &max);
    cout << "Max=" << max << ", Min=" << min << ".";

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