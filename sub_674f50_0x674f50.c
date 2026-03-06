// 函数名称: sub_674f50
// 虚拟地址: 0x674f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_674f50(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char* arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = 1
    
    if (arg7 == 0 || *arg7 != 0x31 || arg8 != 0x38)
        return 0xfffffffa
    
    int32_t edi
    int32_t var_c = edi
    
    if (arg1 == 0)
        return 0xfffffffe
    
    *(arg1 + 0x18) = 0
    
    if (*(arg1 + 0x20) == 0)
        *(arg1 + 0x20) = sub_678650
        *(arg1 + 0x28) = 0
    
    if (*(arg1 + 0x24) == 0)
        *(arg1 + 0x24) = std::_Pocma<class std::allocator<uint16_t> >
    
    if (arg2 == 0xffffffff)
        arg2 = 6
    
    int32_t ebx
    int32_t var_10 = ebx
    int32_t ebx_1 = arg4
    
    if (ebx_1 s< 0)
        var_8_1 = 0
        ebx_1 = neg.d(ebx_1)
        arg4 = ebx_1
    else if (ebx_1 s> 0xf)
        var_8_1 = 2
        ebx_1 -= 0x10
        arg4 = ebx_1
    
    if (arg5 - 1 u> 8 || arg3 != 8 || ebx_1 - 8 u> 7 || arg2 u> 9 || arg6 u> 4)
        return 0xfffffffe
    
    if (ebx_1 == 8)
        arg4 = 9
        ebx_1 = 9
    
    int32_t esi
    int32_t var_14 = esi
    int32_t var_18 = 0x16c4
    int32_t var_1c = 1
    void** eax_5 = (*(arg1 + 0x20))(*(arg1 + 0x28))
    
    if (eax_5 != 0)
        *(arg1 + 0x1c) = eax_5
        eax_5[6] = var_8_1
        eax_5[0xc] = ebx_1
        int32_t ebx_2 = 1 << arg4.b
        int32_t eax_6 = 1 << (arg5 + 7).b
        eax_5[0x14] = arg5 + 7
        eax_5[0xd] = ebx_2 - 1
        eax_5[0x13] = eax_6
        eax_5[0x15] = eax_6 - 1
        *eax_5 = arg1
        eax_5[7] = 0
        eax_5[0xb] = ebx_2
        eax_5[0x16] = (arg5 + 9) u/ 3
        int32_t eax_10 = (*(arg1 + 0x20))(*(arg1 + 0x28), ebx_2, 2)
        int32_t edx_4 = eax_5[0xb]
        eax_5[0xe] = eax_10
        int32_t eax_12 = (*(arg1 + 0x20))(*(arg1 + 0x28), edx_4, 2)
        int32_t edx_5 = eax_5[0x13]
        eax_5[0x10] = eax_12
        eax_5[0x11] = (*(arg1 + 0x20))(*(arg1 + 0x28), edx_5, 2)
        int32_t eax_15 = 1 << (arg5.b + 6)
        eax_5[0x5b0] = 0
        eax_5[0x5a7] = eax_15
        int32_t eax_17 = (*(arg1 + 0x20))(*(arg1 + 0x28), eax_15, 4)
        int32_t ecx_12 = eax_5[0x5a7]
        bool cond:0_1 = eax_5[0xe] == 0
        eax_5[2] = eax_17
        eax_5[3] = ecx_12 << 2
        
        if (not(cond:0_1) && eax_5[0x10] != 0 && eax_5[0x11] != 0 && eax_17 != 0)
            eax_5[0x5a9] = eax_17 + (ecx_12 u>> 1 << 1)
            eax_5[0x5a6] = ecx_12 * 3 + eax_17
            eax_5[0x21] = arg2
            eax_5[0x22] = arg6
            eax_5[9].b = 8
            return sub_6746a0(arg1)
        
        eax_5[1] = 0x29a
        *(arg1 + 0x18) = "insufficient memory"
        sub_6732a0(arg1)
    
    return 0xfffffffc
}
