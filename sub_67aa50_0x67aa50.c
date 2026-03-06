// 函数名称: sub_67aa50
// 虚拟地址: 0x67aa50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67aa50(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1[6]
    int32_t ecx = esi[1]
    char* ebx = *esi
    
    if (ecx == 0)
        int32_t result = esi[3](arg1)
        
        if (result == 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
        
        ebx = *esi
        ecx = esi[1]
    
    uint32_t edi_1 = zx.d(*ebx) << 8
    void* ebx_1 = &ebx[1]
    int32_t ecx_3 = ecx - 1
    
    if (ecx == 1)
        if (esi[3](arg1) == 0)
        label_67ab69:
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        ebx_1 = *esi
        ecx_3 = esi[1]
    
    int32_t ecx_4 = ecx_3 - 1
    int32_t edi_3 = edi_1 + zx.d(*ebx_1) - 2
    void* ebx_2 = ebx_1 + 1
    int32_t var_1c_1 = ecx_4
    int32_t var_28_1
    int32_t eax_6
    
    if (edi_3 s< 0xe)
        int32_t eax_7
        eax_7.b = edi_3 s<= 0
        eax_6 = (eax_7 - 1) & edi_3
        var_28_1 = eax_6
    else
        eax_6 = 0xe
        var_28_1 = 0xe
    
    int32_t edx_3 = 0
    int32_t var_24_1 = 0
    char var_18[0x10]
    
    if (eax_6 != 0)
        do
            if (ecx_4 == 0)
                if (esi[3](arg1) == 0)
                    goto label_67ab69
                
                ebx_2 = *esi
                edx_3 = var_24_1
                ecx_4 = esi[1]
            
            eax_6.b = *ebx_2
            var_18[edx_3] = eax_6.b
            eax_6 = var_28_1
            edx_3 += 1
            ecx_4 -= 1
            ebx_2 += 1
            var_1c_1 = ecx_4
            var_24_1 = edx_3
        while (edx_3 u< eax_6)
    
    int32_t ecx_6 = arg1[0x68]
    int32_t edi_4 = edi_3 - eax_6
    
    if (ecx_6 == 0xe0)
        sub_67a730(eax_6, arg1.b, edi_4, arg1, &var_18)
    else if (ecx_6 == 0xee)
        sub_67a990(&var_18, arg1, eax_6, arg1, edi_4)
    else
        *(*arg1 + 0x14) = 0x44
        *(*arg1 + 0x18) = arg1[0x68]
        (**arg1)(arg1)
    
    *esi = ebx_2
    esi[1] = var_1c_1
    
    if (edi_4 s> 0)
        (*(arg1[6] + 0x10))(arg1, edi_4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
