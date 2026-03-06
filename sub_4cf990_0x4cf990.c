// 函数名称: sub_4cf990
// 虚拟地址: 0x4cf990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4cf990(void* arg1, int32_t arg2, void* arg3, int128_t* arg4, void* arg5)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    int32_t ecx
    int32_t* entry_ebx
    
    if (*arg3 == 0)
        result, ecx = sub_5a9831(*(arg3 + 0x14), arg1, FILE_BEGIN)
        
        if (result == 0)
            result, ecx = sub_5a9cf0(arg4, entry_ebx, 1, *(arg3 + 0x14))
            result.b = result == 1
        else
            result.b = 0
        
        goto label_4cf9e8
    
    if (sub_4cd390(arg1, arg2, arg3, arg1).b != 0)
        result, ecx = sub_4cd310(arg3, entry_ebx, arg4)
    label_4cf9e8:
        
        if (result.b != 0)
            int32_t var_14_4 = 0
            return sub_4ceca0(arg5, entry_ebx, arg4, arg4, ecx) != 0
    
    result.b = 0
    return result
}
