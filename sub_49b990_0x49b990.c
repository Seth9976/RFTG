// 函数名称: sub_49b990
// 虚拟地址: 0x49b990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49b990(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 0x20
    *(eax + 0x3c) = 0
    int32_t eax_1 = sub_41d070()
    *(eax + 0x30) = eax_1
    int32_t eax_2
    
    if (arg1 != 0xffffffff)
        eax_2 = *sub_46b2b0(arg1)
    else
        eax_2 = eax_1 | arg1
    
    void* ecx = data_27e7a40
    *(eax + 4) = eax_2
    *(eax + 8) = arg2
    bool cond:0 = *(*(ecx + 0x548) + 0x2c068) != 0
    *(eax + 0x14) = 0xffffffff
    int32_t eax_4
    eax_4.b = cond:0
    *(eax + 0x38) = zx.d(eax_4.b)
    int32_t eax_6 = data_bebce4
    *(eax + 0xc) = eax_6
    *(eax + 0x34) = 0
    data_bebce4 = eax_6 + 1
    return eax_6 + 1
}
