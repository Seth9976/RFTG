// 函数名称: sub_497900
// 虚拟地址: 0x497900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_497900(int128_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t* arg12, int32_t* arg13, double* arg14)
{
    // 第一条实际指令: int32_t esi = arg10
    int32_t esi = arg10
    
    while (esi != arg9)
        sub_497900(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, esi + 1, arg11, arg12, arg13, 
            arg14)
        int32_t eax_5 = 1 << esi.b
        esi += 1
        arg11 |= eax_5
    
    int32_t result
    int80_t st0
    st0, result = sub_497490(esi, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, 0, 0, arg11, 
        arg12, arg13, arg14)
    return result
}
