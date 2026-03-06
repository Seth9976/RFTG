// 函数名称: sub_49bc60
// 虚拟地址: 0x49bc60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49bc60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 7
    *(eax + 0x3c) = 0
    *(eax + 0x30) = sub_41d070()
    int32_t eax_2
    
    if (arg1 != 0xffffffff)
        eax_2 = *sub_46b2b0(arg1)
    else
        eax_2 = 0xffffffff
    
    *(eax + 4) = eax_2
    void* eax_4 = data_27e7a40
    *(eax + 8) = 1
    void* ecx
    ecx.b = *(*(eax_4 + 0x548) + 0x2c068) != 0
    *(eax + 0x38) = zx.d(ecx.b)
    
    if (arg1 != *(eax_4 + 0x74))
        int32_t eax_5 = data_bebce4
        *(eax + 0xc) = eax_5
        *(eax + 0x14) = 0xffffffff
        *(eax + 0x34) = 0
        data_bebce4 = eax_5 + 1
        return eax_5 + 1
    
    *(eax + 0xc) = arg2
    int32_t result = sub_418a10()
    *(eax + 0x10) = sx.d(*(result + arg2 * 0x14 + 0x466))
    *(eax + 0x18) = 0xffffffff
    *(eax + 0x34) = 0
    *(eax + 0x14) = 0xffffffff
    return result
}
