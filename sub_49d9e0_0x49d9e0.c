// 函数名称: sub_49d9e0
// 虚拟地址: 0x49d9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49d9e0(void* arg1 @ esi, int32_t arg2 @ edi, int32_t arg3, int32_t* arg4, int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    // 第一条实际指令: sub_49d720(arg1, arg2)
    sub_49d720(arg1, arg2)
    
    if (*(arg2 * 0xb4 + arg1 + 0xc8) s>= *(arg2 * 0xb4 + arg1 + 0xc4))
        (*(*(arg2 * 0xb4 + arg1 + 0x28) + 0xc))(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, 
            arg10, arg11)
        
        if (*(arg1 + 0x1ec3) != 0)
            return 0xffffffff
        
        int32_t eax_5 = *(*(arg2 * 0xb4 + arg1 + 0x28) + 0x10)
        
        if (eax_5 != 0)
            eax_5(arg1, arg2, arg3)
    
    return sub_49d860(arg5, arg6, arg1, arg2, arg3, arg4, arg5, arg7)
}
