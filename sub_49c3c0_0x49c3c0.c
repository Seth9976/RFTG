// 函数名称: sub_49c3c0
// 虚拟地址: 0x49c3c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49c3c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = arg3
    *(eax + 0x2c) = arg4
    *eax = 0x13
    *(eax + 0x3c) = 0
    int32_t eax_2 = sub_41d070()
    *(eax + 0x30) = eax_2
    int32_t eax_3
    
    if (arg1 != 0xffffffff)
        eax_3 = *sub_46b2b0(arg1)
    else
        eax_3 = eax_2 | arg1
    
    void* edx = data_27e7a40
    *(eax + 4) = eax_3
    *(eax + 8) = 1
    bool cond:0 = *(*(edx + 0x548) + 0x2c068) != 0
    int32_t entry_ebx
    *(eax + 0xc) = entry_ebx
    int32_t eax_5
    eax_5.b = cond:0
    *(eax + 0x38) = zx.d(eax_5.b)
    int32_t eax_7 = sx.d(*(sub_418a10() + entry_ebx * 0x14 + 0x466))
    *(eax + 0x10) = eax_7
    *(eax + 0x14) = arg2
    
    if (arg2 s< 0)
        *(eax + 0x20) = arg2
        *(eax + 0x18) = 0xffffffff
        *(eax + 0x24) = entry_ebx
        *(eax + 0x34) = 0
        return eax_7
    
    int32_t eax_8 = sub_418a10()
    *(eax + 0x18) = sx.d(*(eax_8 + arg2 * 0x14 + 0x466))
    *(eax + 0x20) = arg2
    *(eax + 0x24) = entry_ebx
    *(eax + 0x34) = 0
    return eax_8
}
