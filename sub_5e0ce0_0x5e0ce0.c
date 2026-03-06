// 函数名称: sub_5e0ce0
// 虚拟地址: 0x5e0ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e0ce0(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    int32_t* edx = *(result + 0x10)
    uint32_t i_1 = *(result + 0x18) u>> 2
    int32_t* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax = *edx
            *esi = ((eax & 0xff0000) | eax u>> 0x10) u>> 8 | ((eax & 0xff00) | eax << 0x10) << 8
            edx = &edx[1]
            esi = &esi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = arg1
    
    *(result + 0x50) += 1
    int32_t ecx_1 = *(result + 0x50)
    
    if (*(result + (ecx_1 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_1 << 2) + 0x28))(result, 0x8020)
}
