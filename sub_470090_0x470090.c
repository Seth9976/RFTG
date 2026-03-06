// 函数名称: sub_470090
// 虚拟地址: 0x470090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_470090(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t eax_1 = __security_cookie ^ &var_5c
    void* eax_3 = sub_46b2b0(arg4)
    *(eax_3 + 0x1f34) = *arg3
    *(eax_3 + 0x570) = 0
    int32_t eax_5 = sx.d(*(arg2 + 0x1e6a))
    int32_t eax_6 = eax_5 - 1
    int32_t var_58 = 0
    int32_t edi_1
    
    if (eax_5 - 1 s< 0)
    label_470105:
        void* edx_1 = *(arg2 + arg5 * 0x14 + 0x46c)
        
        if (*(edx_1 + 6) != 2)
            var_58 = sub_4a1730(arg5, arg4, arg2, arg5, 0, 0, arg9, arg10)
            *(eax_3 + 0x1c) = 0xb
            sub_46fb60(arg9, arg4, arg3, arg5, arg10, arg9, arg8, *arg7, eax_3 + 0x1f34)
            *(eax_3 + 0x1f30) = *arg3
            
            if (var_58 s> sub_49c8f0(arg3, arg2, arg4, 2))
                var_58 = 0xffffffff
            
            edi_1 = var_58
        else
            *(eax_3 + 0x1c) = 7
            edi_1 = sub_49f150(arg5, edx_1, arg4, arg5, 0, 0)
    else
        while (sx.d(*(arg2 + eax_6 + 0x1e84)) != arg4)
            int32_t temp1_1 = eax_6
            eax_6 -= 1
            
            if (temp1_1 - 1 s< 0)
                goto label_470105
        
        int32_t ecx_3 = sx.d(*(arg2 + (eax_6 << 1) + 0x1e6c))
        int32_t edx_2 = sx.d(*(arg2 + (eax_6 << 1) + 0x1e90))
        void* eax_10 = arg2 + ecx_3 * 0x14
        *(eax_3 + 0x1c) = 0x1c
        int32_t eax_11 = sub_4a0d70(eax_10, sx.d(*(eax_10 + 0x464)), arg2, ecx_3, 0xffffffff, 1)
        *(eax_3 + 0x1f78) = sub_4a0d70(eax_11, arg4, arg2, ecx_3, edx_2, 0) - eax_11
        *(eax_3 + 0x570) = not.b(*(*(eax_10 + 0x46c) + 0x10)) & 1
        edi_1 = var_58
    
    int32_t edx_13 = *arg7
    int32_t edx_14 = sub_46aca0(eax_3 + 0xaa4, edx_13, arg6, edx_13)
    int32_t ecx_16 = *(eax_3 + 0x1f34)
    *(eax_3 + 0x1a08) = *arg7
    sub_46aca0(eax_3 + 0x1a10, edx_14, arg8, ecx_16)
    *(eax_3 + 0x1f30) = *arg3
    *(eax_3 + 0x24) = arg5
    *(eax_3 + 0x28) = arg9
    *(eax_3 + 0x2c) = arg10
    *(eax_3 + 0x558) = edi_1
    *(eax_3 + 0x554) = edi_1
    *(eax_3 + 0x550) = 0
    char var_59
    int32_t result
    
    if (edi_1 != 0 || *(eax_3 + 0x570) != 0)
        var_59 = 1
        result.b = 1
    else
        result.b = 0
        var_59 = 0
    
    void* esi_2 = *(data_27e7a40 + 0x548)
    
    if (*(esi_2 + 0x2c078) == 1 && result.b == 0 && *(esi_2 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
        result.b = var_59
    
    *(esi_2 + 0x2c078) = result.b
    result.b = result.b == 0
    *(esi_2 + 0x210) = 0
    *(esi_2 + 0x214) = result.b
    sub_5a6aba(eax_1 ^ &var_5c)
    return result
}
