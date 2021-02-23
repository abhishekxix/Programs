#include <iostream>

using namespace std;

int main()
{
	int scores[] {100, 95, 89};
	cout << "Value of scores :: " << scores << endl;

	int *score_ptr {scores};
	cout << "Value of score_ptr :: " << score_ptr << endl;

	cout << "\n------------Array subscript notation------------\n"
		 << "scores[0] :: " << scores[0] << endl
		 << "scores[1] :: " << scores[1] << endl
		 << "scores[2] :: " << scores[2] << endl;

	cout << "\n------------Pointer subscript notation------------\n"
		 << "score_ptr[0] :: " << score_ptr[0] << endl
		 << "score_ptr[1] :: " << score_ptr[1] << endl
		 << "score_ptr[2] :: " << score_ptr[2] << endl;

	cout << "\n------------Array offset notation------------\n"
		 << "*scores :: " << *scores << endl
		 << "*(scores + 1) :: " << *(scores + 1) << endl
		 << "*(scores + 2) :: " << *(scores + 2) << endl;


	cout << "\n------------Pointer offset notation------------\n"
		 << "*score_ptr :: " << *score_ptr << endl
		 << "*(score_ptr + 1) :: " << *(score_ptr + 1) << endl
		 << "*(score_ptr + 2) :: " << *(score_ptr + 2) << endl;

	return 0;
}