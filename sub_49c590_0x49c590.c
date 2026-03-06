// 函数名称: sub_49c590
// 虚拟地址: 0x49c590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49c590(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 0x14
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
    int32_t entry_ebx
    *(eax + 0x24) = entry_ebx
    eax_4.b = cond:0
    *(eax + 0x38) = zx.d(eax_4.b)
    *(eax + 0x20) = arg2
    *(eax + 0x34) = 0
    void* eax_6 = sub_437c30()
    *(eax_6 + 0x28) = 0xffffffff
    *(eax_6 + 0x2c) = 0xffffffff
    *eax_6 = 0x15
    *(eax_6 + 0x3c) = 0
    int32_t eax_7 = sub_41d070()
    *(eax_6 + 0x30) = eax_7
    int32_t eax_8
    
    if (arg1 != 0xffffffff)
        eax_8 = *sub_46b2b0(arg1)
    else
        eax_8 = eax_7 | arg1
    
    void* ecx_1 = data_27e7a40
    *(eax_6 + 4) = eax_8
    *(eax_6 + 8) = 1
    bool cond:1 = *(*(ecx_1 + 0x548) + 0x2c068) != 0
    *(eax_6 + 0xc) = entry_ebx
    eax_8.b = cond:1
    *(eax_6 + 0x38) = zx.d(eax_8.b)
    *(eax_6 + 0x10) = sx.d(*(sub_418a10() + entry_ebx * 0x14 + 0x466))
    *(eax_6 + 0x14) = 0xffffffff
    *(eax_6 + 0x18) = 0xffffffff
    *(eax_6 + 0x34) = 0
    return 0xffffffff
}
