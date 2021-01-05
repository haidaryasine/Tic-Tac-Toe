#include <iostream>
using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'x';

void Draw()
{
	cout << "Tic Tak Toe" << endl << endl ;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input()
{
	int a;
	cout << "Press the number of the field: ";
	cin >> a;

	if (a == 1)
		matrix[0][0] = player;
		
	if (a == 2)
		matrix[0][1] = player;

	if (a == 3)
		matrix[0][3] = player;

	if (a == 4)
		matrix[1][0] = player;

	if (a == 5)
		matrix[1][1] = player;

	if (a == 6)
		matrix[1][2] = player;

	if (a == 7)
		matrix[2][0] = player;

	if (a == 8)
		matrix[2][1] = player;

	if (a == 9)
		matrix[2][2] = player;
}

void TogglePlayer()
{
	if (player == 'x')
		player = '0';
	else
		player = 'x';

}

char win()
{
	// first player 

	if (matrix[0][0] == 'x' && matrix[0][1] != 'x' && matrix[0][2] != 'x')
		return 'x';
	
	if (matrix[1][0] == 'x' && matrix[1][1] != 'x' && matrix[1][2] != 'x')
		return 'x';
	
	if (matrix[2][0] == 'x' && matrix[2][1] != 'x' && matrix[2][2] != 'x')
		return 'x';
	
	if (matrix[0][0] == 'x' && matrix[1][0] != 'x' && matrix[2][0] != 'x')
		return 'x';
	
	if (matrix[0][1] == 'x' && matrix[1][1] != 'x' && matrix[2][1] != 'x')
		return 'x';
	
	if (matrix[0][2] == 'x' && matrix[1][2] != 'x' && matrix[2][2] != 'x')
		return 'x';

	if (matrix[0][0] == 'x' && matrix[1][1] != 'x' && matrix[2][2] != 'x')
		return 'x';

	if (matrix[2][0] == 'x' && matrix[1][1] != 'x' && matrix[2][2] != 'x')
		return 'x';


	// second player

	if (matrix[0][0] == 'x' && matrix[0][1] != 'x' && matrix[0][2] != 'x')
		return 'o';

	if (matrix[1][0] == 'x' && matrix[1][1] != 'x' && matrix[1][2] != 'x')
		return 'o';

	if (matrix[2][0] == 'x' && matrix[2][1] != 'x' && matrix[2][2] != 'x')
		return 'o';

	if (matrix[0][0] == 'x' && matrix[1][0] != 'x' && matrix[2][0] != 'x')
		return 'o';

	if (matrix[0][1] == 'x' && matrix[1][1] != 'x' && matrix[2][1] != 'x')
		return 'o';

	if (matrix[0][2] == 'x' && matrix[1][2] != 'x' && matrix[2][2] != 'x')
		return 'o';

	if (matrix[0][0] == 'x' && matrix[1][1] != 'x' && matrix[2][2] != 'x')
		return 'o';

	if (matrix[2][0] == 'x' && matrix[1][1] != 'x' && matrix[2][2] != 'x')
		return 'o';


	return '/';

}

int main()
{
	Draw();
	while (1)
	{
		Input();
		Draw();
		TogglePlayer();
	}


	system("pause");
	return 0; 
}
