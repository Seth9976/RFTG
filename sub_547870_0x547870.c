// 函数名称: sub_547870
// 虚拟地址: 0x547870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_547870(void* arg1, void* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x350)
    void* ebx = *(arg1 + 0x350)
    void* var_8 = nullptr
    
    if (*(ebx + 0x858) s<= 0)
        return 
    
    void* ebx_1 = ebx + 0x868
    
    do
        int32_t edx_2 = *(ebx_1 - 4) - 0x1c
        int32_t eax
        
        switch (edx_2)
            case 0, 1, 2, 3, 4
                eax = 0
            case 6, 7, 8, 9, 0xa
                eax = 1
            case 0xc, 0xd, 0xe, 0xf, 0x10
                eax = 2
            case 0x12, 0x13, 0x14, 0x15, 0x16
                eax = 3
            case 0x18, 0x19, 0x1a, 0x1b, 0x1c
                eax = 4
            case 0x1e, 0x1f, 0x20, 0x21, 0x22
                eax = 5
            case 0x24, 0x25, 0x26, 0x27, 0x28
                eax = 6
            case 0x2a, 0x2b, 0x2c, 0x2d, 0x2e
                eax = 7
            default
                eax = 0xffffffff
        
        uint32_t target = 0xde1
        
        if (eax == arg3 && *(arg2 + 0x13f) == 0)
            if (*(arg2 + 0x140) != 0)
                target = 0x8513
            
            switch (edx_2)
                case 0, 6, 0xc, 0x12, 0x18, 0x1e, 0x24, 0x2a
                    int32_t param2 = *ebx_1
                    
                    if (*(arg2 + 0xe8) != param2)
                        glTexParameteri(target, 0x2802, param2)
                        *(arg2 + 0xe8) = *ebx_1
                case 1, 7, 0xd, 0x13, 0x19, 0x1f, 0x25, 0x2b
                    int32_t param2_1 = *ebx_1
                    
                    if (*(arg2 + 0xec) != param2_1)
                        glTexParameteri(target, 0x2803, param2_1)
                        *(arg2 + 0xec) = *ebx_1
                case 2, 8, 0xe, 0x14, 0x1a, 0x20, 0x26, 0x2c
                    int32_t param2_2 = *ebx_1
                    
                    if (*(arg2 + 0xf0) != param2_2)
                        glTexParameteri(target, 0x8072, param2_2)
                        *(arg2 + 0xf0) = *ebx_1
                case 3, 9, 0xf, 0x15, 0x1b, 0x21, 0x27, 0x2d
                    int32_t param2_4 = *ebx_1
                    
                    if (*(arg2 + 0x13d) != 0)
                        if (param2_4 == 0x2700 || param2_4 == 0x2702)
                            param2_4 = 0x2600
                        else if (param2_4 == 0x2701 || param2_4 == 0x2703)
                            param2_4 = 0x2601
                    
                    if (*(arg2 + 0xf4) != param2_4)
                        glTexParameteri(target, 0x2801, param2_4)
                        *(arg2 + 0xf4) = param2_4
                    
                    int32_t eax_2 = *(ebx_1 + 4)
                    
                    if (*(arg2 + 0xfc) != eax_2)
                        *(arg2 + 0xfc) = eax_2
                case 4, 0xa, 0x10, 0x16, 0x1c, 0x22, 0x28, 0x2e
                    int32_t param2_3 = *ebx_1
                    
                    if (*(arg2 + 0xf8) != param2_3)
                        glTexParameteri(target, 0x2800, param2_3)
                        *(arg2 + 0xf8) = *ebx_1
        
        arg1 = var_8 + 1
        ebx_1 += 0x14
        var_8 = arg1
    while (arg1 s< *(ebx + 0x858))
}
