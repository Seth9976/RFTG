// 函数名称: sub_5d9270
// 虚拟地址: 0x5d9270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9270()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t eax = *(entry_ebx + 4)
    int32_t* edx = *(entry_ebx + 0x24)
    uint32_t ecx_3
    
    if (eax == 0 || (eax & 0xf0000000) == 0x10000000)
        ecx_3 = zx.d(eax.b)
    else if (eax == 0x32595559 || eax == 0x59565955 || eax == 0x55595659)
        ecx_3 = 2
    else
        ecx_3 = 1
    
    int32_t eax_1 = *(entry_ebx + 0x30)
    int32_t esi_3 = *(entry_ebx + 0x38) * eax_1 + *(entry_ebx + 0x34) * ecx_3 + *(entry_ebx + 0x2c)
    int32_t var_10
    int32_t var_c
    int32_t result = sub_5d9140(edx, entry_ebx + 0x34, &var_10, &var_c)
    
    if (result s< 0)
        return result
    
    sub_5d6450(*(entry_ebx + 0x3c), *(entry_ebx + 0x40), *(entry_ebx + 4), esi_3, eax_1, edx[1], 
        var_10, var_c)
    return sub_5d9330(edx)
}
