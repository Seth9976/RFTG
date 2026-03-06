// 函数名称: sub_679800
// 虚拟地址: 0x679800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_679800(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[5] != 0xcd)
        *(*esi + 0x14) = 0x14
        *(*esi + 0x18) = esi[5]
        (**esi)(esi)
    
    int32_t ecx_3 = esi[0x23]
    
    if (ecx_3 u>= esi[0x1d])
        *(*esi + 0x14) = 0x7b
        (*(*esi + 4))(esi, 0xffffffff)
        return 0
    
    void* eax_5 = esi[2]
    
    if (eax_5 != 0)
        *(eax_5 + 4) = ecx_3
        *(esi[2] + 8) = esi[0x1d]
        (*esi[2])(esi)
    
    void* eax_7 = esi[0x6a]
    arg1 = nullptr
    (*(eax_7 + 4))(esi, arg2, &arg1, arg3)
    int32_t* result = arg1
    esi[0x23] += result
    return result
}
