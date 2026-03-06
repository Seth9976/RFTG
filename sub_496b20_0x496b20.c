// 函数名称: sub_496b20
// 虚拟地址: 0x496b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_496b20(int128_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    // 第一条实际指令: int32_t ebx = arg9
    int32_t ebx = arg9
    int32_t esi = arg10
    
    if (esi s> ebx)
        return 
    
    int32_t edi_1 = arg11
    
    while (true)
        int32_t arg_34
        int32_t arg_38
        int32_t arg_3c
        
        if (ebx == 0)
            int32_t eax
            int80_t st0_1
            st0_1, eax = sub_496980(arg12, arg5, edi_1, arg4, arg1, arg2, arg3, arg7, arg8, &arg_3c, 
                &arg_34, &arg_38)
            break
        
        sub_496b20(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, ebx - 1, esi, edi_1 * 2, arg12, 
            arg_34, arg_38, arg_3c)
        
        if (esi == 0)
            break
        
        esi -= 1
        ebx -= 1
        edi_1 = edi_1 * 2 + 1
        
        if (esi s> ebx)
            return 
}
