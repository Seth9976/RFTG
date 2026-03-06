// 函数名称: sub_403a80
// 虚拟地址: 0x403a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_403a80()
{
    // 第一条实际指令: *(data_27e7fe4 + 0x254) = 0
    *(data_27e7fe4 + 0x254) = 0
    bool cond:0 = data_27c05f0 != 0
    int32_t ecx = 0xff000000
    data_27e8020 = 0xff000000
    
    if (not(cond:0) && data_27c05f1 == 0)
        void* eax_1 = data_27e7fd0
        void* eax_2 = data_27e7a40
        *(eax_2 + 0x40) = fconvert.s(float.t(*(eax_1 + 0x18)) / float.t(*(eax_1 + 0x14)))
        ecx = sub_4ddf40(eax_2 + 0x3c)
    
    int32_t var_a0 = ecx
    sub_4dda80(fconvert.s(float.t(1)))
    sub_461fa0()
    sub_4db310()
    
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, 
            "Draw3DLayer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = data_27e853c
    void* ecx_3 = data_27e7a40 + 0x56c
    data_27e853c = 0x7d1
    sub_40b5f0(ecx_3)
    void* ebx = data_27e7a40
    sub_417d10(ebx + 0x638)
    long double x87_r7_4 = fconvert.t(*(ebx + 0x644))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7_4
    int16_t top = 0
    struct _EXCEPTION_REGISTRATION_RECORD** eax_4
    eax_4.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    void var_8c
    void var_4c
    
    if (p)
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_40a930(&var_8c)
        void* edx_1 = *(ebx + 0x648)
        float var_a0_3 = fconvert.s(float.t(1))
        top = 0xffff
        __builtin_memcpy(&var_4c, eax_5, 0x40)
        sub_4f9fe0(edx_1, &var_4c)
    
    data_27e7a40
    sub_4b6220()
    sub_40bb90(data_27e7a40 + 0x9fc)
    unimplemented  {fld st0, dword [ebx+0xa14]}
    void* ebx_4 = data_27e7a40 + 0xa10
    unimplemented  {fldz }
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    struct _EXCEPTION_REGISTRATION_RECORD** eax_8
    eax_8.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        void* var_a0_5 = ebx_4
        sub_415f90(*(ebx_4 + 8))
        int32_t eax_9 = sub_40a930(&var_8c)
        unimplemented  {call 0x40a930}
        unimplemented  {fld st0, dword [ebx+0x4]}
        float var_a0_6 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
        unimplemented  {fstp dword [esp+0x8], st0}
        __builtin_memcpy(&var_4c, eax_9, 0x40)
        sub_4f9fe0(*(ebx_4 + 8), &var_4c)
    
    if (data_3078599 != 0)
        void* eax_11 = data_27e7fe4
        data_27e853c = edx
        __builtin_memcpy(eax_11 + 0x9c, 0x83faf8, 0x40)
        *(eax_11 + 0xdc) = 0
        return sub_4e2080()
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x326, "Draw3DLayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
