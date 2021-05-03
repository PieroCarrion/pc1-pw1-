#pragma once
int* AgregarElemento(int* N, int* Vector, int Dato)
{
	int* Aux = new int[*N + 1];

	for (int  i = 0; i < *N; i++)
		Aux[i] = Vector[i];

	Aux[*N] = Dato;
	*N = *N + 1;
	return Aux;
}

int* EliminarElemento(int* N, int* Vector, int Pos)
{
	int* Aux = new int[*N - 1];

	for (int i = 0; i < Pos; i++)
		Aux[i] = Vector[i];
	for (int i = Pos + 1; i < *N; i++)
		Aux[i - 1] = Vector[i];

	*N = *N - 1;
	return Aux;
}
int* EliminarRepetidos(int* N, int* Vector, int Elemento)
{

	return 0;
}
int* MayorElemento(int* N, int* Vector) {
	int Mayor=Vector[0];
	for (int i = 0; i < *N; i++)
	{
		if (Mayor>Vector[i])
		{
			Mayor = Vector[i];
		}
	}
	return &Mayor;
}
int* MenorElemento(int* N, int* Vector) {
	int Menor = Vector[*N];
	for (int i = 0; i < *N; i++)
	{
		if (Menor<Vector[i])
		{
			Menor = Vector[i];
		}
	}
	return &Menor;
}
int* OrdenarMayorMenor1(int* N, int* Vector) {
	int orden1;
	for (int i = 0; i < *N; i++)
	{
		for (int j = i; j < *N; j++)
		{
			if (Vector[i] < Vector[j])
			{
				orden1=Vector[i];
				Vector[j] = orden1;
				Vector[i] = Vector[j];
			}
		}
	}
	return Vector;
}
int* OrdenarMenorMayor1(int* N, int* Vector) {
	int orden2;
	for (int i = 0; i < *N; i++)
	{
		for (int j = i; j < *N; j++)
		{
			if (Vector[i] > Vector[j])
			{
				orden2 = Vector[i];
				Vector[j] = orden2;
				Vector[i] = Vector[j];
			}
		}
	}
	return 0;
}