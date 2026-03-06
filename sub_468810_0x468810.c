// 函数名称: sub_468810
// 虚拟地址: 0x468810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_468810(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* edx = data_27e7a44
    void* edx = data_27e7a44
    void* result = nullptr
    
    do
        if (result != 0)
            result += 0x200
        else
            result = *(edx + 0x38)
        
        int32_t ecx_3 = (*(edx + 0x3c) << 9) + *(edx + 0x38)
        
        if (result u>= ecx_3)
            return 0
        
        while ((*(result + 0x1f8) & 0xffff0000) == 0)
            result += 0x200
            
            if (result u>= ecx_3)
                return 0
    while (*(result + 0x1d4) != arg1)
    
    return result
}
