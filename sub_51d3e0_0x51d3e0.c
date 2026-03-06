// 函数名称: sub_51d3e0
// 虚拟地址: 0x51d3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_51d3e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69639e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_114 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fd0
    float var_24 = fconvert.s(float.t(*(eax_3 + 0x18)))
    
    if (*(eax_3 + 0x27) != 0 && ((*(sub_4c98a0() + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0))
        var_24 = fconvert.s(fconvert.t(250f))
    
    char var_14 = 0
    int16_t var_13 = 0
    long double x87_r7_3 = fconvert.t(var_24)
    char var_11 = 0x40
    float var_9c = fconvert.s(float.t(0))
    float var_98 = fconvert.s(x87_r7_3 - fconvert.t(83.333335876464844))
    float var_94 = fconvert.s(fconvert.t(164f))
    float var_38 = fconvert.s(x87_r7_3)
    int16_t top = 0
    float var_18 = var_14.d
    float var_90 = var_38
    sub_4da140(var_38, &var_18, &var_9c, &var_18)
    void* ecx_3 = data_30786fc
    int32_t i = 0
    int32_t i_1 = 0
    int32_t result
    
    do
        unimplemented  {fld st0, qword [0x8a5470]}
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(*(ecx_3 + 0x5e01280) + i + 1)
        result = divs.dp.d(edx_2:eax_9, 0x28)
        int32_t edx_4 = mods.dp.d(edx_2:eax_9, 0x28) * 0x259a10
        void* esi_1 = ecx_3 + edx_4
        
        if (*(ecx_3 + edx_4 + 0x259a0c) != 0)
            result = *(esi_1 + 0x249f00)
        
        if (*(ecx_3 + edx_4 + 0x259a0c) == 0 || result == 0)
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
        else
            unimplemented  {fild st0, dword [ebp-0x2c]}
            unimplemented  {fmul st0, qword [0x8a53e0]}
            unimplemented  {fld st0, dword [ebp-0x98]}
            unimplemented  {fadd qword [0x8a53e8]}
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            float var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
            unimplemented  {fstp dword [ebp-0x1c], st0}
            int16_t top_5 = top - 1
            
            if (result != 0x186a0)
                int32_t eax_17
                
                if (*(ecx_3 + 0x5e2069c) == 0xffffffff)
                    int32_t eax_18 = result * 3
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    sub_4c5fa0(*esi_1, *(esi_1 + 4), *(esi_1 + (eax_18 << 3) - 0x18), 
                        *(esi_1 + (eax_18 << 3) - 0x14))
                    unimplemented  {call 0x4c5fa0}
                    unimplemented  {fmul st0, qword [0x8a5470]}
                    ecx_3 = data_30786fc
                else
                    eax_17 = *(ecx_3 + 0x5e20690)
                    
                    if (eax_17 == 2)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fild st0, dword [edx+0x8]}
                    else if (eax_17 != 0)
                        unimplemented  {fmul st0, dword [edx]}
                    else
                        unimplemented  {fmul st0, dword [edx+0x4]}
                
                var_14.d = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fldz }
                var_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fld st0, dword [0x8a5978]}
                long double temp2_1 = fconvert.t(var_14.d)
                unimplemented  {fcom st0, dword [ebp-0x10]} f- temp2_1
                bool c0_1 = unimplemented  {fcom st0, dword [ebp-0x10]} f< temp2_1
                bool c2_1 = is_unordered.t(unimplemented  {fcom st0, dword [ebp-0x10]}, temp2_1)
                bool c3_1 = unimplemented  {fcom st0, dword [ebp-0x10]} f== temp2_1
                eax_17.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top_5 & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x5}
                int16_t top_31
                
                if (p_1)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_31 = top_5 + 1
                else
                    var_14.d = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                    unimplemented  {fstp dword [ebp-0x10], st0}
                    top_31 = top_5 + 1
                
                int16_t top_32 = top_31 - 1
                unimplemented  {fld st0, dword [ebp-0x1c]}
                
                if (*(ecx_3 + 0x5e20698) == 0x28 && *(ecx_3 + 0x5e2069c) == 0xffffffff
                        && *(esi_1 + 0x24a008) - 1 s> 0)
                    float var_8c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x88], st0})
                    void* edi_1 = esi_1 + 0x249f18
                    unimplemented  {fadd qword [0x8a5388]}
                    float var_84_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                    unimplemented  {fstp dword [ebp-0x80], st0}
                    int16_t top_33 = top_32 + 1
                    int32_t j = 0
                    int32_t eax_24
                    
                    do
                        sub_4c5fa0(*esi_1, *(esi_1 + 4), *edi_1, *(edi_1 + 4))
                        unimplemented  {call 0x4c5fa0}
                        unimplemented  {fmul st0, qword [0x8a5470]}
                        float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        unimplemented  {fld st0, dword [ebp-0x10]}
                        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                        bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                        bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, 
                            unimplemented  {fcom st0, st1})
                        bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                        int32_t eax_22
                        eax_22.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                            | ((top_33 - 2) & 7) << 0xb
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        bool p_2 = unimplemented  {test ah, 0x5}
                        int16_t top_39
                        
                        if (p_2)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_39 = top_33
                        else
                            float var_1c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                            unimplemented  {fstp dword [ebp-0x18], st0}
                            top_39 = top_33
                        
                        unimplemented  {fld st0, dword [ebp-0x20]}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fsub st0, dword [ebp-0x18]}
                        float var_ac = var_8c_1
                        float var_a4_1 = var_84_1
                        float var_88_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                        unimplemented  {fstp dword [ebp-0x84], st0}
                        float var_a8_1 = var_88_1
                        unimplemented  {fsub st0, dword [ebp-0x14]}
                        float var_80_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                        unimplemented  {fstp dword [ebp-0x7c], st0}
                        float var_a0_1 = var_80_1
                        sub_4da140(var_84_1, edi_1 - 8, &var_ac, edi_1 - 8)
                        unimplemented  {call 0x4da140}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        eax_24 = *(esi_1 + 0x24a008)
                        var_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        top_33 = top_39
                        j += 1
                        edi_1 += 0x10
                    while (j s< eax_24 - 1)
                    ecx_3 = data_30786fc
                    top_32 = top_33 - 1
                    unimplemented  {fld st0, dword [ebp-0x1c]}
                    i = i_1
                
                int16_t var_27_1 = 0xffff
                char var_25_1 = 0xc0
                var_20 = 0xff.d
                
                if (*(ecx_3 + 0x5e20698) == i)
                    int16_t var_2b_1 = 0x5c5c
                    char var_29_1 = 0xc0
                    var_20 = 0xff.d
                
                float var_7c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x78], st0})
                unimplemented  {fld st0, dword [ebp-0x20]}
                float var_bc = var_7c_1
                unimplemented  {fld st0, st0}
                unimplemented  {fsub st0, dword [ebp-0x10]}
                float var_78_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
                unimplemented  {fstp dword [ebp-0x74], st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_b8_1 = var_78_1
                unimplemented  {fadd qword [0x8a5388]}
                float var_74_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                unimplemented  {fstp dword [ebp-0x70], st0}
                float var_b4_1 = var_74_1
                unimplemented  {fsub st0, dword [ebp-0x14]}
                float var_70_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                unimplemented  {fstp dword [ebp-0x6c], st0}
                top = top_32 + 1
                float var_b0_1 = var_70_1
                result = sub_4da140(var_74_1, &var_20, &var_bc, &var_20)
                unimplemented  {call 0x4da140}
                ecx_3 = data_30786fc
            else
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                char** esi_2
                
                if ((data_3166174 & 1) != 0)
                    esi_2 = data_3166170
                else
                    data_3166174.d |= 1
                    int32_t var_8_1 = 0
                    esi_2 = sub_509140(0x12, "sys/DebugFont.font")
                    data_3166170 = esi_2
                    int32_t var_8_2 = 0xffffffff
                
                unimplemented  {fld1 }
                float var_68 = fconvert.s(unimplemented  {fst dword [ebp-0x64], st0})
                unimplemented  {fldz }
                float var_5c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x58], st0})
                float var_50_1 = fconvert.s(unimplemented  {fst dword [ebp-0x4c], st0})
                char** edi = esi_2
                float var_64_1 = fconvert.s(unimplemented  {fst dword [ebp-0x60], st0})
                int32_t var_1c_1 = 0xffffffff
                float var_4c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                unimplemented  {fstp dword [ebp-0x48], st0}
                float var_58_1 = fconvert.s(unimplemented  {fst dword [ebp-0x54], st0})
                unimplemented  {fld st0, dword [ebp-0x1c]}
                float var_60_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                unimplemented  {fstp dword [ebp-0x5c], st0}
                unimplemented  {fld st0, dword [ebp-0x20]}
                unimplemented  {fsub st0, qword [0x8a53e8]}
                float var_54_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
                unimplemented  {fstp dword [ebp-0x50], st0}
                float var_48_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                unimplemented  {fstp dword [ebp-0x44], st0}
                float var_e0[0x9]
                sub_413350(&var_68, &var_e0, 0x840974)
                int32_t var_3c_1 = 0
                int32_t var_38_1 = 0
                
                if (esi_2 == 0)
                    esi_2 = sub_50a390(esi_2 + 0x12)
                else if (esi_2[1] != 0x12)
                    sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                        "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_2 == 0)
                    sub_5094d0(esi_2, 0, 1)
                
                esi_2[7] = &esi_2[7][1]
                unimplemented  {fld st0, dword [ebp-0x34]}
                int32_t eax_13 = esi_2[7]
                var_18 = ***esi_2
                unimplemented  {fisub st0, dword [ebp-0x14]}
                esi_2[7] = eax_13 - 1
                float var_38_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
                unimplemented  {fstp dword [ebp-0x34], st0}
                unimplemented  {fld1 }
                var_68 = fconvert.s(unimplemented  {fst dword [ebp-0x64], st0})
                unimplemented  {fldz }
                float var_5c_2 = fconvert.s(unimplemented  {fst dword [ebp-0x58], st0})
                float var_50_2 = fconvert.s(unimplemented  {fst dword [ebp-0x4c], st0})
                float var_64_2 = fconvert.s(unimplemented  {fst dword [ebp-0x60], st0})
                float var_4c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                unimplemented  {fstp dword [ebp-0x48], st0}
                float var_58_2 = fconvert.s(unimplemented  {fst dword [ebp-0x54], st0})
                unimplemented  {fld st0, dword [ebp-0x38]}
                float var_60_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                unimplemented  {fstp dword [ebp-0x5c], st0}
                unimplemented  {fld st0, dword [ebp-0x34]}
                float var_54_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
                unimplemented  {fstp dword [ebp-0x50], st0}
                float var_48_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                unimplemented  {fstp dword [ebp-0x44], st0}
                float var_104[0x9]
                sub_413350(&var_68, &var_104, &var_e0)
                result = sub_4ca330(&var_104, edi, "Overflow", &var_104, var_1c_1, 0xffffffff)
                int16_t top_21
                top = top_21
                unimplemented  {call 0x4ca330}
                ecx_3 = data_30786fc
                i = i_1
        
        i += 1
        i_1 = i
    while (i s< 0x28)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
