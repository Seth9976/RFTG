// 函数名称: sub_66ed20
// 虚拟地址: 0x66ed20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66ed20(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    char edx = *(eax + 8)
    
    if ((edx & 2) != 0)
        int32_t i_8 = *eax
        eax.b = *(eax + 9)
        
        if (eax.b != 8)
            if (eax.b == 0x10)
                if (edx != 2)
                    if (edx == 6 && i_8 != 0)
                        eax = arg2 + 1
                        int32_t i_7 = i_8
                        int32_t i
                        
                        do
                            i_8.b = *(eax - 1)
                            *(eax - 1) = *(eax + 3)
                            char edx_4 = *(eax + 4)
                            *(eax + 3) = i_8.b
                            i_8.b = *eax
                            *eax = edx_4
                            *(eax + 4) = i_8.b
                            eax += 8
                            i = i_7
                            i_7 -= 1
                        while (i != 1)
                else if (i_8 != 0)
                    void* eax_2 = arg2 + 1
                    int32_t i_6 = i_8
                    int32_t i_1
                    
                    do
                        i_8.b = *(eax_2 - 1)
                        *(eax_2 - 1) = *(eax_2 + 3)
                        char edx_2 = *(eax_2 + 4)
                        *(eax_2 + 3) = i_8.b
                        i_8.b = *eax_2
                        *eax_2 = edx_2
                        *(eax_2 + 4) = i_8.b
                        eax_2 += 6
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    return eax_2
        else if (edx == 2)
            eax = arg2
            
            if (i_8 != 0)
                int32_t i_4 = i_8
                int32_t i_2
                
                do
                    i_8.b = *eax
                    *eax = *(eax + 2)
                    *(eax + 2) = i_8.b
                    eax += 3
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
        else if (edx == 6)
            eax = arg2
            
            if (i_8 != 0)
                int32_t i_5 = i_8
                int32_t i_3
                
                do
                    i_8.b = *eax
                    *eax = *(eax + 2)
                    *(eax + 2) = i_8.b
                    eax += 4
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
    
    return eax
}
