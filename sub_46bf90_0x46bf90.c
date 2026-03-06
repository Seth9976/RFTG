// 函数名称: sub_46bf90
// 虚拟地址: 0x46bf90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_46bf90()
{
    // 第一条实际指令: void* eax_1 = data_27e7a40
    void* eax_1 = data_27e7a40
    void* ebx = *(eax_1 + 0x548)
    int32_t esi = *(ebx + 0x2c07c)
    *(ebx + 0x2c07b) = 0
    void* result = sub_463f60(*(eax_1 + 0x548) + 0x43960, esi)
    int32_t edx = *(result + 0x68)
    *(result + 0x78) = fconvert.s(float.t(0))
    __builtin_memcpy(result + 0x2c, result + 0xc, 0x20)
    *(result + 0x58) = *(result + 0x64)
    int32_t ecx_3 = *(result + 0x6c)
    *(result + 0x5c) = edx
    *(result + 0x60) = ecx_3
    *(result + 0x50) = 0xffffffff
    *(result + 0x98) = 0
    *(result + 0x9c) = 0
    
    if (*(result + 0x5c) == 1)
        *(result + 0x70) = 1
    
    int32_t esi_2 = *(ebx + 0x2c088)
    
    if (esi_2 == 0)
        return result
    
    return sub_46b410(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, esi_2)) __tailcall
}
