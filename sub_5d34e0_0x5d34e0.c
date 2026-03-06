// 函数名称: sub_5d34e0
// 虚拟地址: 0x5d34e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d34e0(HWND arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t* eax = arg2[0x28]
    int32_t* eax = arg2[0x28]
    int32_t* ebx = *eax
    int32_t var_64 = 0x12
    int32_t eax_2 = arg2[3]
    int32_t var_68 = 0
    int16_t var_34
    int16_t* var_6c = &var_34
    sub_5cd100()
    uint32_t eax_3 = zx.d(arg2[1].w)
    
    if ((eax_3 & 0x100) == 0)
        var_34 = 1
    else
        var_34 = 3
    
    uint16_t ecx = zx.w(*(arg2 + 6))
    int32_t edx = *arg2
    uint16_t eax_4 = zx.w(eax_3.b)
    uint16_t var_26 = eax_4
    eax_4 = (eax_4 u>> 3) * ecx
    uint16_t var_28 = eax_4
    uint16_t var_32 = ecx
    int32_t var_30 = edx
    int32_t var_2c = zx.d(eax_4) * edx
    sub_5c8b00(arg2)
    HWND var_68_1
    int32_t var_64_2
    void* ecx_1
    
    if (arg1 == 0)
        var_64_2 = 1
        ecx_1 = *ebx
        var_68_1 = GetDesktopWindow()
    else
        ecx_1 = *ebx
        var_64_2 = 2
        var_68_1 = arg1
    
    int32_t eax_9 = (*(ecx_1 + 0x18))(ebx, var_68_1, var_64_2)
    
    if (eax_9 != 0)
        sub_5d2f30(eax_9)
        return 0xffffffff
    
    int32_t var_64_3 = 0x24
    int32_t var_68_2 = 0
    int32_t var_58
    int32_t* var_6c_2 = &var_58
    sub_5cd100()
    int32_t esi_2 = neg.d(arg1)
    int32_t eax_13 = eax_2 * 8
    var_58 = 0x24
    int32_t var_54 = (sbb.d(esi_2, esi_2, arg1 != 0) & 0xffffc000) + 0x18000
    
    if (eax_13 - 4 u> 0xffffffb)
        int32_t var_64_7 = 0x1ffffff
        int32_t var_68_8 = 0
        sub_5cce60("Sound buffer size must be between %d and %d")
        return 0xffffffff
    
    int32_t var_4c = 0
    int16_t* var_48 = &var_34
    int32_t eax_15 = (*(*ebx + 0xc))(ebx, &var_58, &eax[1], 0)
    
    if (eax_15 != 0)
        sub_5d2f30(eax_15)
        return 0xffffffff
    
    int32_t* eax_16 = eax[1]
    (*(*eax_16 + 0x38))(eax_16, &var_34)
    int32_t* eax_17 = eax[1]
    int32_t var_20
    int32_t var_1c
    int32_t var_c
    int32_t var_8
    
    if ((*(*eax_17 + 0x2c))(eax_17, 0, eax_13, &var_c, &var_8, &var_20, &var_1c, 2) == 0)
        int32_t var_64_5 = var_8
        uint32_t var_68_6 = zx.d(*(arg2 + 7))
        int32_t var_6c_5 = var_c
        sub_5cd100()
        int32_t* esi_8 = eax[1]
        (*(*esi_8 + 0x4c))(esi_8, var_c, var_8, var_20, var_1c)
    
    return 8
}
