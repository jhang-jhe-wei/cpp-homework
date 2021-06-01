#pragma once
template <class N>
double absoluteValue(N a, N b) //AbsoluteValue
{
	double x = a - b;
	if (x < 0)x *= -1;
	return x;
}

