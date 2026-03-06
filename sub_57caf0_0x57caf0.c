// 函数名称: sub_57caf0
// 虚拟地址: 0x57caf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t**sub_57caf0(int32_t arg1 @ edi, char* arg2, char* arg3, char* arg4, char* arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    int128_t** result = _calloc(eax, edx, ecx, 1, 0x1c)
    result[5] = arg1
    *result = sub_57ca20(arg2)
    result[1] = sub_57ca20(arg3)
    result[4] = sub_57ca20(arg4)
    char* entry_ebx
    
    if (arg1 != 1 && arg1 != 2)
        result[2] = sub_57ca20(entry_ebx)
        result[3] = sub_57ca20(arg5)
        return result
    
    result[2] = sub_57ca80(entry_ebx)
    result[3] = sub_57ca20(arg5)
    return result
}
