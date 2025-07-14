xor eax,eax            ;zero out the eax register
mov eax, 5000          ;move the milliseconds value into eax (5000)
push eax               ;push the function parameter onto the stack 
mov ebx, 0x77E2C466    ;move the address of Sleep into ebx
call ebx               ;call the function - Sleep(ms);