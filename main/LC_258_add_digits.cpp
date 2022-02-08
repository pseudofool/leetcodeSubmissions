int addDigits(int num) {
    if (num%10 == 0 && num/10 == 0){
        return num;
    }
    
    int unitDigit = num%10;
    int smallAns = addDigits(num/10);
    int temp = unitDigit + smallAns;
    if (temp > 9){
        return (temp%10) + (temp/10);
    }else{
        return temp;
    }
}