// 函数名称: sub_411f50
// 虚拟地址: 0x411f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_411f50()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    sub_4110a0(entry_ebx)
    long double x87_r7 = fconvert.t(*(entry_ebx + 0x34))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int16_t top = 0
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    void var_84
    void var_44
    
    if (p)
        int32_t eax_1
        int80_t st0_1
        st0_1, eax_1 = sub_40a930(&var_84)
        void* edx_1 = *(entry_ebx + 0x38)
        float var_90_2 = fconvert.s(fconvert.t(*(entry_ebx + 0x34)))
        top = 0xffff
        __builtin_memcpy(&var_44, eax_1, 0x40)
        sub_4f9fe0(edx_1, &var_44)
    
    sub_410dc0(entry_ebx)
    sub_410c30(entry_ebx)
    unimplemented  {fld st0, dword [ebx+0xb0]}
    unimplemented  {fldz }
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        return result
    
    int32_t eax_2 = sub_40a930(&var_84)
    unimplemented  {call 0x40a930}
    unimplemented  {fld st0, dword [ebx+0xb0]}
    void* edx_2 = *(entry_ebx + 0xb4)
    float var_90_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    __builtin_memcpy(&var_44, eax_2, 0x40)
    return sub_4f9fe0(edx_2, &var_44)
}
