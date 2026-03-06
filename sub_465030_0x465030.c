// 函数名称: sub_465030
// 虚拟地址: 0x465030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_465030(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_3 = (arg3 - arg1) s/ 0x14
    int32_t eax_3 = (arg3 - arg1) s/ 0x14
    
    if (eax_3 s<= 0x28)
        int32_t __saved_ebx = arg4
        return sub_465530(arg3, arg2, arg1, arg4)
    
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t edx_3 = edx_2 & 7
    int32_t eax_7 = (eax_5 + edx_3) s>> 3
    int32_t ebx_2 = eax_7 * 0x14
    int32_t* esi_1 = &arg1[eax_7 * 5]
    int32_t var_1c = arg4
    int32_t var_20 = arg4
    int32_t* esi_4 = arg3 - ebx_2
    int32_t var_24 = arg4
    int32_t var_28 = arg4
    return sub_465530(esi_4, arg2, esi_1, 
        sub_465530(arg3, esi_4, arg3 - eax_7 * 0x28, 
            sub_465530(&arg2[eax_7 * 5], arg2, arg2 - ebx_2, 
                sub_465530(&arg1[eax_7 * 0xa], esi_1, arg1, edx_3))))
}
