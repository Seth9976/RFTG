// 函数名称: sub_446ed0
// 虚拟地址: 0x446ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_446ed0()
{
    // 第一条实际指令: void* ecx = data_27e7a40
    void* ecx = data_27e7a40
    void* edi = *(ecx + 0x548)
    int32_t esi = *(edi + 0xbfd0)
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x20)
    *(edi + 0xbfe4) = 0
    var_2c = 0xe
    int32_t var_28 = esi
    int32_t result
    
    if (*(edi + 0xbfe5) == 0 || *(edi + 0xbfe6) == 0)
        *(edi + 0xbff8) = 1
        *(edi + 0xc008) = esi
        result = *(ecx + 8)
        int32_t ecx_4 = *(ecx + 0xc)
        *(edi + 0xc000) = result
        *(edi + 0xc004) = ecx_4
    else
        void* eax = sub_463f60(*(ecx + 0x548) + 0x43960, esi)
        int32_t edx_1
        result, edx_1 = sub_446cc0(*(edi + 0xbfe8))
        int32_t var_8_1 = edx_1
        float var_8_2 = fconvert.s(fconvert.t(*(edi + 0xbfe0)) - fconvert.t(*(edi + 0xbfd8)))
        *(eax + 0x20) = fconvert.s(fconvert.t(*(eax + 0x20))
            + fconvert.t(fconvert.s(fconvert.t(*(edi + 0xbfdc)) - fconvert.t(*(edi + 0xbfd4)))))
        *(eax + 0x24) = fconvert.s(fconvert.t(*(eax + 0x24)) + fconvert.t(var_8_2))
        *(eax + 0x28) = fconvert.s(fconvert.t(*(eax + 0x28)) + fconvert.t(0.0))
        __builtin_memcpy(eax + 0x2c, eax + 0xc, 0x20)
        *(eax + 0x78) = fconvert.s(float.t(0))
        *(eax + 0x98) = 0
        
        if (result == 0)
            return sub_446e50(&var_2c)
    
    return result
}
