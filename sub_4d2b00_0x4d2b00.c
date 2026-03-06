// 函数名称: sub_4d2b00
// 虚拟地址: 0x4d2b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d2b00(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* result_1 = data_be1a60
    void* result_1 = data_be1a60
    void* result = nullptr
    void* ecx_1 = result_1 + data_be1a64 * 0x24
    
    do
        if (result != 0)
            result += 0x24
        else
            result = result_1
        
        if (result u>= ecx_1)
            return 0
        
        while ((*(result + 0x20) & 0xffff0000) == 0)
            result += 0x24
            
            if (result u>= ecx_1)
                return 0
    while (*result != arg1)
    
    return result
}
