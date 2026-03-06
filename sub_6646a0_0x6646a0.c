// 函数名称: sub_6646a0
// 虚拟地址: 0x6646a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6646a0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, char arg7, char arg8, char arg9)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    int32_t ebx
    ebx.b = arg8
    *(arg2 + 0x1a) = ebx.b
    ebx.b = arg9
    *(arg2 + 0x1b) = ebx.b
    ebx.b = arg7
    arg2[7].b = ebx.b
    *(arg2 + 0x19) = arg6
    arg2[6].b = arg5
    *arg2 = arg3
    arg2[1] = arg4
    sub_662890(arg1, arg3, arg4, zx.d(arg5), zx.d(arg6), zx.d(arg7), zx.d(arg8), zx.d(arg9))
    char eax_2 = *(arg2 + 0x19)
    
    if (eax_2 == 3 || (eax_2 & 2) == 0)
        *(arg2 + 0x1d) = 1
    else
        *(arg2 + 0x1d) = 3
    
    if ((eax_2 & 4) != 0)
        *(arg2 + 0x1d) += 1
    
    eax_2 = muls.dp.b(arg2[6].b, *(arg2 + 0x1d))
    *(arg2 + 0x1e) = eax_2
    
    if (arg3 u> 0x1fffff8e)
        arg2[3] = 0
        return 
    
    uint32_t eax_3 = zx.d(eax_2)
    
    if (eax_2 u>= 8)
        arg2[3] = (eax_3 u>> 3) * arg3
        return 
    
    arg2[3] = (eax_3 * arg3 + 7) u>> 3
}
