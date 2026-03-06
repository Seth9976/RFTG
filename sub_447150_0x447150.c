// 函数名称: sub_447150
// 虚拟地址: 0x447150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_447150(int32_t arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: void var_8c
    void var_8c
    int32_t eax_1 = __security_cookie ^ &var_8c
    int32_t eax_2 = *arg3
    
    if (eax_2 != 0xe && eax_2 != 0xf)
        char const* const var_9c_1 = "DragStart"
        int32_t var_a0_1 = 0x4740
        char const* const var_a4 = "..\code\RFTGClient.cpp"
        char* const var_a8 = &data_83f3d3
        sub_4c5870("result.type == HIT_CARD || result.type == HIT_HAND_AREA", var_a8, var_a4, var_a0_1, 
            var_9c_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* ebx = *(data_27e7a40 + 0x548)
    float var_88
    
    if (*(ebx + 0xbff8) == 1 && *(ebx + 0xbfe6) != 0)
        int32_t edx = *(ebx + 0xc008)
        
        if (sub_4185e0(arg3, edx) != 0)
            __builtin_memset(&var_88, 0, 0x20)
            var_88 = 1.96181785e-44f
            int32_t var_84_1 = edx
            sub_446e50(&var_88)
    
    *(ebx + 0xbfd0) = arg3[1]
    sub_4c6230(ebx + 0xbfdc)
    int32_t eax_6
    int80_t st0_1
    st0_1, eax_6 = sub_4c6230(ebx + 0xbfd4)
    *(ebx + 0xbfe4) = 1
    *(ebx + 0xbfe8) = 6
    void var_40
    
    if (*arg3 != 0xf)
        int32_t* eax_8 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, arg3[1])
        
        if (sub_446520(eax_8) == 5)
            *(ebx + 0xbfe8) = 1
        
        void* eax_11 = sub_46b2b0(*(data_27e7a40 + 0x74))
        
        if (eax_8[0x17] == 3)
            *(ebx + 0xbfe8) = 2
        
        if (*(eax_11 + 0x1c) == 0x13)
            *(ebx + 0xbfe8) = 4
        
        int32_t eax_12 = *(eax_11 + 0x1c)
        
        if (eax_12 == 0x19)
            *(ebx + 0xbfe8) = 8
        else if (eax_12 == 1)
            *(ebx + 0xbfe8) = 5
        else if (*eax_8 == 1)
            *(ebx + 0xbfe8) = 3
        
        *(ebx + 0xbfe7) = 0
        int32_t ebx_1 = *(ebx + 0xbfe8)
        
        if ((ebx_1 == 1 || ebx_1 == 2 || ebx_1 == 4 || ebx_1 == 5 || ebx_1 == 8 || ebx_1 == 6)
                && arg4 != 0)
            int32_t* eax_13 = data_307bd58
            
            if (ebx_1 == 1)
                eax_13 = data_307bd5c
            
            int32_t var_84_2 = 0
            float var_64_1 = fconvert.s(fconvert.t(eax_8[9]))
            int32_t var_80_1 = 0
            float var_60 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_8[8]))))
            int32_t var_7c_1 = 0
            float var_5c_1 = fconvert.s(fconvert.t(var_64_1))
            int32_t var_78_1 = 0x3f800000
            float var_58_1 = fconvert.s(float.t(0))
            float var_74_1 = var_60
            var_88 = fconvert.s(float.t(1))
            float var_70_1 = var_5c_1
            float var_6c_1 = var_58_1
            void* var_9c_3 = &var_40
            __builtin_memcpy(&var_40, &var_88, 0x20)
            int128_t* eax_14 = sub_4eb180(eax_13, var_9c_3)
            *(eax_14 + 0x2c) = fconvert.s(fconvert.t(eax_8[3]))
            eax_8[0x2a] = *(eax_14 + 0x78)
        
        sub_4d6480(data_307bf0c)
        sub_4d66f0(&var_40)
    else
        long double x87_r7_1 = fconvert.t(*(ebx + 0x4389c))
        *(ebx + 0xbfe8) = 7
        long double x87_r6_1 = fconvert.t(-1f)
        *(ebx + 0xbfe7) = 1
        x87_r6_1 - x87_r7_1
        eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            void* edx_1 = data_27e7a40
            int32_t eax_7 = sub_424cd0(2, edx_1, *(edx_1 + 0x74))
            void* var_9c_2 = &var_40
            sub_42f700(eax_7, 0, eax_7)
        
        unimplemented  {fld st0, dword [ebx+0x4389c]}
        *(ebx + 0x438a0) = fconvert.s(unimplemented  {fstp dword [ebx+0x438a0], st0})
        unimplemented  {fstp dword [ebx+0x438a0], st0}
    
    if (arg3[1] != *(ebx + 0xc008))
        *(ebx + 0xc008) = 0
    
    bool cond:1 = *(ebx + 0xbfe8) != 2
    void* eax_16 = data_27e7a40
    *(ebx + 0xbfe5) = 0
    int32_t ecx_10 = *(eax_16 + 8)
    *(ebx + 0x2c074) = *(eax_16 + 0xc)
    int32_t result
    result.b = arg4
    *(ebx + 0x2c070) = ecx_10
    *(ebx + 0xbfe6) = result.b
    *(ebx + 0x43898) = 0
    
    if (not(cond:1))
        *(ebx + 0x43898) = 1
    
    sub_5a6aba(eax_1 ^ &var_8c)
    return result
}
