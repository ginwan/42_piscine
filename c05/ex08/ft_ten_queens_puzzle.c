
#include <unistd.h>
#include <stdio.h>

int ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

void ft_putchar(char c){
    write(1, &c, 1);
}

void print_board(int board[])
{
    int i;

    i = 0;
    while (i < 10)
    {
        ft_putchar(board[i] + '0');
        i++;
    }
    ft_putchar('\n');
}

// Check if a position is safe
int is_safe(int board[], int col, int row){
    int i;

    i = 0;
    while (i < col)
    {
        // check the row
        if (board[i] == row)
            return (0);
        // check the diagonal
        if(ft_abs(col - i) == ft_abs(row - board[i]))
            return (0);
        i++;
    }
    return (1);
}

// backtracking algorithms
// Place a queen in column 
void solve(int board[], int col, int *count){
    int row = 0;
    if (col == 10)
    {
        print_board(board);
        (*count)++;
        return;
    }
    while (row < 10)
    {
        if(is_safe(board, col, row)){
            board[col] = row;
            solve(board, col + 1, count);
        }
        row++;
    }
}

int ft_ten_queens_puzzle(void){
    int board[10];
    int count = 0;

    solve(board, 0, &count);
    return (count);
}


int main(void)
{
    printf("%d\n", ft_ten_queens_puzzle());
    return 0;
}