// 函数名称: sub_4f3bd0
// 虚拟地址: 0x4f3bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f3bd0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi, int32_t* arg5 @ edi, int32_t arg6)
{
    // 第一条实际指令: if (arg6(arg4, arg5, arg3) != 0)
    if (arg6(arg4, arg5, arg3) != 0)
        int32_t eax_1 = *arg4
        int32_t ecx = arg4[1]
        *arg4 = *arg5
        arg4[1] = arg5[1]
        *arg5 = eax_1
        arg5[1] = ecx
    
    int32_t* entry_ebx
    
    if (arg6(entry_ebx, arg4) != 0)
        int32_t eax_3 = *entry_ebx
        int32_t ecx_1 = entry_ebx[1]
        *entry_ebx = *arg4
        entry_ebx[1] = arg4[1]
        *arg4 = eax_3
        arg4[1] = ecx_1
    
    int32_t result = arg6(arg4, arg5)
    
    if (result.b != 0)
        result = *arg4
        int32_t ecx_2 = arg4[1]
        *arg4 = *arg5
        arg4[1] = arg5[1]
        *arg5 = result
        arg5[1] = ecx_2
    
    return result
}
