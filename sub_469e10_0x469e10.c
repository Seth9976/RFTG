// 函数名称: sub_469e10
// 虚拟地址: 0x469e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_469e10(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg2)
    void* eax = sub_46b2b0(arg2)
    int32_t* var_c
    
    if (*(eax + 0xaa0) != 0)
        int32_t ecx_1 = *(eax + 0xa9c)
        var_c = *(eax + 0xa98)
        *(eax + 0xaa0) = 0
        int32_t var_10 = ecx_1
        sub_469e10(arg1, arg2, 0xd, 0, &var_c, 1, &var_10, 1, 1)
    
    if (*(eax + 0xaa1) != 0)
        int32_t ecx_2 = *(eax + 0x24)
        *(eax + 0xaa1) = 0
        sub_469e10(arg1, arg2, 5, ecx_2, 0, 0, 0, 0, 1)
    
    if (*(eax + 0xaa2) != 0)
        int32_t edx_1 = *(eax + 0x24)
        *(eax + 0xaa2) = 0
        sub_469e10(arg1, arg2, 5, edx_1, 0, 0, 0, 0, 1)
    
    int32_t eax_3 = arg2 * 0xb4
    int32_t* ecx_4 = *(eax_3 + arg1 + 0xc0) + (*(eax_3 + arg1 + 0xc4) << 2)
    *ecx_4 = arg3
    ecx_4[1] = arg4
    var_c = ecx_4
    void* ecx_5
    
    if (arg6 == 0)
        ecx_4[2] = 0
        ecx_5 = &ecx_4[3]
    else
        ecx_4[2] = arg6
        ecx_5 = &ecx_4[3]
        int32_t eax_5 = 0
        
        if (arg6 s> 0)
            do
                *ecx_5 = *(arg5 + (eax_5 << 2))
                eax_5 += 1
                ecx_5 += 4
            while (eax_5 s< arg6)
    
    void* ecx_6
    
    if (arg8 == 0)
        *ecx_5 = 0
        ecx_6 = ecx_5 + 4
    else
        *ecx_5 = arg8
        ecx_6 = ecx_5 + 4
        int32_t eax_6 = 0
        
        if (arg8 s> 0)
            do
                *ecx_6 = *(arg7 + (eax_6 << 2))
                eax_6 += 1
                ecx_6 += 4
            while (eax_6 s< arg8)
    
    struct _EXCEPTION_REGISTRATION_RECORD** result = (ecx_6 - *(eax_3 + arg1 + 0xc0)) s>> 2
    *(eax_3 + arg1 + 0xc4) = result
    
    if (*(arg1 + 0x18) != 0)
        return result
    
    data_27e7a74 = result * 4
    int32_t* eax_11 = var_c
    data_27e7a80 = 0
    return sub_469bd0(eax_3 + arg1 + 0x20, eax_11)
}
