// 函数名称: sub_66c2b0
// 虚拟地址: 0x66c2b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66c2b0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char ecx = *(arg1 + 9)
    char ecx = *(arg1 + 9)
    int32_t i_8 = *arg1
    
    if (ecx u< 8)
        return 
    
    char* eax
    eax.b = arg1[2].b
    
    if ((eax.b & 2) != 0)
        return 
    
    if (eax.b != 0)
        if (eax.b == 4)
            if (ecx != 8)
                char* ecx_6 = arg2 + (i_8 << 2) - 1
                eax = &ecx_6[i_8 << 2]
                
                if (i_8 != 0)
                    int32_t i_7 = i_8
                    int32_t i
                    
                    do
                        *eax = *ecx_6
                        eax[0xffffffff] = ecx_6[0xffffffff]
                        eax[0xfffffffe] = ecx_6[0xfffffffe]
                        eax[0xfffffffd] = ecx_6[0xfffffffd]
                        eax[0xfffffffc] = ecx_6[0xfffffffe]
                        eax[0xfffffffb] = ecx_6[0xfffffffd]
                        eax[0xfffffffa] = ecx_6[0xfffffffe]
                        eax[0xfffffff9] = ecx_6[0xfffffffd]
                        eax -= 8
                        ecx_6 -= 4
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
            else
                char* ecx_4 = arg2 + (i_8 << 1) - 1
                eax = &ecx_4[i_8 << 1]
                
                if (i_8 != 0)
                    int32_t i_6 = i_8
                    int32_t i_1
                    
                    do
                        *eax = *ecx_4
                        eax[0xffffffff] = ecx_4[0xffffffff]
                        eax[0xfffffffe] = ecx_4[0xffffffff]
                        eax[0xfffffffd] = ecx_4[0xffffffff]
                        eax -= 4
                        ecx_4 -= 2
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
    else if (ecx != 8)
        char* ecx_3 = arg2 + (i_8 << 1) - 1
        eax = &ecx_3[i_8 << 2]
        
        if (i_8 != 0)
            int32_t i_5 = i_8
            int32_t i_2
            
            do
                *eax = *ecx_3
                eax[0xffffffff] = ecx_3[0xffffffff]
                eax[0xfffffffe] = *ecx_3
                eax[0xfffffffd] = ecx_3[0xffffffff]
                eax[0xfffffffc] = *ecx_3
                eax[0xfffffffb] = ecx_3[0xffffffff]
                eax -= 6
                ecx_3 -= 2
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else
        char* ecx_1 = i_8 + arg2 - 1
        eax = &ecx_1[i_8 << 1]
        
        if (i_8 != 0)
            int32_t i_4 = i_8
            int32_t i_3
            
            do
                *eax = *ecx_1
                eax[0xffffffff] = *ecx_1
                eax[0xfffffffe] = *ecx_1
                eax -= 3
                ecx_1 -= 1
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
    
    eax.b = 2
    *(arg1 + 0xa) += 2
    arg1[2].b |= 2
    eax.b = *(arg1 + 9)
    eax.w = muls.dp.b(eax.b, *(arg1 + 0xa))
    *(arg1 + 0xb) = eax.b
    uint32_t eax_3 = zx.d(eax.b)
    
    if (eax.b u>= 8)
        arg1[1] = (eax_3 u>> 3) * i_8
        return 
    
    arg1[1] = (eax_3 * i_8 + 7) u>> 3
}
