// 函数名称: sub_6833c0
// 虚拟地址: 0x6833c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6833c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    void* edi = ebx[0x73]
    int32_t eax_1 = sub_6832d0(ebx, edi + 0x20)
    void* eax_2 = *ebx
    
    if (ebx[0x1e] != 3)
        *(eax_2 + 0x14) = 0x5f
        *(*ebx + 0x18) = eax_1
        (*(*ebx + 4))(ebx, 1)
    else
        *(eax_2 + 0x18) = eax_1
        *(eax_2 + 0x1c) = *(edi + 0x20)
        *(eax_2 + 0x20) = *(edi + 0x24)
        *(eax_2 + 0x24) = *(edi + 0x28)
        *(*ebx + 0x14) = 0x5e
        (*(*ebx + 4))(ebx, 1)
    
    int32_t eax_6 = (*(ebx[1] + 8))(ebx, 1, eax_1, ebx[0x1e])
    int32_t var_10 = eax_1
    
    if (ebx[0x1e] s<= 0)
        *(edi + 0x14) = eax_1
        *(edi + 0x10) = eax_6
        return eax_6
    
    int32_t* var_14_1 = edi + 0x20
    int32_t i = 0
    
    do
        int32_t ecx_6 = *var_14_1
        int32_t temp0_1 = divs.dp.d(sx.q(var_10), ecx_6)
        
        if (ecx_6 s> 0)
            int32_t eax_11
            int32_t edx_8
            edx_8:eax_11 = sx.q(ecx_6 - 1)
            int32_t eax_13 = (eax_11 - edx_8) s>> 1
            int32_t var_28_1 = eax_13
            int32_t j_1 = 0
            int32_t var_8_1 = 0
            int32_t var_1c_1 = ecx_6
            
            while (true)
                for (int32_t j = j_1; j s< eax_1; j += var_10)
                    int32_t ecx_7 = 0
                    
                    if (temp0_1 s> 0)
                        do
                            char* ebx_4 = *(eax_6 + (i << 2)) + ecx_7
                            ecx_7 += 1
                            ebx_4[j] = (divs.dp.d(sx.q(eax_13 + var_8_1), ecx_6 - 1)).b
                        while (ecx_7 s< temp0_1)
                        
                        ebx = arg1
                
                var_8_1 += 0xff
                j_1 += temp0_1
                int32_t temp2_1 = var_1c_1
                var_1c_1 -= 1
                
                if (temp2_1 == 1)
                    break
                
                eax_13 = var_28_1
        
        var_14_1 = &var_14_1[1]
        i += 1
        var_10 = temp0_1
    while (i s< ebx[0x1e])
    
    *(edi + 0x10) = eax_6
    *(edi + 0x14) = eax_1
    return edi
}
