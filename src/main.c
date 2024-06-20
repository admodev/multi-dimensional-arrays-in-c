#include <stdio.h>

#define DIM1 5
#define DIM2 5
#define DIM3 5
#define DIM4 5

void iterateMultiDimArray(int arr[DIM1][DIM2][DIM3][DIM4], int dim1, int dim2, int dim3, int dim4) {
	for (int i = 0; i < dim1; ++i) {
		for (int j = 0; j < dim2; ++j) {
			for (int k = 0; k < dim3; ++k) {
				for (int l = 0; l < dim4; ++l) {
					printf("%d ", arr[i][j][k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main() {
	int dynamic_arr[3][4][3][4] = {
		{
			{{1, 0, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 0}},
			{{1, 0, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 0}},
			{{1, 0, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 0}},
			{{1, 0, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}, {1, 0, 1, 0}}
		},
		{
			{{0, 1, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}},
			{{0, 1, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}},
			{{0, 1, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}},
			{{0, 1, 1, 0}, {1, 0, 1, 0}, {0, 1, 1, 0}, {1, 0, 0, 1}}
		},
		{
			{{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}},
			{{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}},
			{{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}},
			{{1, 1, 1, 1}, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}}
		}
	};

	int dim1 = sizeof(dynamic_arr) / sizeof(dynamic_arr[0]);
	int dim2 = sizeof(dynamic_arr[0]) / sizeof(dynamic_arr[0][0]);
	int dim3 = sizeof(dynamic_arr[0][0]) / sizeof(dynamic_arr[0][0][0]);
	int dim4 = sizeof(dynamic_arr[0][0][0]) / sizeof(dynamic_arr[0][0][0][0]);

	iterateMultiDimArray(dynamic_arr, dim1, dim2, dim3, dim4);

	return 0;
}

