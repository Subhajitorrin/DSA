int makeBeautiful(string str) {
    // create two counter to track both sequence 
    // 010101
    // 101010
	int count1=0,count2=0;

    // for 0101
    for(int i=0;i<str.length();i++){
        /*
        for 0101 if even place doesn't have 0 then count1++
        also if in odd place doesn't have 1 then count1++
        */
        if(i%2==0 && str[i]!='0')count1++;
        if(i%2!=0 && str[i]!='1')count1++;
    }

    // for 1010
    for(int i=0;i<str.length();i++){
        /*
        for 1010 if even place doesn't have 1 then count2++
        also if in odd place doesn't have 0 then count2++
        */
        if(i%2==0 && str[i]!='1')count2++;
        if(i%2!=0 && str[i]!='0')count2++;
    }

    // return which count is minimum
    return min(count1,count2);
}