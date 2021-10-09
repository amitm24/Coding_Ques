int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0; i<size; i++){
		//int j=0;
        bool a = true;     //assuming the element is unique.
        for(int j=0;j<size;j++){
        
            if(i!=j && arr[i] == arr[j]){
                a = false;   //element is not unique
                break;
            }
        }
    	if (a == true){
        	return arr[i];
        }   
    }
}