// 函数名称: sub_602b00
// 虚拟地址: 0x602b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BSTRsub_602b00(int32_t* arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: void* eax = *arg1
    void* eax = *arg1
    int32_t ebx = 0
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t var_14
    (*(eax + 0x28))(arg1, &var_14)
    int32_t var_8
    (*(*arg1 + 0x24))(arg1, &var_8)
    (*(*arg1 + 0x38))(arg1, &var_18)
    int32_t ecx = var_8
    *(arg2 + 0x14a8) = var_14
    *(arg2 + 0x14a0) = ecx
    sub_6027f0(arg2)
    int32_t var_c
    (*(*arg1 + 0x30))(arg1, 0, 0, &var_c)
    int32_t eax_5 = var_c
    BSTR bstrString
    int32_t eax_10
    int32_t var_10_1
    
    if (eax_5 == 0)
        eax_10 = var_10_1
    else
        int32_t var_24_4 = eax_5 << 2
        BSTR bstrString_1 = sub_5d0ac0()
        bstrString = bstrString_1
        
        if (bstrString_1 == 0)
            eax_10 = var_10_1
        else
            (*(*arg1 + 0x30))(arg1, bstrString_1, var_c, &var_c)
            int32_t eax_7 = var_18
            BSTR bstrString_2 = bstrString
            ebx = *(bstrString_2 + (eax_7 << 2))
            int32_t eax_8
            
            if (eax_7 u>= var_c - 1)
                eax_8 = var_8
            else
                eax_8 = *(bstrString_2 + (eax_7 << 2) + 4)
                int32_t edx_8 = var_8
                
                if (edx_8 u< eax_8)
                    eax_8 = edx_8
            
            BSTR bstrString_3 = bstrString_2
            var_10_1 = eax_8 - ebx
            sub_5d0af0()
            eax_10 = 0xa
            
            if (var_10_1 u< 0xa)
                eax_10 = var_10_1
    *(arg2 + 0x14a8) -= ebx
    int32_t var_24_6 = 0x1400
    *(arg2 + 0x14ac) = eax_10
    int32_t var_28_4 = 0
    void* var_2c_2 = arg2 + 0xa0
    sub_5cd100()
    int32_t i = 0
    BSTR result
    
    if (ebx u< var_8)
        while (i u< *(arg2 + 0x14ac))
            int16_t* ecx_5
            result, ecx_5 = (*(*arg1 + 0x2c))(arg1, ebx, &bstrString)
            
            if (result s>= 0)
                result = bstrString
                
                if (result != 0)
                    BSTR result_1 = result
                    sub_601d30(arg2, i, ecx_5)
                    SysFreeString(bstrString)
            
            i += 1
            ebx += 1
            
            if (ebx u>= var_8)
                break
    
    result.w = *(arg2 + 0x14e4)
    result.w &= 0x3ff
    
    if (result.w == 0x12)
        *(arg2 + 0x14a8) = 0xffffffff
    
    return result
}
