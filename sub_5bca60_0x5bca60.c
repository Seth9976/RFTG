// 函数名称: sub_5bca60
// 虚拟地址: 0x5bca60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bca60(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = sub_5bf410(arg1)
    int32_t* result = sub_5bf410(arg1)
    
    if (result == 0)
        return result
    
    *result = arg2
    int32_t entry_ebx
    result[1] = entry_ebx
    
    if ((entry_ebx.b & 0x10) != 0)
        result[5] |= 2
        result[6] |= 2
    
    return result
}
