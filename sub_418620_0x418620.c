// 函数名称: sub_418620
// 虚拟地址: 0x418620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_418620(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    void* result = nullptr
    
    while (true)
        if (result != 0)
            result += 0xb0
        else
            result = *(edx + 0x43960)
        
        int32_t ecx_2 = *(edx + 0x43964) * 0xb0 + *(edx + 0x43960)
        
        if (result u>= ecx_2)
            return 0
        
        while ((*(result + 0xac) & 0xffff0000) == 0)
            result += 0xb0
            
            if (result u>= ecx_2)
                return 0
        
        if (*result == 0)
            if (*(result + 0x7c) == arg1)
                break
    
    return result
}
