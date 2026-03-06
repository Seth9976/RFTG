// 函数名称: sub_580e60
// 虚拟地址: 0x580e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_580e60(char* arg1)
{
    // 第一条实际指令: char* eax = arg1
    char* eax = arg1
    void* result
    
    if (eax == 0)
    label_580e93:
        WPARAM wParam = 0
        result = SendMessageA(*(data_26a6554 + 0x14), 0x18b, 0, 0)
        
        if (result s> 0)
            do
                LRESULT eax_4 = SendMessageA(*(data_26a6554 + 0x14), 0x199, wParam, 0)
                
                if (eax_4 != 0xffffffff && eax_4 != 0 && *(eax_4 + 0x14) == 0x63)
                    if (arg1 == 0)
                    label_580ee0:
                        
                        if (*(eax_4 + 0x18) != 0)
                            sub_57ebb0(eax_4)
                    else if (__Cnd_wait(*eax_4, arg1) == 0)
                        goto label_580ee0
                
                wParam += 1
                result = SendMessageA(*(data_26a6554 + 0x14), 0x18b, 0, 0)
            while (wParam s< result)
    else
        char i
        
        do
            i = *eax
            eax = &eax[1]
        while (i != 0)
        result = eax - &eax[1] + 1
        
        if (result != 1)
            goto label_580e93
    
    return result
}
