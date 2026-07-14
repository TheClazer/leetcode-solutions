/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0 */
 int guess(int num);
 

int guessNumber(int n){
	int high = n, low=1;
    int mid;
    while(1){
        mid=low + (high-low)/2;
        int g = guess(mid);
        if(g==-1){
            high=mid-1;
        }
        if(g==1){
            low=mid+1;
        }
        if(g==0){
            return mid;
        }
    }
}