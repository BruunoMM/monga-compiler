foo(): int { 
    # just some comment
    
    sometInt: int;
    someChar: char;
    someFloat: float;

    someInt = 127;
    someChar = 'c';
    someFloat = 0x03e-4;

    while(someInt > 100) {
        bar();
        someFunction(someChar, someFloat);
        someInt = someInt - 1;
    }
    return 0;
}