// 函数名称: sub_602790
// 虚拟地址: 0x602790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_602790(void* arg1)
{
    // 第一条实际指令: int32_t edi_1 = zx.d(*(arg1 + 0x14e4)) & 0x3ff
    int32_t edi_1 = zx.d(*(arg1 + 0x14e4)) & 0x3ff
    sub_601ab0(arg1)
    
    if (*(arg1 + 0x1504) == 0)
        int32_t eax
        eax.b = *(arg1 + 0x14e4) != 0xe0060404
        *(arg1 + 0x14b0) = eax
    
    int32_t result = sub_6019c0(arg1)
    
    if (edi_1 == (zx.d(*(arg1 + 0x14e4)) & 0x3ff))
        return result
    
    return sub_601b10(arg1)
}
