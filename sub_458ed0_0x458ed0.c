// 函数名称: sub_458ed0
// 虚拟地址: 0x458ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_458ed0(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* eax = data_27e7a40
    void* esi = (arg1 + (arg3 << 2)) * 0x1c0 + *(eax + 0x548) + 0x2c0c0
    int32_t edi = *(esi + 0x50)
    *(esi + 0x2c) = 1
    *(esi + 0x50) = edi + 1
    int32_t entry_ebx
    
    if (entry_ebx != 0xffffffff)
        *(esi + (edi << 3) + 0x30) = sx.d(*(*(sub_418a10() + entry_ebx * 0x14 + 0x46c) + 4))
        int32_t eax_3
        eax_3.b = arg4
        *(esi + (edi << 3) + 0x34) = eax_3.b
        return eax_3
    
    *(esi + (edi << 3) + 0x30) = eax | entry_ebx
    int32_t eax_1
    eax_1.b = arg4
    *(esi + (edi << 3) + 0x34) = eax_1.b
    return eax_1
}
