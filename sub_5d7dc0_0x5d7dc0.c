// 函数名称: sub_5d7dc0
// 虚拟地址: 0x5d7dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d7dc0(void* arg1, char arg2, char arg3, char arg4)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 4)
    int32_t* eax = *(arg1 + 4)
    
    if (eax != 0)
        return zx.d(sub_5d7d20(eax, arg2, arg3, arg4, 0xff))
    
    uint32_t eax_5 = zx.d(arg2) u>> *(arg1 + 0x1c) << *(arg1 + 0x20)
        | zx.d(arg3) u>> *(arg1 + 0x1d) << *(arg1 + 0x21)
        | zx.d(arg4) u>> *(arg1 + 0x1e) << *(arg1 + 0x22)
    return eax_5 | *(arg1 + 0x18)
}
