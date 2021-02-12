#include "TreeNode.h"
#include <iostream>
#include "raylib.h"

TreeNode::TreeNode(int value)
{
	m_value = value;
}

void TreeNode::draw(int x, int y, bool selected)
{
	//creates an array to store the value converted to a string
	static char buffer[10];

	//converts the value given to a string and stores it in a buffer
	sprintf(buffer, "%d", m_value);

	DrawCircle(x, y, 30, YELLOW);
	//if node is selected it'll turn green otherwise it will be black
	if (selected)
		DrawCircle(x, y, 28, GREEN);
	else
	{
		DrawCircle(x, y, 28, BLACK);
	}
	DrawText(buffer, x - 12, y - 12, 12, WHITE);
}