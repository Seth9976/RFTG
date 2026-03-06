// 函数名称: sub_4cfa10
// 虚拟地址: 0x4cfa10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4cfa10(uint32_t arg1)
{
    // 第一条实际指令: uint32_t edi
    uint32_t edi
    
    if (*arg1 == 0)
        sub_5a9831(*(arg1 + 0x14), nullptr, FILE_END)
        edi = sub_5a9a41(*(arg1 + 0x14))
    else
        edi = *(arg1 + 0xc)
    
    int128_t* entry_ebx
    
    if (edi u>= 0xc && sub_4cd310(arg1, 0xc, entry_ebx).b != 0 && *entry_ebx == 0x5850434b
            && *(entry_ebx + 4) == 7)
        arg1.b = edi s>= *(entry_ebx + 8) * 0xa8
        return arg1
    
    arg1.b = 0
    return arg1
}
