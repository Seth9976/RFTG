// 函数名称: sub_5df620
// 虚拟地址: 0x5df620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5df620(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    int32_t i_1 = *(result + 0x18)
    int32_t esi = *(result + 0x10)
    char* edx = esi + i_1 - 1
    int32_t* esi_1 = esi + (i_1 << 2) - 4
    
    if (i_1 != 0)
        int32_t i
        
        do
            int32_t eax_1 = sx.d(*edx) << 0x18
            *esi_1 =
                ((eax_1 & 0xff0000) | eax_1 u>> 0x10) u>> 8 | ((eax_1 & 0xff00) | eax_1 << 0x10) << 8
            edx -= 1
            esi_1 -= 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = arg1
    
    int32_t ecx = *(result + 0x18)
    *(result + 0x50) += 1
    *(result + 0x18) = ecx * 4
    int32_t ecx_3 = *(result + 0x50)
    
    if (*(result + (ecx_3 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_3 << 2) + 0x28))(result, 0x9020)
}
