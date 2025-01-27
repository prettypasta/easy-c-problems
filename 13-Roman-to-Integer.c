int romanToInt(char* s) {
    int current = 0;
    int next = 0; 
    int result = 0;
    while (*s){
        switch (*s){
            case 'I': current = 1; break;
            case 'V': current = 5; break;
            case 'X': current = 10; break;
            case 'L': current = 50; break;
            case 'C': current = 100; break;
            case 'D': current = 500; break;
            case 'M': current = 1000; break;
        }
        next =0;
        if (*(s + 1)) {  
            switch (*(s + 1)) {
                case 'I': next = 1; break;
                case 'V': next = 5; break;
                case 'X': next = 10; break;
                case 'L': next = 50; break;
                case 'C': next = 100; break;
                case 'D': next = 500; break;
                case 'M': next = 1000; break;
            }
        }
    
    if (current<next){
        result-=current;   
    }
    else{
        result+=current;
    }
    
    s++;
    }
    return result;
}
