// 函数名称: sub_5b6b8d
// 虚拟地址: 0x5b6b8d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6b8d(int32_t* arg1 @ esi, int32_t* arg2 @ edi, EXCEPTION_RECORD* arg3, int32_t arg4, void* arg5, int32_t arg6, void* arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    
    if (arg7 != 0)
        sub_5b6afb(arg3, arg1, entry_ebx, arg7)
    
    int32_t* var_c_2
    
    var_c_2 = arg9 != 0 ? arg9 : arg1
    
    sub_5ab4a0(var_c_2, arg3)
    int32_t var_8_3 = *arg2
    int32_t edx = sub_5b6582(arg1, arg5, arg6)
    int32_t eax_1 = arg2[1] + 1
    arg1[2] = eax_1
    int32_t result = sub_5b67e0(eax_1, edx, entry_ebx[3], arg3, arg1, arg4, arg6, arg8, 0x100)
    
    if (result == 0)
        return result
    
    return _JumpToContinuation(result, arg1)
}
