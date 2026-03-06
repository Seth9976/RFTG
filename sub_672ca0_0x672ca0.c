// 函数名称: sub_672ca0
// 虚拟地址: 0x672ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_672ca0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    char ecx = *(eax + 8)
    
    if ((ecx & 2) != 0)
        int32_t i_2 = *eax
        eax.b = *(eax + 9)
        
        if (eax.b != 8)
            if (eax.b == 0x10)
                if (ecx == 2)
                    arg1 = 6
                label_672d12:
                    
                    if (i_2 != 0)
                        eax = arg2 + 1
                        int32_t i_3 = i_2
                        int32_t i
                        
                        do
                            uint16_t esi_4 = (zx.d(*(eax + 1)) << 8).w | zx.w(*(eax + 2))
                            uint32_t ecx_6 = zx.d(((zx.d(*(eax - 1)) << 8).w | zx.w(*eax)) - esi_4)
                            uint32_t edx_6 =
                                zx.d(((zx.d(*(eax + 3)) << 8).w | zx.w(*(eax + 4))) - esi_4)
                            *eax = ecx_6.b
                            *(eax - 1) = (ecx_6 u>> 8).b
                            *(eax + 3) = (edx_6 u>> 8).b
                            *(eax + 4) = edx_6.b
                            eax += arg1
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                else if (ecx == 6)
                    arg1 = 8
                    goto label_672d12
        else
            int32_t esi_1
            
            if (ecx == 2)
                esi_1 = 3
            label_672cd6:
                
                if (i_2 != 0)
                    void* eax_2 = arg2 + 2
                    int32_t i_1
                    
                    do
                        ecx = *(eax_2 - 1)
                        *(eax_2 - 2) -= ecx
                        *eax_2 -= ecx
                        eax_2 += esi_1
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    return eax_2
            else if (ecx == 6)
                esi_1 = 4
                goto label_672cd6
    
    return eax
}
