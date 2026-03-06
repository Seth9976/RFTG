// 函数名称: sub_49c310
// 虚拟地址: 0x49c310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49c310(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 0x16
    *(eax + 0x3c) = 0
    int32_t eax_1 = sub_41d070()
    *(eax + 0x30) = eax_1
    int32_t eax_2
    
    if (arg1 != 0xffffffff)
        eax_2 = *sub_46b2b0(arg1)
    else
        eax_2 = eax_1 | arg1
    
    *(eax + 4) = eax_2
    void* eax_4 = data_27e7a40
    *(eax + 8) = 1
    bool cond:0 = *(*(eax_4 + 0x548) + 0x2c068) != 0
    *(eax + 0xc) = arg2
    eax_4.b = cond:0
    *(eax + 0x38) = zx.d(eax_4.b)
    int32_t eax_5 = sub_418a10()
    *(eax + 0x10) = sx.d(*(eax_5 + arg2 * 0x14 + 0x466))
    int32_t entry_ebx
    *(eax + 0x14) = entry_ebx
    
    if (entry_ebx s< 0)
        *(eax + 0x34) = 0
        *(eax + 0x18) = 0xffffffff
        return eax_5
    
    int32_t eax_6 = sub_418a10()
    *(eax + 0x18) = sx.d(*(eax_6 + entry_ebx * 0x14 + 0x466))
    *(eax + 0x34) = 0
    return eax_6
}
