// 函数名称: sub_4929c0
// 虚拟地址: 0x4929c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4929c0()
{
    // 第一条实际指令: void* ebp
    void* ebp
    void* var_4 = ebp
    int32_t ecx
    int32_t edx
    ecx, edx = __chkstk(0x1edc)
    int32_t var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    void* __return_addr_2
    void* __return_addr_1 = __return_addr_2
    int32_t edi = sx.d(*(ecx * 0xb4 + __return_addr_1 + 0x44))
    int32_t esi = 0
    __return_addr = __return_addr_1
    var_8 = 0
    
    if (edi != 0xffffffff)
        void* ecx_4 = ecx * 0x1480 + 0x268a0b0
        var_4 = ecx_4
        
        while (true)
            int32_t var_18_1 = ecx
            *(ecx_4 - 8) = edi
            int32_t var_18_2 = 1
            int32_t eax_3
            char edx_2
            eax_3, edx_2 = sub_49cc30(&__return_addr_2, edi, 
                sub_48bb40(__return_addr_1, &__return_addr_2, edx.b), 0xffffffff)
            long double st0_1 = sub_4904a0(eax_3, edx_2, &__return_addr_2, ecx)
            var_8 += 1
            *var_4 = fconvert.d(st0_1)
            var_4 += 0x10
            __return_addr_1 = __return_addr
            edx = edi * 5 + 0x11d
            edi = sx.d(*(__return_addr_1 + (edx << 2)))
            
            if (edi == 0xffffffff)
                break
            
            ecx_4 = var_4
        
        esi = var_8
    
    int32_t result = sub_5a7ac0(ecx * 0x1480 + 0x268a0a8, esi, 0x10, sub_48bbd0)
    *(((ecx * 0x148 + esi) << 4) + 0x268a0a8) = 0xffffffff
    sub_5a6aba(eax_1 ^ &var_8)
    return result
}
