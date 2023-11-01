#include <iostream>
using namespace std;
void filling(bool*& nums, int i, int n)
{
	if (i < n){
		nums[i] = rand() % 2;
		i++;
		filling(nums, i, n);}
}
void extract(bool*& nums, int i, int n)
{
	if (i < n){
		cout << nums[i] << ' ';
		i++;
		extract(nums, i, n);}
}
int finding(bool * nums, int n)
{
	int i = 0, max = 0, curr = 0;
	while (i < n)
	{
		if (nums[i] == 1){
			curr++;
			if (curr > max)
				max = curr;}
		else { curr = 0; }
		i++;	
	}
	return max;
}
int main()
{
	int n;
	do {
		cout << "Enter array size(1 - 100 000): ";
		cin >> n;
	} while (n <= 0 || n >= 100000);
	bool* nums = new bool[n];
	srand(time(NULL));
	filling(nums, 0, n);
	extract(nums, 0, n);
	cout << "Result "<<finding(nums, n);
}