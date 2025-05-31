//sum of multiples 3 or 5
int solution(int number) 
{   if (number <= 0){
        return 0 ;
    }
    number = number - 1 ;
    int s3 = number/3 ;
    int s5 = number/5  ;
    int s15 = number/15 ;
    return 3 * (s3 * (s3 + 1)) / 2 + 5 * (s5 * (s5 + 1)) / 2 - 15 * (s15 * (s15 + 1)) / 2 ;//corrections
}

