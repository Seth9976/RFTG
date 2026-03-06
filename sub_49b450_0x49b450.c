// 函数名称: sub_49b450
// 虚拟地址: 0x49b450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_49b450(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    int32_t ecx_1 = *(eax_1 + 0x2c024) << 6
    int32_t ebx
    
    if (*(ecx_1 + eax_1 + 0xbfe4) != 0xd || *(ecx_1 + eax_1 + 0xc000) != arg2)
        ebx.b = 0
    else
        ebx.b = 1
    
    void* eax_3 = sub_437c30()
    *(eax_3 + 0x28) = 0xffffffff
    *(eax_3 + 0x2c) = zx.d(ebx.b)
    *eax_3 = 0xd
    *(eax_3 + 0x3c) = 0
    int32_t eax_5 = sub_41d070()
    *(eax_3 + 0x30) = eax_5
    int32_t eax_6
    
    if (arg1 != 0xffffffff)
        eax_6 = *sub_46b2b0(arg1)
    else
        eax_6 = eax_5 | arg1
    
    void* ecx_2 = data_27e7a40
    *(eax_3 + 4) = eax_6
    *(eax_3 + 8) = 1
    eax_6.b = *(*(ecx_2 + 0x548) + 0x2c068) != 0
    uint32_t result = zx.d(eax_6.b)
    *(eax_3 + 0x38) = result
    *(eax_3 + 0x1c) = arg2
    *(eax_3 + 0x34) = 0
    return result
}
