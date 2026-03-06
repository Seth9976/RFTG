// 函数名称: sub_402920
// 虚拟地址: 0x402920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_402920(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void* edx = data_27e7a44
    void* edx = data_27e7a44
    void* result = nullptr
    
    do
        if (result != 0)
            result += 0x1c4
        else
            result = *(edx + 0x1c)
        
        int32_t ecx_3 = *(edx + 0x20) * 0x1c4 + *(edx + 0x1c)
        
        if (result u>= ecx_3)
            return 0
        
        while ((*(result + 0x1c0) & 0xffff0000) == 0)
            result += 0x1c4
            
            if (result u>= ecx_3)
                return 0
    while (*result != *arg1)
    
    return result
}
