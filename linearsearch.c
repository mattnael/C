int linearSearch(const int array[], int key, int size){
	int n;
	for (n = 0; n < size; ++n){
		if (array[n] == key){
			return n;
		}
	}
	
	return 0;
}
