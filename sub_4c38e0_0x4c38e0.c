// 函数名称: sub_4c38e0
// 虚拟地址: 0x4c38e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4c38e0(float* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693f18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1b0 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x25) != 0)
        void var_1a0
        int32_t edx
        sub_406370(&var_1a0, edx, arg1)
        void* eax_4 = data_27e7fe4
        void var_160
        __builtin_memcpy(&var_160, &var_1a0, 0x40)
        *(eax_4 + 0xdc) = 1
        __builtin_memcpy(eax_4 + 0x9c, &var_160, 0x40)
        sub_4e2000(&arg1[5])
        float var_64 = fconvert.s(fconvert.t(-12f))
        float var_4c = fconvert.s(float.t(0))
        float var_48_1 = fconvert.s(fconvert.t(1256f))
        float var_60_1 = var_4c
        int32_t var_1b4_1 = data_307c9fc
        float var_5c_1 = var_48_1
        float var_58_1 = fconvert.s(float.t(0) + fconvert.t(695.0))
        int16_t x87control_1
        int80_t st0_1
        st0_1, x87control_1 = sub_4c3840(&var_64, var_48_1)
        int32_t ebx_1 = arg1[8]
        
        if (ebx_1 u> 3)
            sub_4c5870("Halt", &data_83f3d3, "..\code\VirtualKeyboard.cpp", 0xe9, "VKGetActiveKeyBoard")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_2c_1
        void* ebx_2
        
        switch (ebx_1)
            case 0
                var_2c_1 = 0x20
                ebx_2 = &data_be40d0
            case 1
                var_2c_1 = 0x20
                ebx_2 = &data_be4350
            case 2
                ebx_2 = &data_be45d0
                var_2c_1 = 0x1f
            case 3
                ebx_2 = &data_be4840
                var_2c_1 = 0x1f
        
        int32_t var_54_1 = 0
        
        if (var_2c_1 s> 0)
            long double x87_r7_6 = float.t(0)
            void* var_24_1 = ebx_2
            float var_a8_1 = fconvert.s(x87_r7_6)
            float var_a4_1 = fconvert.s(x87_r7_6)
            long double x87_r7_7 = float.t(1)
            float var_a0_1 = fconvert.s(x87_r7_7)
            float var_9c_1 = fconvert.s(x87_r7_7)
            int32_t eax_25
            
            do
                unimplemented  {fld st0, qword [0x8a5958]}
                int32_t ecx_4 = arg1[0x10]
                unimplemented  {fld st0, qword [0x8a5950]}
                int32_t eax_9 = 0
                
                if (ecx_4 != 0)
                    int32_t eax_10 = *ebx_2
                    
                    if (ecx_4 != eax_10 || arg1[0xa] != eax_10)
                        eax_9 = 0
                    else
                        eax_9 = 1
                else if (arg1[0xe] == 1 && arg1[0xa] == *ebx_2)
                    eax_9 = 2
                
                int32_t ecx_5 = *ebx_2
                int32_t* edx_5
                
                if (ecx_5 == 0x20)
                    int32_t edx_4 = data_307ca2c
                    int32_t var_e0 = data_307ca24
                    int32_t var_dc_1 = edx_4
                    int32_t var_d8_1 = data_307ca28
                    edx_5 = (&var_e0)[eax_9]
                else if (ecx_5 == 0xd)
                    int32_t edx_6 = data_307ca20
                    int32_t var_ec = data_307ca18
                    int32_t var_e8_1 = edx_6
                    int32_t var_e4_1 = data_307ca1c
                    edx_5 = (&var_ec)[eax_9]
                else if (ecx_5 == 0x10 || ecx_5 == 8 || ecx_5 == 0xee01 || ecx_5 == 0xee03
                        || ecx_5 == 0xee02)
                    int32_t edx_8 = data_307ca14
                    var_4c = data_307ca0c
                    int32_t var_48_2 = edx_8
                    int32_t var_44_2 = data_307ca10
                    edx_5 = (&var_4c)[eax_9]
                else
                    int32_t edx_7 = data_307ca08
                    int32_t var_d4 = data_307ca00
                    int32_t var_d0_1 = edx_7
                    int32_t var_cc_1 = data_307ca04
                    edx_5 = (&var_d4)[eax_9]
                
                unimplemented  {fld st0, dword [ebx+0x4]}
                unimplemented  {fsub st0, st2}
                float var_c8
                float* esi_1 = &var_c8
                float var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
                unimplemented  {fstp dword [ebp-0x1c], st0}
                unimplemented  {fld st0, dword [ebx+0x8]}
                unimplemented  {fsubrp st2, st0}
                unimplemented  {fsubrp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_30_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                unimplemented  {fstp dword [ebp-0x2c], st0}
                unimplemented  {fld st0, dword [ebx+0xc]}
                unimplemented  {fadd st0, st1}
                float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                unimplemented  {fadd dword [ebx+0x10]}
                float var_18_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                unimplemented  {fld st0, dword [ebp-0x1c]}
                float var_98_1 = fconvert.s(unimplemented  {fst dword [ebp-0x94], st0})
                unimplemented  {fld st0, dword [ebp-0x2c]}
                var_64 = var_98_1
                float var_94_1 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                unimplemented  {fld st0, dword [ebp-0x24]}
                float var_60_2 = var_94_1
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                var_c8 = var_a8_1
                float var_90_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x8c], st0})
                unimplemented  {fstp dword [ebp-0x8c], st0}
                float var_5c_2 = var_90_1
                unimplemented  {fadd dword [ebp-0x14]}
                float var_c4_1 = var_a4_1
                float var_bc_1 = var_9c_1
                float var_8c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x88], st0})
                unimplemented  {fstp dword [ebp-0x88], st0}
                float var_58_2 = var_8c_1
                float var_c0_1 = var_a0_1
                void* eax_14 = data_27e7fe0
                
                if (*(eax_14 + 0x38) == 0)
                    x87control_1 = sub_4d9830(eax_14, &data_be4aac, edx_5, esi_1, &var_64, nullptr)
                    unimplemented  {call 0x4d9830}
                else
                    void var_11c
                    float eax_16 = sub_4d9650(&var_64, eax_14 + 0x28, esi_1, &var_11c, &var_64)
                    
                    if (eax_16.b != 0)
                        float var_10c[0x4]
                        x87control_1 =
                            sub_4d9830(eax_16, &data_be4aac, edx_5, &var_11c, &var_10c, nullptr)
                        unimplemented  {call 0x4d9830}
                    
                    ebx_2 = var_24_1
                
                var_20 = &data_83f3d3
                int32_t var_8_1 = 0
                unimplemented  {fld st0, dword [0x8a5748]}
                int32_t eax_17 = *ebx_2
                float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
                int32_t eax_18
                
                if (eax_17 == 0x10)
                    unimplemented  {fld1 }
                    float var_1c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                    
                    if (arg1[8] != 1)
                        eax_18 = data_307ca30
                    else
                        eax_18 = data_307c9f4
                    
                    goto label_4c3c5c
                
                if (eax_17 != 8)
                    if (eax_17 == 0xee03)
                        unimplemented  {fld st0, dword [0x873c6c]}
                        float var_1c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        sub_4c4590("ABC")
                        ebx_2 = var_24_1
                    else if (eax_17 == 0xee01)
                        unimplemented  {fld st0, dword [0x873c6c]}
                        float var_1c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        sub_4c4590("123")
                        ebx_2 = var_24_1
                    else if (eax_17 == 0xee02)
                        unimplemented  {fld st0, dword [0x873c6c]}
                        float var_1c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                        unimplemented  {fstp dword [ebp-0x18], st0}
                        sub_4c4590("#+=")
                        ebx_2 = var_24_1
                    else if (eax_17 == 0x20)
                        sub_4c4590("space")
                        ebx_2 = var_24_1
                    else if (eax_17 != 0xd)
                        sub_4c4810(&var_20, sx.d(eax_17.b))
                    else
                        sub_4c4590("enter")
                        ebx_2 = var_24_1
                    
                    float eax_27 = var_20
                    
                    if (eax_27 != 0 && *eax_27 != 0)
                        unimplemented  {fld st0, dword [ebx+0xc]}
                        unimplemented  {fld st0, qword [0x8a5368]}
                        char** edi_8 = data_307bd94
                        unimplemented  {fmul st1, st0}
                        int32_t var_30_3 = 0xff000000
                        unimplemented  {fld st0, dword [ebx+0x4]}
                        unimplemented  {faddp st2, st0}
                        unimplemented  {faddp st2, st0}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        float var_18_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fmul st0, dword [ebx+0x10]}
                        unimplemented  {fadd dword [ebx+0x8]}
                        unimplemented  {fsub st0, qword [0x8a5470]}
                        float var_28_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                        unimplemented  {fstp dword [ebp-0x24], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        float var_88 = fconvert.s(unimplemented  {fst dword [ebp-0x84], st0})
                        unimplemented  {fldz }
                        float var_7c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x78], st0})
                        float var_70_1 = fconvert.s(unimplemented  {fst dword [ebp-0x6c], st0})
                        float var_84_1 = fconvert.s(unimplemented  {fst dword [ebp-0x80], st0})
                        float var_6c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                        unimplemented  {fstp dword [ebp-0x68], st0}
                        float var_78_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
                        unimplemented  {fstp dword [ebp-0x74], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        float var_80_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                        unimplemented  {fstp dword [ebp-0x7c], st0}
                        unimplemented  {fld st0, dword [ebp-0x24]}
                        float var_74_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                        unimplemented  {fstp dword [ebp-0x70], st0}
                        unimplemented  {fld1 }
                        float var_68_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                        unimplemented  {fstp dword [ebp-0x64], st0}
                        float var_184[0x9]
                        sub_413350(&var_88, &var_184, 0x840974)
                        int32_t var_28_4 = 0xffffffff
                        char** var_1b4_9 = edi_8
                        int32_t var_38_1 = 0
                        int32_t var_34_1 = 0
                        int32_t ecx_26 = sub_4cb0b0(var_20)
                        unimplemented  {call 0x4cb0b0}
                        unimplemented  {fmul st0, qword [0x8a5368]}
                        int32_t var_1b8_2 = ecx_26
                        float var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fld st0, dword [ebp-0x34]}
                        double var_40_1 = fconvert.d(unimplemented  {fstp qword [ebp-0x3c], st0})
                        unimplemented  {fstp qword [ebp-0x3c], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        var_1b8_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        int32_t mxcsr
                        int16_t x87control_2 = sub_686950(mxcsr, x87control_1, var_1b8_2)
                        unimplemented  {call 0x686950}
                        float var_18_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        unimplemented  {fsubr st0, qword [ebp-0x3c]}
                        float var_38_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
                        unimplemented  {fstp dword [ebp-0x34], st0}
                        char** esi_6
                        
                        if (edi_8 != 0)
                            if (edi_8[1] != 0x12)
                                sub_4c5870("assetPtr && assetPtr->assetType == assetType", 
                                    &data_83f3d3, "C:\ax2010\Engine\DefLoad.h", 0x19, 
                                    "DefAutoLock::DefAutoLock")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            esi_6 = edi_8
                        else
                            esi_6 = sub_50a390(edi_8 + 0x12)
                        
                        if (*esi_6 == 0)
                            sub_5094d0(esi_6, 0, 1)
                        
                        esi_6[7] = &esi_6[7][1]
                        unimplemented  {fld st0, dword [ebp-0x30]}
                        double var_40_2 = fconvert.d(unimplemented  {fstp qword [ebp-0x3c], st0})
                        unimplemented  {fstp qword [ebp-0x3c], st0}
                        int32_t var_18_6 = ***esi_6
                        unimplemented  {fild st0, dword [ebp-0x14]}
                        esi_6[7] -= 1
                        unimplemented  {fmul st0, qword [0x8a5368]}
                        float var_18_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        var_1b8_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        sub_686950(mxcsr, x87control_2, var_1b8_2)
                        unimplemented  {call 0x686950}
                        float var_18_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        unimplemented  {fsubr st0, qword [ebp-0x3c]}
                        float var_34_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                        unimplemented  {fstp dword [ebp-0x30], st0}
                        unimplemented  {fld1 }
                        var_88 = fconvert.s(unimplemented  {fst dword [ebp-0x84], st0})
                        unimplemented  {fldz }
                        float var_7c_2 = fconvert.s(unimplemented  {fst dword [ebp-0x78], st0})
                        float var_70_2 = fconvert.s(unimplemented  {fst dword [ebp-0x6c], st0})
                        float var_84_2 = fconvert.s(unimplemented  {fst dword [ebp-0x80], st0})
                        float var_6c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                        unimplemented  {fstp dword [ebp-0x68], st0}
                        float var_78_2 = fconvert.s(unimplemented  {fst dword [ebp-0x74], st0})
                        unimplemented  {fld st0, dword [ebp-0x34]}
                        float var_80_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                        unimplemented  {fstp dword [ebp-0x7c], st0}
                        unimplemented  {fld st0, dword [ebp-0x30]}
                        float var_74_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                        unimplemented  {fstp dword [ebp-0x70], st0}
                        float var_68_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                        unimplemented  {fstp dword [ebp-0x64], st0}
                        float var_144[0xa]
                        sub_413350(&var_88, &var_144, &var_184)
                        x87control_1 = sub_4ca330(var_30_3, edi_8, var_20, &var_144, var_30_3, var_28_4)
                        unimplemented  {call 0x4ca330}
                else
                    unimplemented  {fld st0, dword [0x8a5810]}
                    eax_18 = data_307c9f8
                    float var_1c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                label_4c3c5c:
                    
                    if (eax_18 != 0)
                        unimplemented  {fld st0, dword [ebx+0x4]}
                        float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                        unimplemented  {fstp dword [ebp-0x14], st0}
                        unimplemented  {fld st0, dword [ebx+0x8]}
                        float var_28_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                        unimplemented  {fstp dword [ebp-0x24], st0}
                        unimplemented  {fld st0, dword [ebx+0xc]}
                        float var_30_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
                        unimplemented  {fstp dword [ebp-0x2c], st0}
                        unimplemented  {fld st0, dword [ebx+0x10]}
                        float var_3c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
                        unimplemented  {fstp dword [ebp-0x38], st0}
                        unimplemented  {fld st0, dword [ebp-0x14]}
                        float var_b8_1 = fconvert.s(unimplemented  {fst dword [ebp-0xb4], st0})
                        unimplemented  {fld st0, dword [ebp-0x24]}
                        float var_fc = var_b8_1
                        float var_b4_1 = fconvert.s(unimplemented  {fst dword [ebp-0xb0], st0})
                        unimplemented  {fld st0, dword [ebp-0x2c]}
                        float var_f8_1 = var_b4_1
                        unimplemented  {faddp st2, st0}
                        unimplemented  {faddp st2, st0}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        float var_b0_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xac], st0})
                        unimplemented  {fstp dword [ebp-0xac], st0}
                        float var_f4_1 = var_b0_1
                        unimplemented  {fadd dword [ebp-0x38]}
                        float var_ac_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xa8], st0})
                        unimplemented  {fstp dword [ebp-0xa8], st0}
                        unimplemented  {fld st0, dword [ebp-0x18]}
                        float var_1b4_4 = var_ac_1
                        float var_1b4_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        float var_f0_1 = var_ac_1
                        x87control_1 = sub_4da4e0(&var_fc, var_1b4_5)
                        unimplemented  {call 0x4da4e0}
                        ebx_2 = var_24_1
                
                int32_t var_8_2 = 0xffffffff
                float eax_19 = var_20
                
                if (eax_19 != 0 && *eax_19 != 0)
                    void* eax_21 = sub_4c4060(&var_20)
                    int32_t temp1_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t esi_4 = *(eax_21 + 0xc) + 0x10
                        sub_4f4430(eax_21, sub_4f4380(esi_4), esi_4)
                
                eax_25 = var_54_1 + 1
                ebx_2 += 0x14
                var_54_1 = eax_25
                var_24_1 = ebx_2
            while (eax_25 s< var_2c_1)
        
        void* eax_26 = data_27e7fe4
        __builtin_memcpy(eax_26 + 0x9c, 0x83faf8, 0x40)
        *(eax_26 + 0xdc) = 0
        result = sub_4e2080()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
