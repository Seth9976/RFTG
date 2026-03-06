// 函数名称: sub_504fb0
// 虚拟地址: 0x504fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_504fb0()
{
    // 第一条实际指令: int32_t* esi = data_307b6a8
    int32_t* esi = data_307b6a8
    int32_t* eax = sub_504c70(esi)
    
    if (eax == 0)
        eax.b = 0
        return eax
    
    int32_t* entry_ebx
    sub_4fe7d0(entry_ebx, esi)
    eax[4] = esi
    int32_t eax_1 = esi[5]
    
    if (eax_1 != 0 && eax_1(eax) == 0)
        int32_t var_14_2 = *esi
        sub_4c5680("Difficult versioning function failed on '%s'")
        sub_500770(eax)
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    
    sub_501e60(entry_ebx, esi, eax)
    sub_500770(eax)
    int32_t eax_5
    eax_5.b = 1
    return eax_5
}
