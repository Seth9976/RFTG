// 函数名称: sub_6489a0
// 虚拟地址: 0x6489a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_6489a0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = *(arg1 + 0x1c)
    int32_t eax = sub_685f40(fconvert.t(*(esi + 0xd48)))
    int32_t ecx_2 = *(*(esi + 0xd44) + 4)
    long double x87_r7_2 = fconvert.t(*(esi + 0xd48)) - float.t(eax)
    
    if (ecx_2 != 0)
        return (x87_r7_2 * fconvert.t(*(ecx_2 + (eax << 3) + 8))
            + (float.t(1) - x87_r7_2) * fconvert.t(*(ecx_2 + (eax << 3)))) * float.t(*(arg1 + 4))
    
    return fconvert.t(-1.0)
}
