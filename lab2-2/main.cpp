#include <iostream>

int main(){

	int N,M=0;
	int **tab;
	std::cout<<"Podaj N i M:\n";
	std::cin>>N>>M;
	tab=new int*[N];
	for (int i = 0; i < N; i++){//malloc
		tab[i]=new int[M];
	}

	for(int i=1; i<=N; i++){//saving to array and printing
		for(int j=1; j<=M; j++){
			tab[i-1][j-1]=i*j;
			std::cout<<i<<"*"<<j<<"="<<tab[i-1][j-1]<<" ";
		}
		std::cout<<std::endl;	
	}
	for (int i=0; i<N; i++) delete[] tab[i];//freeing memory
	delete[] tab;
	return 0;
}