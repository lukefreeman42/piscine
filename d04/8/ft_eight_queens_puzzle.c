#define IS_VALID_PLACEMENT(board, row_perm, column_perm) (column_is_valid(board, row_perm, column_perm) && row_is_valid(board, row_perm, column_perm) && diagonal_is_valid(board, row_perm, column_perm) ? 1 : 0)

int		**chess_board(void)
{
	int **board = (int **) malloc (sizeof(int *) * 8);
	int row = 1;
	int column = 'a';

	while (row <= 8)
	{
		*(board + row - 1) = (int *) malloc (sizeof(int) * 8);
		column = 'a';
		while (column <= 'h')
		{
			*(*(board + row - 1) + column - 'a') = 0;
		  	column ++;
		}
		row++;
	}
	return (board);
}

void    print_board(int **board)
{
    int looking_glass;
    int row = 0;
    int column = 0;
    while (row < 8)
    {
        column = 0;
        while (column < 8)
        {
            looking_glass = *(*(board + row) + column);
            printf("%d ", *(*(board + row) + column));
            column++;

        }
        printf("\n");
        row++;
    }
    printf("\n");
}

int     column_is_valid(int **board, int row, int column)
{
    int column_perm = column;
    row = 0;

    while (row < 8)
    {
        if (*(*(board + row) + column_perm) == 1)
            return (0);
        row++;
    }

    return (1);
}

int     row_is_valid(int **board, int row, int column)
{
    int row_perm = row;
    column = 0;

    while (column < 8)
    {
        if (*(*(board + row_perm) + column) == 1)
            return (0);
        column++;
    }

    return (1);
}

int     diagonal_is_valid(int **board, int row, int column)
{
    int row_perm = row;
    int column_perm = column;
    int steps = 1;

    while (steps < 8)
    {
        if (row_perm + steps < 8 && column_perm + steps < 8)
            if (*(*(board + row_perm + steps) + column_perm + steps) == 1)
                return (0);
        if (row_perm + steps < 8 && column_perm - steps >= 0)
            if (*(*(board + row_perm + steps) + column_perm - steps) == 1)
                return(0);
        if (row_perm - steps >= 0 && column_perm + steps < 8)
            if (*(*(board + row_perm - steps) + column_perm + steps) == 1)
                return(0);
        if (row_perm - steps >= 0 && column_perm - steps >= 0)
            if (*(*(board + row_perm - steps) + column_perm - steps) == 1)
                return(0);
        steps++;
    }
    return (1);
}

//EVERYTHING ABOVE ARE SIMPLY HELPER FUNCTIONS

int     i_can_place_her_here(int **board, int row, int column) // input in chess form ex: board, 5, d
{
    int column_perm = column - 'a';
    int row_perm = row - 1;

    if (IS_VALID_PLACEMENT(board, row_perm, column_perm))
        return (1);
    else
        return (0);
}

void    remove_a_queen(int **board, int row, int column) //input in chess form ex: board, 3, g
{
    *(*(board + row - 1) + column - 'a') = 0;
}

void    place_a_queen(int **board, int row, int column) //input in chess form ex: board, 3, g
{
    *(*(board + row - 1) + column - 'a') = 1;
}

int     ft_eight_queens_puzzle(int **board, int row, int column, int num_queens, int * count)
{
    if (num_queens == 8)
    {
        *count += 1;
        //print_board(board);
        return (1);
    }
    if (row > 8 || column > 'h')
        return (0);

    if (i_can_place_her_here(board, row, column))
    {
        place_a_queen(board, row, column);
        num_queens++;
        //print_board(board);
        if (column == 'h')
        {
            if (ft_eight_queens_puzzle(board, row + 1, 'a', num_queens, count))
            {
                remove_a_queen(board, row, column);
                num_queens--;
                return (ft_eight_queens_puzzle(board, row + 1, 'a', num_queens, count));
                //return (1);
            }
            else
            {
                remove_a_queen(board, row, column);
                num_queens--;
                return (ft_eight_queens_puzzle(board, row + 1, 'a', num_queens, count));
            }
        }
        else
        {
            if (ft_eight_queens_puzzle(board, row, column + 1, num_queens, count))
            {
                remove_a_queen(board, row, column);
                num_queens--;
                return (ft_eight_queens_puzzle(board, row, column + 1, num_queens, count));
                //return (1);
            }
            else
            {
                remove_a_queen(board, row, column);
                num_queens--;
                return (ft_eight_queens_puzzle(board, row, column + 1, num_queens, count));
            }
        }

    }
    else
    {
        if (column == 'h')
            return (ft_eight_queens_puzzle(board, row + 1, 'a', num_queens, count));
        else
            return (ft_eight_queens_puzzle(board, row, column + 1, num_queens, count));
    }


}

int		main(int argc, char ** argv)
{
	int **board = chess_board();
    int row = 1;
    int column = 'a';
    int *count = (int *) malloc(sizeof(int));
    while (ft_eight_queens_puzzle(board, row, column, 0, count)) //attempts all possible starting positions.
    {
        if (column == 'h') {
            row++;
            column = 'a';
        }
        else
            column++;
        board = chess_board();
    }
    printf("%d", *count);
	    return (0);
}
