// 函数名称: sub_5cb480
// 虚拟地址: 0x5cb480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cb480(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg1[5]
    int32_t ecx = arg1[5]
    int32_t edx = arg1[6]
    arg1[0xd] = arg1[4]
    void* result = arg1[7]
    arg1[0xe] = ecx
    arg1[0xf] = edx
    arg1[0x10] = result
    
    if (arg2.b s< 0)
        result = sub_5c9d50(arg1)
    
    if ((arg2.b & 0x40) != 0)
        result = sub_5c9da0(arg1)
    
    if ((arg2.b & 1) != 0)
        result = sub_5cb220(arg1, arg2)
    
    if ((arg2 & 0x100) != 0)
        result = sub_5ca010(arg1, 1)
    
    if ((arg2.b & 8) != 0)
        return result
    
    return sub_5c9ca0(arg1)
}
