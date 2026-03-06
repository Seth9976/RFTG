// 函数名称: sub_672710
// 虚拟地址: 0x672710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_672710(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (*(ebx + 9) != 8 || *(ebx + 0xa) != 1)
        return 
    
    char* eax_4
    int32_t edx_1
    char* esi_1
    bool cond:2_1
    
    if (arg3 == 1)
        int32_t i_4 = *ebx
        esi_1 = arg2
        edx_1 = 0
        eax_4 = esi_1
        int32_t ecx_3 = 0x80
        
        if (i_4 != 0)
            int32_t i
            
            do
                if (*eax_4 != 0)
                    edx_1 |= ecx_3
                
                eax_4 = &eax_4[1]
                
                if (ecx_3 s<= 1)
                    *esi_1 = edx_1.b
                    esi_1 = &esi_1[1]
                    ecx_3 = 0x80
                    edx_1 = 0
                else
                    ecx_3 s>>= 1
                
                i = i_4
                i_4 -= 1
            while (i != 1)
            cond:2_1 = ecx_3 == 0x80
        label_672804:
            
            if (not(cond:2_1))
                *esi_1 = edx_1.b
    else if (arg3 == 2)
        int32_t* edi_1 = *ebx
        esi_1 = arg2
        edx_1 = 0
        eax_4 = esi_1
        int32_t ecx_2 = 6
        
        if (edi_1 != 0)
            arg1 = edi_1
            int32_t* i_1
            
            do
                edx_1 |= (zx.d(*eax_4) & 3) << ecx_2.b
                
                if (ecx_2 != 0)
                    ecx_2 -= 2
                else
                    *esi_1 = edx_1.b
                    esi_1 = &esi_1[1]
                    ecx_2 = 6
                    edx_1 = 0
                
                eax_4 = &eax_4[1]
                i_1 = arg1
                arg1 -= 1
            while (i_1 != 1)
            cond:2_1 = ecx_2 == 6
            goto label_672804
    else if (arg3 == 4)
        int32_t i_3 = *ebx
        esi_1 = arg2
        edx_1 = 0
        eax_4 = esi_1
        int32_t ecx_1 = 4
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                edx_1 |= (zx.d(*eax_4) & 0xf) << ecx_1.b
                
                if (ecx_1 != 0)
                    ecx_1 -= 4
                else
                    *esi_1 = edx_1.b
                    esi_1 = &esi_1[1]
                    ecx_1 = 4
                    edx_1 = 0
                
                eax_4 = &eax_4[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            ebx = arg1
            cond:2_1 = ecx_1 == 4
            goto label_672804
    eax_4.b = arg3.b
    *(ebx + 9) = eax_4.b
    eax_4.w = muls.dp.b(eax_4.b, *(ebx + 0xa))
    *(ebx + 0xb) = eax_4.b
    uint32_t eax_5 = zx.d(eax_4.b)
    
    if (eax_4.b u>= 8)
        ebx[1] = (eax_5 u>> 3) * *ebx
        return 
    
    ebx[1] = (eax_5 * *ebx + 7) u>> 3
}
