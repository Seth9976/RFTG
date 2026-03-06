// 函数名称: sub_49bf50
// 虚拟地址: 0x49bf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_49bf50(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_437c30()
    void* eax = sub_437c30()
    *(eax + 0x28) = 0xffffffff
    *(eax + 0x2c) = 0xffffffff
    *eax = 2
    *(eax + 0x3c) = 0
    *(eax + 0x30) = sub_41d070()
    int32_t eax_3
    
    if (arg1 != 0xffffffff)
        eax_3 = *sub_46b2b0(arg1)
    else
        eax_3 = 0xffffffff
    
    *(eax + 4) = eax_3
    void* eax_5 = data_27e7a40
    *(eax + 8) = 1
    bool cond:0 = *(*(eax_5 + 0x548) + 0x2c068) != 0
    int32_t entry_ebx
    *(eax + 0xc) = entry_ebx
    eax_5.b = cond:0
    *(eax + 0x38) = zx.d(eax_5.b)
    int32_t result = sub_418a10()
    int32_t edx_1 = sx.d(*(result + entry_ebx * 0x14 + 0x466))
    *(eax + 0x14) = 0xffffffff
    *(eax + 0x18) = 0xffffffff
    *(eax + 0x10) = edx_1
    *(eax + 0x34) = 0
    return result
}
