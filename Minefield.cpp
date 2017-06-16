#include "Minefield.h"

void main(){}

MineGrid::MineGrid(std::array<std::array<char, 5>, 5> input)
{
    m_mineGrid = input;
}

std::array<std::array<char, 5>, 5> MineGrid::Minesweep()
{
    std::array<std::array<char, 5>, 5> outputGrid;

    for (int y = 0; y < m_ySize; y++)
    {
        for (int x = 0; x < m_xSize; x++)
        {
            if (m_mineGrid[x][y] == '*')
            {
                outputGrid[x][y] = '*';
            }
            else
            {
                outputGrid[x][y] = '0';
            }
        }
    }

    return outputGrid;
}