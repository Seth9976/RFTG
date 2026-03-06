// 函数名称: sub_5d6810
// 虚拟地址: 0x5d6810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5d6810(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t var_c = arg9
    int32_t var_c = arg9
    char* result = sub_5d6670(0, 0, 0, arg4, arg6, arg7, arg8)
    
    if (result == 0)
        return result
    
    *result |= 1
    *(result + 0x14) = arg1
    *(result + 8) = arg2
    *(result + 0xc) = arg3
    *(result + 0x10) = arg5
    sub_5d5f90(result, nullptr)
    return result
}
