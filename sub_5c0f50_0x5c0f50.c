// 函数名称: sub_5c0f50
// 虚拟地址: 0x5c0f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c0f50(int32_t* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* result = sub_5c0ee0(arg4, arg2, arg3)
    char* result = sub_5c0ee0(arg4, arg2, arg3)
    
    if (result == 0)
        zip_error_set(arg5, 0xe, result)
        return 0
    
    int32_t edi = *(result + 4)
    
    if (sub_5c2020(arg1, edi, arg2, arg3, arg5) s>= 0)
        return result
    
    if (result[1] != 0)
        __free_base(edi)
    
    __free_base(result)
    return 0
}
