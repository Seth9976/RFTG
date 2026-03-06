// 函数名称: sub_60cdf0
// 虚拟地址: 0x60cdf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_60cdf0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t ebx = arg9
    int32_t ebx = arg9
    int32_t var_c
    int32_t eax_2
    int32_t edx
    
    if (arg6 == 0)
        int32_t var_1c = arg3
        int32_t var_14_1 = arg3 + arg7
        int32_t var_18_1 = arg1
        int32_t var_10_1 = arg1 + arg8
        eax_2, edx = (*(*arg4 + 0x4c))(arg4, 0, &var_c, &var_1c, 0)
    else
        eax_2, edx = (*(*arg4 + 0x4c))(arg4, 0, &var_c, 0, 0x2000)
    
    if (eax_2 s< 0)
        char const* const __saved_esi = "LockRect()"
        sub_60c740(eax_2, edx)
        return 0xffffffff
    
    int32_t var_8
    int32_t esi = var_8
    uint32_t eax_6
    
    if (arg5 == 0 || (arg5 & 0xf0000000) == 0x10000000)
        eax_6 = zx.d(arg5.b)
    else if (arg5 == 0x32595559 || arg5 == 0x59565955 || arg5 == 0x55595659)
        eax_6 = 2
    else
        eax_6 = 1
    
    int32_t edi_1 = arg7 * eax_6
    
    if (edi_1 == arg10 && edi_1 == var_c)
        int32_t var_2c_2 = edi_1 * arg8
        int32_t var_30_2 = ebx
        int32_t var_34_1 = esi
        sub_5cd110()
    else if (arg8 s> 0)
        arg6 = arg8
        int32_t i
        
        do
            int32_t var_2c_3 = edi_1
            int32_t var_30_3 = ebx
            int32_t var_34_2 = esi
            sub_5cd110()
            ebx += arg10
            esi += var_c
            i = arg6
            arg6 -= 1
        while (i != 1)
    
    (*(*arg4 + 0x50))(arg4, 0)
    return 0
}
