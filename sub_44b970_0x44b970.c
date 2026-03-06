// 函数名称: sub_44b970
// 虚拟地址: 0x44b970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_44b970()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697c5a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_2c4
    int32_t eax_2 = __security_cookie ^ &var_2c4
    int32_t __saved_edi
    int32_t var_2d4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = *(data_27e7a40 + 0x548)
    void* var_2b4 = ebx
    
    if ((data_3166540 & 1) == 0)
        data_3166540.d |= 1
        int32_t var_c_1 = 0
        data_316653c = sub_4f5220(data_307c104, "tutArrowCardLeft")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166540 & 2) == 0)
        data_3166540.d |= 2
        int32_t var_c_3 = 1
        data_3166538 = sub_4f5220(data_307c104, "tutArrowCardRight")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3166540 & 4) == 0)
        data_3166540.d |= 4
        int32_t var_c_5 = 2
        data_3166534 = sub_4f5220(data_307c530, "tutOpponentArrow")
        int32_t var_c_6 = 0xffffffff
    
    int32_t var_2b8 = 0
    void var_270
    
    if (*(ebx + 0x438e0) s> 0)
        int32_t* var_2bc_1 = ebx + 0x438b8
        
        while (true)
            float var_2e4_2
            float var_2e0_3
            float var_2dc_4
            float var_2d8_4
            int32_t mxcsr
            int16_t x87control
            int16_t top
            int16_t top_32
            
            switch (*var_2bc_1)
                case 0
                    goto label_44bd66
                case 0x26
                    void var_160
                    int32_t eax_17 = sub_40a930(&var_160)
                    unimplemented  {call 0x40a930}
                    int32_t eax_18 = data_3166534
                    void var_60
                    __builtin_memcpy(&var_60, eax_17, 0x40)
                    int32_t* eax_19 = sub_4f5350(eax_18, &var_60, data_307c530, &var_60)
                    int32_t var_290_1 = *eax_19
                    int32_t var_288_1 = eax_19[2]
                    unimplemented  {fld st0, dword [esp+0x50]}
                    int32_t var_28c_1 = eax_19[1]
                    unimplemented  {fadd dword [esp+0x48]}
                    unimplemented  {fld st0, qword [0x8a5368]}
                    int32_t var_284_1 = eax_19[3]
                    unimplemented  {fmul st1, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_2b0 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    unimplemented  {fld st0, dword [esp+0x4c]}
                    unimplemented  {fadd dword [esp+0x54]}
                    unimplemented  {fmulp st1, st0}
                    unimplemented  {fmulp st1, st0}
                    float var_2ac_1 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
                    unimplemented  {fstp dword [esp+0x2c], st0}
                    void var_1a0
                    int32_t eax_20
                    long double st0_3
                    st0_3, eax_20 = sub_40a930(&var_1a0)
                    unimplemented  {call 0x40a930}
                    __builtin_memcpy(&var_270, eax_20, 0x40)
                    unimplemented  {fld st0, dword [esp+0x74]}
                    var_2d8_4 = fconvert.s(unimplemented  {fst dword [esp], st0})
                    var_2dc_4 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    unimplemented  {fld st0, dword [0xbe1ac0]}
                    var_2e0_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    unimplemented  {fld st0, dword [ecx]}
                    unimplemented  {fmul st0, qword [0x8a5470]}
                    float var_2c0_6 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    sub_686ea0(mxcsr, x87control, st0_3)
                    unimplemented  {call 0x686ea0}
                    float var_2c0_7 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    unimplemented  {fmul st0, qword [0x8a5510]}
                    unimplemented  {fadd dword [esp+0x3c]}
                    float var_2c0_8 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    unimplemented  {fld st0, dword [esp+0x28]}
                    var_2e4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    top_32 = top - 3
                    unimplemented  {fld st0, dword [esp+0x38]}
                    goto label_44bd57
                case 0x27
                    void* ecx_3 = sub_44b8b0(0x5e)
                    
                    if (ecx_3 != 0)
                        unimplemented  {fld st0, dword [ecx+0x78]}
                        unimplemented  {fld1 }
                        unimplemented  {fucompp } f- unimplemented  {fucompp }
                        bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                        bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                        bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        void* eax_11
                        eax_11.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                            int32_t eax_12
                            long double st0_1
                            st0_1, eax_12 = sub_431730(ecx_3 + 0xc)
                            unimplemented  {call 0x431730}
                            unimplemented  {fld st0, dword [eax]}
                            unimplemented  {fmul st0, qword [0x8a5470]}
                            float var_e0
                            __builtin_memcpy(&var_e0, eax_12, 0x40)
                            float var_2c0_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fld st0, dword [esp+0x14]}
                            int32_t ecx_5 = sub_686ea0(mxcsr, x87control, st0_1)
                            unimplemented  {call 0x686ea0}
                            int32_t* edx_3 = data_307c104
                            float var_2c0_2 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                            unimplemented  {fstp dword [esp+0x14], st0}
                            unimplemented  {fld st0, dword [esp+0x18]}
                            unimplemented  {fmul st0, dword [esp+0x208]}
                            int32_t var_2e0_1 = ecx_5
                            int32_t ecx_6 = data_316653c
                            unimplemented  {fmul st0, qword [0x8a5510]}
                            unimplemented  {fadd dword [esp+0x200]}
                            var_e0 = fconvert.s(unimplemented  {fstp dword [esp+0x200], st0})
                            unimplemented  {fstp dword [esp+0x200], st0}
                            unimplemented  {fld1 }
                            float var_2e0_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            top -= 1
                            x87control = sub_4f4b00(edx_3, ecx_6, var_2e0_2, nullptr, nullptr)
                    
                    goto label_44bd66
                case 0x28
                    void* ecx_7 = sub_44b8b0(0x4c)
                    
                    if (ecx_7 == 0)
                        goto label_44bd66
                    
                    unimplemented  {fld st0, dword [ecx+0x78]}
                    unimplemented  {fld1 }
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    void* eax_13
                    eax_13.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_44bd66
                    
                    int32_t eax_14
                    int32_t edx_4
                    long double st0_2
                    st0_2, eax_14, edx_4 = sub_431730(ecx_7 + 0xc)
                    unimplemented  {call 0x431730}
                    void var_a0
                    __builtin_memcpy(&var_a0, eax_14, 0x40)
                    int32_t* eax_16 = sub_4f5350(data_3166538, edx_4, data_307c104, &var_a0)
                    int32_t var_2a8_1 = *eax_16
                    int32_t var_2a0_1 = eax_16[2]
                    unimplemented  {fld st0, dword [esp+0x38]}
                    int32_t var_2a4_1 = eax_16[1]
                    unimplemented  {fadd dword [esp+0x30]}
                    unimplemented  {fld st0, qword [0x8a5368]}
                    unimplemented  {fmul st1, st0}
                    int32_t var_29c_1 = eax_16[3]
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_298_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4c], st0})
                    unimplemented  {fstp dword [esp+0x4c], st0}
                    unimplemented  {fld st0, dword [esp+0x40]}
                    unimplemented  {fadd dword [esp+0x48]}
                    unimplemented  {fmulp st1, st0}
                    unimplemented  {fmulp st1, st0}
                    float var_294_1 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
                    unimplemented  {fstp dword [esp+0x50], st0}
                    unimplemented  {fld st0, dword [esp+0x250]}
                    var_2d8_4 = fconvert.s(unimplemented  {fst dword [esp+0xc], st0})
                    var_2dc_4 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                    unimplemented  {fstp dword [esp+0x8], st0}
                    unimplemented  {fld st0, dword [0x840a94]}
                    var_2e0_3 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    unimplemented  {fld st0, dword [esp+0x50]}
                    var_2e4_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    unimplemented  {fld st0, dword [eax]}
                    unimplemented  {fmul st0, qword [0x8a5470]}
                    float var_2c0_3 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                    unimplemented  {fstp dword [esp+0x24], st0}
                    unimplemented  {fld st0, dword [esp+0x24]}
                    int32_t ecx_12 = sub_686ea0(mxcsr, x87control, st0_2)
                    unimplemented  {call 0x686ea0}
                    float var_2c0_4 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                    unimplemented  {fstp dword [esp+0x24], st0}
                    unimplemented  {fld st0, dword [esp+0x24]}
                    int32_t var_2e8_2 = ecx_12
                    unimplemented  {fmul st0, dword [esp+0x254]}
                    unimplemented  {fmul st0, qword [0x8a5510]}
                    unimplemented  {fadd dword [esp+0x50]}
                    float var_2c0_5 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                    unimplemented  {fstp dword [esp+0x28], st0}
                    int16_t top_28
                    top_32 = top_28
                    unimplemented  {fld st0, dword [esp+0x28]}
                label_44bd57:
                    float var_2e8_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top = top_32 + 1
                    x87control = sub_4da360(var_2e8_3, var_2e4_2, var_2e0_3, var_2dc_4, var_2d8_4)
                label_44bd66:
                    ebx = var_2b4
                    var_2bc_1 = &var_2bc_1[1]
                    int32_t eax_22 = var_2b8 + 1
                    var_2b8 = eax_22
                    
                    if (eax_22 s>= *(ebx + 0x438e0))
                        break
                    
                    continue
            
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5337, "DrawTutorial")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    void var_120
    int32_t eax_23 = sub_40a930(&var_120)
    unimplemented  {call 0x40a930}
    int32_t ecx_16 = __builtin_memcpy(&var_270, eax_23, 0x40)
    void* esi_6 = ebx + 0x14
    int32_t i_1 = 0xc
    int32_t* result
    int32_t i
    
    do
        unimplemented  {fld1 }
        int32_t var_2d8_9 = ecx_16
        float var_2d8_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        result, ecx_16 = sub_4f9fe0(*esi_6, &var_270)
        esi_6 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2c4)
    return result
}
