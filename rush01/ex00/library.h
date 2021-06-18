#ifndef LIBRARY_H
# define LIBRARY_H

int		ft_check_error (int argc, char *str, int grid);
int		ft_check_parameters(char *str);
void	ft_remove_space (char *str);
int		**ft_create_table (int grid, char *str);
int		ft_fill_borders(int grid, char *str, int **table);
void	ft_putchar(char c);
int		ft_print_table(int **table, int grid);
int		ft_calculate_table(int grid, int **table);
int		ft_rules_1(int grid, int **table);
int		ft_rules_2(int grid, int **table);
int		ft_rules_3(int grid, int **table);
int		ft_rules_4(int grid, int **table);
int		ft_rules_5(int grid, int **table);
int		ft_rules_1_up(int grid, int x, int y, int **table);
int		ft_rules_1_down(int grid, int x, int y, int **table);
int		ft_rules_1_left(int grid, int x, int y, int **table);
int		ft_rules_1_right(int grid, int x, int y, int **table);
int		ft_rules_2_calcul_row(int grid, int x, int y, int **table);
int		ft_rules_2_calcul_col(int grid, int x, int y, int **table);
int		ft_rules_3_calcul_row(int grid, int x, int y, int **table);
int		ft_rules_3_calcul_col(int grid, int x, int y, int **table);
int		ft_rules_4_calcul_row(int grid, int x, int y, int **table);
int		ft_rules_4_calcul_col(int grid, int x, int y, int **table);
int		ft_rules_5_calcul_row(int grid, int x, int y, int **table);
int		ft_rules_5_calcul_col(int grid, int x, int y, int **table);
int		ft_check_final(int grid, int **table);

#endif