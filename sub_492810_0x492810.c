// 函数名称: sub_492810
// 虚拟地址: 0x492810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_492810(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    long double x87_r6 = fconvert.t(9.9999999999999995e-07)
    int32_t* edi = arg1
    long double x87_r7_1 = fconvert.t(*(esi + 0x10)) + x87_r6
    long double temp1 = fconvert.t(*(edi + 0x10))
    x87_r7_1 - temp1
    int32_t eax
    eax.w = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        return 1
    
    long double x87_r7_3 = fconvert.t(*(esi + 0x10)) - x87_r6
    long double temp2 = fconvert.t(*(edi + 0x10))
    x87_r7_3 - temp2
    eax.w = (x87_r7_3 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp2) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp2 ? 1 : 0) << 0xe
    
    if ((eax:1.b & 0x41) == 0)
        return eax | 0xffffffff
    
    int32_t eax_3 = edi[1]
    int32_t ebx = 0
    
    if (eax_3 s> 0)
        int32_t* esi_1 = esi - edi
        void* ecx_1 = &edi[6]
        arg1 = esi_1
        
        while (true)
            int32_t edx_1 = *ecx_1
            int32_t esi_2 = *(esi_1 + ecx_1)
            
            if (edx_1 s> esi_2)
                return 1
            
            if (edx_1 s< esi_2)
                return 0xffffffff
            
            ebx += 1
            ecx_1 += 4
            
            if (ebx s>= eax_3)
                break
            
            esi_1 = arg1
        
        esi = arg2
    
    int32_t eax_4 = eax_3 - edi[2]
    int32_t ebx_1 = 0
    
    if (eax_4 s<= 0)
        return 0
    
    void* esi_3 = esi - edi
    int32_t* ecx_2 = &edi[0x14e]
    arg1 = esi_3
    
    while (true)
        int32_t edx_2 = *ecx_2
        int32_t esi_4 = *(ecx_2 + esi_3)
        
        if (edx_2 s> esi_4)
            return 1
        
        if (edx_2 s< esi_4)
            return 0xffffffff
        
        ebx_1 += 1
        ecx_2 = &ecx_2[1]
        
        if (ebx_1 s>= eax_4)
            return 0
        
        esi_3 = arg1
}
