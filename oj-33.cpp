

double function(int n){
	double sum=1;
	for(int i=0;i<n-1;i++){
		 sum=1/(sum+1);
	}
	return sum;
}
