// 函数名称: sub_4cc060
// 虚拟地址: 0x4cc060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4cc060(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, float arg5, float* arg6, char arg7, int32_t arg8, void* arg9)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@DD@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_bc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg9
    
    if (esi == 0)
        arg9 = arg3
        esi = arg3
    
    char* ecx = *arg4
    char* const edx = &data_83f3d3
    
    if (ecx != 0)
        edx = ecx
    
    char* const var_94 = edx
    float* result_1
    
    if (ecx == 0 || *ecx == 0)
        result_1 = nullptr
    else
        result_1 = *(sub_4c4060(arg4) + 8)
    
    long double x87_r7 = float.t(0)
    float* result = arg6
    float var_84 = fconvert.s(x87_r7)
    float var_80 = fconvert.s(x87_r7)
    int32_t edi = *(esi + 0x18)
    float var_68 = **(esi + 4)
    int32_t var_64 = *(esi + 0xc)
    float var_7c = fconvert.s(fconvert.t(result[2]) - fconvert.t(*result))
    int32_t var_60 = *(esi + 0x14)
    float var_70 = fconvert.s(fconvert.t(result[1]))
    float var_6c = fconvert.s(fconvert.t(*(esi + 0x1c)))
    char* var_8c = nullptr
    int32_t var_5c = edi
    
    if ((edi u>> 0x18).b == 0)
        int32_t var_5c_1 = 0xff000000
    
    int32_t var_58 = arg8
    char* var_54 = *(esi + 0x10)
    void* var_50 = arg3
    void var_4c
    __builtin_memcpy(&var_4c, arg5, 0x24)
    float var_28 = fconvert.s(x87_r7)
    float var_24 = fconvert.s(x87_r7)
    arg4 = 0xffffffff
    
    if (result_1 s> 0)
        char* ecx_9 = var_8c
        int16_t top_1 = 0xfffd
        
        while (true)
            unimplemented  {fld st0, dword [ebp-0x68]}
            arg4 += 1
            arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
            unimplemented  {fstp dword [ebp+0xc], st0}
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}
            float var_88_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
            unimplemented  {fstp dword [ebp-0x84], st0}
            unimplemented  {fld st0, dword [eax]}
            float var_74_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
            unimplemented  {fstp dword [ebp-0x70], st0}
            char* const* var_c0_1 = &var_94
            unimplemented  {fld st0, dword [ebp-0x24]}
            float var_14_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            char var_78_1 = 0
            unimplemented  {fld st0, dword [ebp-0x20]}
            float var_a8_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
            unimplemented  {fstp dword [ebp-0xa4], st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            float var_98_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
            unimplemented  {fstp dword [ebp-0x94], st0}
            float var_a4_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xa0], st0})
            unimplemented  {fstp dword [ebp-0xa0], st0}
            int32_t eax_5
            int16_t x87control_1
            eax_5, x87control_1 = sub_4cbcf0()
            int16_t top_13 = top_1 + 2
            unimplemented  {call 0x4cbcf0}
            int32_t var_c4
            
            if (arg7 != 0)
                unimplemented  {fld st0, dword [ebp+0xc]}
                float var_6c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                unimplemented  {fstp dword [ebp-0x68], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                char* eax_6 = var_54
                float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                unimplemented  {fld st0, dword [ebp-0xa4]}
                float var_24_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
                unimplemented  {fstp dword [ebp-0x20], st0}
                var_8c = ecx_9
                unimplemented  {fld st0, dword [ebp-0x94]}
                var_54 = eax_6
                float var_84_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                unimplemented  {fstp dword [ebp-0x80], st0}
                char var_78_2 = 1
                unimplemented  {fld st0, dword [ebp-0xa0]}
                float var_80_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                unimplemented  {fstp dword [ebp-0x7c], st0}
                
                if (*(ecx_9 + var_94) == 0x7b)
                    do
                        int32_t var_a0
                        int32_t* eax_7 = sub_4cba80(eax_6, &var_a0, &var_94, &var_a0)
                        
                        if (eax_7 != 0)
                            if (eax_7[4] != 0 && eax_7[0xc].b == 0)
                                int32_t edx_3 = var_a0
                                x87control_1 = sub_4cbb70(eax_7, edx_3, &var_94, edx_3)
                            
                            break
                        
                        eax_6 = var_8c
                    while (*(eax_6 + var_94) == 0x7b)
                    
                    eax_6 = var_54
                
                int16_t top_25
                
                if (eax_6 != 2 && eax_6 != 5 && eax_6 != 8)
                    if (eax_6 == 3 || eax_6 == 6 || eax_6 == 9)
                        top_25 = top_13 - 1
                        unimplemented  {fld st0, dword [ebp-0x78]}
                        unimplemented  {fsub st0, dword [ebp-0x84]}
                        unimplemented  {fadd dword [ebp-0x70]}
                    else
                        if (arg4 s>= 1)
                            unimplemented  {fld st0, dword [ebp-0x70]}
                            unimplemented  {fadd dword [ebp-0x24]}
                            float var_74_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                            unimplemented  {fstp dword [ebp-0x70], st0}
                        
                        top_25 = top_13 - 1
                        unimplemented  {fld st0, dword [ebp-0x70]}
                        unimplemented  {fadd dword [ebp-0x20]}
                    
                    goto label_4cc2fd
                
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fsub st0, dword [ebp-0x84]}
                arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                unimplemented  {fstp dword [ebp+0xc], st0}
                unimplemented  {fldz }
                unimplemented  {fld st0, dword [ebp+0xc]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_1 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_13 - 2) & 7) << 0xb
                int16_t top_30
                
                if ((eax_6:1.b & 0x41) != 0)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top_30 = top_13 - 1
                else
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                    top_30 = top_13 - 1
                
                arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                unimplemented  {fstp dword [ebp+0xc], st0}
                unimplemented  {fld st0, dword [ebp+0xc]}
                unimplemented  {fmul st0, qword [0x8a5368]}
                unimplemented  {fadd dword [ebp-0x70]}
                float var_74_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                unimplemented  {fstp dword [ebp-0x70], st0}
                unimplemented  {fld st0, dword [ebp-0x68]}
                unimplemented  {fld1 }
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                int16_t top_36 = top_30 + 1
                eax_6.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_36 & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    unimplemented  {fld st0, dword [ebp-0x70]}
                    var_c4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    int32_t mxcsr
                    sub_686950(mxcsr, x87control_1, var_c4)
                    unimplemented  {call 0x686950}
                    arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                    unimplemented  {fstp dword [ebp+0xc], st0}
                    top_25 = top_36 - 1
                    unimplemented  {fld st0, dword [ebp+0xc]}
                label_4cc2fd:
                    float var_74_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
                    unimplemented  {fstp dword [ebp-0x70], st0}
                    top_36 = top_25 + 1
                
                unimplemented  {fldz }
                char* const* var_c0_4 = &var_94
                float var_88_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
                unimplemented  {fstp dword [ebp-0x84], st0}
                eax_5 = sub_4cbcf0()
                top_13 = top_36 - 1
                unimplemented  {call 0x4cbcf0}
            
            float esi_3 = var_68
            
            if (esi_3 == 0)
                char* var_18
                sub_509d90(eax_5, "!Null\Null", esi_3 i+ 0x12, &var_18)
                float var_8_1 = esi_3
                char* edx_4 = var_18
                
                if (edx_4 == 0)
                    edx_4 = &data_83f3d3
                
                float eax_8 = sub_509140(0x12, edx_4)
                int32_t var_8_2 = 0xffffffff
                char* eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    if (*(eax_9 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp1_1 = *(eax_9 - 0xc)
                    *(eax_9 - 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        void* edx_5 = data_26a44e4
                        int32_t esi_5 = *(eax_9 - 4) + 0x10
                        
                        if (edx_5 == 0)
                            sub_4f4250()
                            edx_5 = data_26a44e4
                        
                        for (int32_t i = 0; i s< 7; i += 1)
                            if (esi_5 s<= 1 << (i.b + 4))
                                sub_4f4430(&eax_9[0xfffffff0], edx_5 + i * 0x14, esi_5)
                                esi_3 = eax_8
                                goto label_4cc3e3
                        
                        sub_4f4430(&eax_9[0xfffffff0], edx_5 + 0x8c, esi_5)
                
                esi_3 = eax_8
            else if (*(esi_3 i+ 4) != 0x12)
                sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                    "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
        label_4cc3e3:
            
            if (*esi_3 == 0)
                var_c4 = 0
                sub_5094d0(esi_3, 0, 1)
            
            *(esi_3 i+ 0x1c) += 1
            float ecx_17 = *(**esi_3 + 0xc)
            arg5 = ecx_17
            int16_t top_52
            
            if (ecx_17 == 0)
                unimplemented  {fild st0, dword [eax]}
                unimplemented  {fmul st0, dword [edx+0x1c]}
                unimplemented  {fld st0, dword [ebp-0x80]}
                unimplemented  {fld st0, st0}
                unimplemented  {fadd st0, st2}
                float var_14_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld st0, dword [ebp-0x7c]}
                unimplemented  {fld st0, st0}
                unimplemented  {faddp st3, st0}
                unimplemented  {faddp st3, st0}
                unimplemented  {fxch st0, st2}
                unimplemented  {fxch st0, st2}
                arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                unimplemented  {fstp dword [ebp+0xc], st0}
                top_52 = top_13 - 2
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
            else
                unimplemented  {fild st0, dword [eax+0x8]}
                unimplemented  {fmul st0, dword [eax+0x1c]}
                unimplemented  {fld st0, dword [ebp-0x80]}
                unimplemented  {fld st0, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fild st0, dword [ebp+0xc]}
                unimplemented  {fmul st0, dword [eax+0x1c]}
                unimplemented  {fld st0, dword [ebp-0x7c]}
                unimplemented  {fld st0, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {faddp st2, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
                unimplemented  {fstp dword [ebp+0xc], st0}
                top_52 = top_13 - 2
            
            ecx_9 = var_8c
            unimplemented  {fld st0, dword [ebp+0xc]}
            char* const edx_6 = var_94
            int16_t top_61
            
            if (*(ecx_9 + edx_6) != 0xd)
                top_61 = top_52 - 2
                unimplemented  {fld st0, st0}
            else
                top_61 = top_52 - 2
                unimplemented  {fld st0, dword [ebp-0x10]}
                ecx_9 = &ecx_9[1]
                var_8c = ecx_9
                arg4 = 0xffffffff
            
            unimplemented  {fadd dword [ebp-0x6c]}
            var_70 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
            unimplemented  {fstp dword [ebp-0x6c], st0}
            unimplemented  {fadd dword [ebp-0x6c]}
            unimplemented  {fld st0, dword [eax+0xc]}
            unimplemented  {fadd qword [0x8a5710]}
            arg5 = fconvert.s(unimplemented  {fstp dword [ebp+0xc], st0})
            unimplemented  {fstp dword [ebp+0xc], st0}
            unimplemented  {fld st0, dword [ebp+0xc]}
            unimplemented  {fcompp } f- unimplemented  {fcompp }
            bool c0_3 = unimplemented  {fcompp } f< unimplemented  {fcompp }
            bool c2_3 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
            bool c3_3 = unimplemented  {fcompp } f== unimplemented  {fcompp }
            unimplemented  {fcompp }
            unimplemented  {fcompp }
            result.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | ((top_61 + 2) & 7) << 0xb
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                *(esi_3 i+ 0x1c) -= 1
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                break
            
            result = result_1
            
            if (ecx_9 s< result)
                while (*(ecx_9 + edx_6) == 0x20)
                    ecx_9 = &ecx_9[1]
                    
                    if (ecx_9 s>= result)
                        break
                
                var_8c = ecx_9
            
            *(esi_3 i+ 0x1c) -= 1
            
            if (ecx_9 s>= result)
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                break
            
            top_1 = top_61 + 1
            unimplemented  {fldz }
            unimplemented  {fxch st0, st2}
            unimplemented  {fxch st0, st2}
    
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    unimplemented  {fld st0, dword [ebp-0x6c]}
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
