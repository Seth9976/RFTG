// 函数名称: sub_5bc9e0
// 虚拟地址: 0x5bc9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bc9e0(void* arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: if (*(arg2 + 8) == *(arg1 + 8) && *(arg2 + 0xc) == *(arg1 + 0xc) && *(arg2 + 0x10) == *(arg1 + 0x10) && *(arg2 + 0x14) == *(arg1 + 0x14) && sub_5bf130(*(arg2 + 0x30), *(arg1 + 0x30)) != 0)
    if (*(arg2 + 8) == *(arg1 + 8) && *(arg2 + 0xc) == *(arg1 + 0xc) && *(arg2 + 0x10) == *(arg1 + 0x10)
            && *(arg2 + 0x14) == *(arg1 + 0x14) && sub_5bf130(*(arg2 + 0x30), *(arg1 + 0x30)) != 0)
        int32_t eax_3 = *(arg1 + 0x18)
        
        if (*(arg2 + 0x18) == eax_3 && *(arg2 + 0x20) == *(arg1 + 0x20)
                && *(arg2 + 0x24) == *(arg1 + 0x24) && *(arg2 + 0x28) == *(arg1 + 0x28)
                && *(arg2 + 0x2c) == *(arg1 + 0x2c))
            return 0
        
        if ((*(arg1 + 0xa) & 8) != 0 && eax_3 == 0 && (*(arg1 + 0x20) | *(arg1 + 0x24)) == 0
                && (*(arg1 + 0x28) | *(arg1 + 0x2c)) == 0)
            return 0
    
    return 0xffffffff
}
