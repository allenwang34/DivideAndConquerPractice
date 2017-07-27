class Inversion {
public:
	
	Inversion(int Nums[], int size);
	int getResult();

private:

	int InverCounter;
	int size;
	int *Nums;
	void sort_and_count(int Nums[], int size);
	void divideInHalf(int Nums[], int size);
	
};

Inversion::Inversion(int Nums[], int size) :Nums(Nums), size(size), InverCounter(0) {};

int Inversion::getResult() { return InverCounter; }

void Inversion::sort_and_count(int Nums[], int size) {
	//if (size == 1)
		return;

}

void Inversion::divideInHalf(int Nums[], int size) {
	if (size == 1)
		return;


}