#include <iostream>
#include <vector>

void Enter_Matrix_dimentions(std::vector<int> &ref, bool flag);

int main() {
    int num {0};
    std::vector<int> matrix_A_dimentions(2);
    std::vector<int> matrix_B_dimentions(2);
    bool flag = true;

    Enter_Matrix_dimentions(matrix_A_dimentions, flag);

    flag = false;
    Enter_Matrix_dimentions(matrix_B_dimentions, flag);

    std::vector<std::vector<int>> matrix_A (matrix_A_dimentions.at(0), std::vector<int>(matrix_A_dimentions.at(1)));
    std::vector<std::vector<int>> matrix_B (matrix_B_dimentions.at(0), std::vector<int>(matrix_B_dimentions.at(1)));

    std::vector<std::vector<int>> matrix_result (matrix_A_dimentions.at(0), std::vector<int> (matrix_B_dimentions.at(1)));

    std::cout << "Enter elemnts for matrix A: " << std::endl;  
    for (int row {0}; row < matrix_A_dimentions.at(0); row++)
    {
        for (int column {0}; column < matrix_A_dimentions.at(1); column++)
        {
            std::cin >> matrix_A[row][column];
        }
    }

    std::cout << "Enter elemnts for matrix B: " << std::endl;  
    for (int row {0}; row < matrix_B_dimentions.at(0); row++)
    {
        for (int column {0}; column < matrix_B_dimentions.at(1); column++)
        {
            std::cin >> matrix_B[row][column];
        }
    }

    if (matrix_A_dimentions.at(1) == matrix_B_dimentions.at(0))
    {
        std::cout << "Result of matrix multiplication:" << std::endl;
        for (int row {0}; row < matrix_A_dimentions[0]; row++)
        {
            for (int column {0}; column < matrix_B_dimentions.at(1); column++)
            {
                matrix_result[row][column] = 0;
                for (int i = 0; i < matrix_A_dimentions.at(1); i++)
                {
                    matrix_result[row][column] += matrix_A[row][i] * matrix_B[i][column];
                }
                
            }
        }  
    }

    for (int row {0}; row < matrix_A_dimentions.at(0); row++)
    {
        for (int column {0}; column < matrix_B_dimentions.at(1); column++)
        {
            std::cout << matrix_result[row][column] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


void Enter_Matrix_dimentions(std::vector<int> &ref, bool flag) {
    if (flag)
    {
        std::cout << "Enter dimentions for matrix A (rows columns): ";
    }
    else 
    {
        std::cout << "Enter dimentions for matrix B (rows columns): ";
    }

    for (int i {0}; i < 2; i++)
    {
        std::cin >> ref.at(i);
    }
}