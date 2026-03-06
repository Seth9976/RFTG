// 函数名称: sub_677d50
// 虚拟地址: 0x677d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_677d50(void* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi = *arg2
    int32_t edi = *arg2
    int32_t* eax_1 = arg2[2]
    int32_t edx = eax_1[3]
    int32_t ebx = *eax_1
    int32_t ecx = 0xffffffff
    int32_t eax_2 = 0
    int32_t var_8 = 0xffffffff
    *(arg1 + 0x1450) = 0
    *(arg1 + 0x1454) = 0x23d
    
    if (edx s> 0)
        do
            if (*(edi + (eax_2 << 2)) == 0)
                *(edi + (eax_2 << 2) + 2) = 0
            else
                *(arg1 + 0x1450) += 1
                *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = eax_2
                var_8 = eax_2
                *(eax_2 + arg1 + 0x1458) = 0
                ecx = eax_2
            
            eax_2 += 1
        while (eax_2 s< edx)
    
    if (*(arg1 + 0x1450) s< 2)
        do
            int32_t eax_3
            
            if (ecx s>= 2)
                eax_3 = 0
            else
                ecx += 1
                eax_3 = ecx
            
            *(arg1 + 0x1450) += 1
            *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = eax_3
            *(edi + (eax_3 << 2)) = 1
            *(arg1 + eax_3 + 0x1458) = 0
            *(arg1 + 0x16a8) -= 1
            
            if (ebx != 0)
                *(arg1 + 0x16ac) -= zx.d(*(ebx + (eax_3 << 2) + 2))
        while (*(arg1 + 0x1450) s< 2)
        
        var_8 = ecx
    
    arg2[1] = ecx
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = sx.q(*(arg1 + 0x1450))
    
    for (int32_t i = (eax_6 - edx_4) s>> 1; i s>= 1; i -= 1)
        int32_t i_1 = i
        edx_4 = sub_676ae0(arg1, edi, edx_4)
    
    int32_t var_c_1 = edx
    
    do
        int32_t eax_10 = *(arg1 + 0x1450)
        int32_t ecx_1 = *(arg1 + (eax_10 << 2) + 0xb5c)
        int32_t ebx_2 = *(arg1 + 0xb60)
        *(arg1 + 0x1450) = eax_10 - 1
        int32_t var_18_1 = 1
        *(arg1 + 0xb60) = ecx_1
        sub_676ae0(arg1, edi, edx_4)
        int32_t eax_13 = *(arg1 + 0xb60)
        *(arg1 + 0x1454) -= 1
        *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = ebx_2
        *(arg1 + 0x1454) -= 1
        *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = eax_13
        *(edi + (var_c_1 << 2)) = *(edi + (eax_13 << 2)) + *(edi + (ebx_2 << 2))
        int16_t edx_5
        edx_5.b = *(arg1 + ebx_2 + 0x1458)
        int32_t ecx_4
        ecx_4.b = *(arg1 + eax_13 + 0x1458)
        char edx_6 = edx_5.b
        
        if (edx_5.b u< ecx_4.b)
            edx_6 = ecx_4.b
        
        *(arg1 + var_c_1 + 0x1458) = edx_6 + 1
        uint32_t edx_7 = zx.d(var_c_1.w)
        *(edi + (eax_13 << 2) + 2) = edx_7.w
        *(edi + (ebx_2 << 2) + 2) = edx_7.w
        *(arg1 + 0xb60) = var_c_1
        int32_t var_18_2 = 1
        var_c_1 += 1
        edx_4 = sub_676ae0(arg1, edi, edx_7)
    while (*(arg1 + 0x1450) s>= 2)
    
    *(arg1 + 0x1454) -= 1
    int32_t edx_8 = *(arg1 + 0xb60)
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = edx_8
    int32_t var_18_3 = var_8
    return sub_677cd0(var_8, arg1 + 0xb3c, edi, sub_676bc0(arg1, edx_8, arg2))
}
