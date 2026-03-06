// 函数名称: sub_664500
// 虚拟地址: 0x664500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_664500(void* arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if (result != 0 && arg2 != 0)
        result = sub_6637a0(result, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
        
        if (result != 0)
            *(arg2 + 8) |= 4
            *(arg2 + 0x80) = arg3
            result = arg6
            *(arg2 + 0x84) = arg4
            *(arg2 + 0x88) = arg5
            *(arg2 + 0x8c) = result
            *(arg2 + 0x90) = arg7
            *(arg2 + 0x94) = arg8
            *(arg2 + 0x98) = arg9
            *(arg2 + 0x9c) = arg10
    
    return result
}
