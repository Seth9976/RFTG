// 函数名称: sub_60af00
// 虚拟地址: 0x60af00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60af00(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg2 + 4)
    int32_t eax = *(arg2 + 4)
    void* edx = *(arg2 + 0x44)
    uint32_t esi_3
    
    if (eax == 0 || (eax & 0xf0000000) == 0x10000000)
        esi_3 = zx.d(eax.b)
    else if (eax == 0x32595559 || eax == 0x59565955 || eax == 0x55595659)
        esi_3 = 2
    else
        esi_3 = 1
    
    int32_t eax_1 = *(edx + 0x1c)
    return sub_60a8a0(arg1, arg2, edx + 0x20, 
        *(edx + 0x24) * eax_1 + *(edx + 0x20) * esi_3 + *(edx + 0x18), eax_1)
}
