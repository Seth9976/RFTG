// 函数名称: sub_4785f0
// 虚拟地址: 0x4785f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4785f0(int32_t arg1, int32_t arg2, char* arg3, void* arg4, char arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = arg4
    char* esi = arg3
    
    if (*(esi + 0x1c) != 0)
        void* eax_2 = sub_4eb5a0(arg3, *(esi + 0x98))
        int16_t top
        
        if (eax_2 != 0)
            char* var_9c_1 = arg3
            int80_t st0_1
            st0_1, arg3 = sub_4eed90(eax_2, fconvert.s(fconvert.t(data_8c4d34)))
            top = 0xffff
        
        int32_t edx_1 = *(esi + 0x9c)
        void* eax_3 = sub_4eb5a0(arg3, edx_1)
        
        if (eax_3 != 0)
            unimplemented  {fld st0, dword [0x8c4d34]}
            char* var_9c_3 = arg3
            float var_9c_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            edx_1 = sub_4eed90(eax_3, var_9c_4)
            top -= 1
            unimplemented  {call 0x4eed90}
        
        void* esi_1 = &esi[0x20]
        int32_t i_3 = 2
        int32_t i
        
        do
            if (*esi_1 != 0)
                edx_1 = sub_4d4ab0()
            
            esi_1 += 4
            i = i_3
            i_3 -= 1
        while (i != 1)
        char* ebx_2
        
        if (arg5 != 0)
            void* ecx_1 = *(data_27e7a40 + 0x548)
            int32_t edx_2 = *(ecx_1 + 0x2c024)
            int32_t eax_4 = 0
            
            if (edx_2 s<= 0)
            label_4786af:
                ebx_2 = esi
            else
                void* ecx_2 = ecx_1 + 0xc028
                
                while (*ecx_2 != arg6)
                    eax_4 += 1
                    ecx_2 += 0x40
                    
                    if (eax_4 s>= edx_2)
                        goto label_4786af
                
                ebx_2 = esi
                
                if (*(ebx_2 + 0x10) == 4)
                    sub_478390()
            
            void* eax_5 = *(*(ebx_2 + 0x1c) + 0x2c)
            
            if (eax_5 != 0)
                void** ecx_3 = *(eax_5 + 4)
                
                if (ecx_3 != 0)
                    unimplemented  {fldz }
                    
                    while (true)
                        void* edx_4 = *ecx_3
                        long double temp1_1 = fconvert.t(*(edx_4 + 0x18))
                        unimplemented  {fcom st0, dword [edx+0x18]} f- temp1_1
                        bool c0_1 = unimplemented  {fcom st0, dword [edx+0x18]} f< temp1_1
                        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, dword [edx+0x18]}, temp1_1)
                        bool c3_1 = unimplemented  {fcom st0, dword [edx+0x18]} f== temp1_1
                        ecx_3 = ecx_3[1]
                        eax_5.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top - 1) & 7) << 0xb
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            eax_5 = *(edx_4 + 0x20)
                            
                            if (eax_5 != 2 && eax_5 != 4)
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                
                                if (*(edx_4 + 0x1c) == 1)
                                    unimplemented  {fld st0, dword [edx+0x4]}
                                    unimplemented  {fld1 }
                                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                                    bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                                    bool c2_2 = is_unordered.t(unimplemented  {fucompp }, 
                                        unimplemented  {fucompp })
                                    bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                                    unimplemented  {fucompp }
                                    unimplemented  {fucompp }
                                    eax_5.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                                        | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_2))
                                        sub_478430(ebx_2)
                                
                                break
                        
                        if (ecx_3 == 0)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            break
            
            *(ebx_2 + 0x1c)
        else if (*(esi + 0x10) == 1)
            void var_28
            __builtin_memset(&var_28, &data_840614, 0x1c)
            ebx_2 = esi
            float var_88[0x8]
            int32_t var_68
            __builtin_memcpy(&var_68, sub_477c10(&var_88, edx_1, result + 0xc, &var_88), 0x20)
            unimplemented  {fld st0, dword [ebp-0x64]}
            void* result_1 = result
            *(*(ebx_2 + 0x48) + 4) = fconvert.s(unimplemented  {fstp dword [ecx+0x4], st0})
            unimplemented  {fstp dword [ecx+0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x60]}
            *(*(ebx_2 + 0x4c) + 4) = fconvert.s(unimplemented  {fstp dword [edx+0x4], st0})
            unimplemented  {fstp dword [edx+0x4], st0}
            void* eax_9 = *(ebx_2 + 0x50)
            unimplemented  {fld st0, dword [ebp-0x5c]}
            *(eax_9 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
            unimplemented  {fstp dword [eax+0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x4c]}
            *(*(ebx_2 + 0x54) + 4) = fconvert.s(unimplemented  {fstp dword [ecx+0x4], st0})
            unimplemented  {fstp dword [ecx+0x4], st0}
            unimplemented  {fld st0, dword [ebp-0x48]}
            *(*(ebx_2 + 0x58) + 4) = fconvert.s(unimplemented  {fstp dword [edx+0x4], st0})
            unimplemented  {fstp dword [edx+0x4], st0}
            int16_t top_17 = top
            
            if (*(ebx_2 + 0x5c) != 0)
                int16_t top_18
                
                if (*(result_1 + 0x44) != 0)
                    sub_4784f0(result_1 + 0x28)
                    top_18 = top_17 - 1
                    unimplemented  {call 0x4784f0}
                else
                    top_18 = top_17 - 1
                    unimplemented  {fldz }
                
                eax_9 = *(ebx_2 + 0x5c)
                float var_34_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                unimplemented  {fld st0, dword [ebp-0x30]}
                *(eax_9 + 4) = fconvert.s(unimplemented  {fstp dword [eax+0x4], st0})
                unimplemented  {fstp dword [eax+0x4], st0}
                top_17 = top_18 + 1
            
            if (*(ebx_2 + 0x60) != 0)
                int16_t top_21
                
                if (*(result_1 + 0x64) != 0)
                    eax_9 = sub_4784f0(result_1 + 0x48)
                    top_21 = top_17 - 1
                    unimplemented  {call 0x4784f0}
                else
                    top_21 = top_17 - 1
                    unimplemented  {fldz }
                
                float var_34_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                unimplemented  {fld st0, dword [ebp-0x30]}
                *(*(ebx_2 + 0x60) + 4) = fconvert.s(unimplemented  {fstp dword [ecx+0x4], st0})
                unimplemented  {fstp dword [ecx+0x4], st0}
                top_17 = top_21 + 1
            
            int32_t var_44
            int32_t eax_13
            
            if (*(result_1 + 0x44) == 0)
                eax_13 = *(ebx_2 + 0x70) * 0x130
                *(eax_13 + *(*(ebx_2 + 0x1c) + 0x2c) + 0xb0) = 0
                var_44 = 0
            else
                int32_t var_9c_7 = 0
                float* eax_12 =
                    sub_477ff0(eax_9, &var_28, __builtin_memcpy(&var_28, result_1 + 0x28, 0x1c))
                ebx_2 = esi
                char* edx_10 = *(esi + 0x74) * 0x130 + *(*(esi + 0x1c) + 0x2c) + 0xb0
                __builtin_memcpy(&edx_10[0x108], eax_12, 0x1c)
                *(edx_10 + 0x124) = 0
                *(edx_10 + 0x128) = 0
                eax_13 = 0
                *(edx_10 + 0x12c) = 0
                *edx_10 = 1
                var_44 = *(result + 0x68)
                result_1 = result
            
            if (*(result_1 + 0x64) == 0)
                *(*(ebx_2 + 0x74) * 0x130 + *(*(ebx_2 + 0x1c) + 0x2c) + 0xb0) = 0
                int32_t var_40_2 = 0
            else
                int32_t var_9c_8 = 1
                float* eax_15 =
                    sub_477ff0(eax_13, &var_28, __builtin_memcpy(&var_28, result_1 + 0x48, 0x1c))
                ebx_2 = esi
                char* edx_16 = *(esi + 0x70) * 0x130 + *(*(esi + 0x1c) + 0x2c) + 0xb0
                __builtin_memcpy(&edx_16[0x108], eax_15, 0x1c)
                *(edx_16 + 0x124) = 0
                *(edx_16 + 0x128) = 0
                *(edx_16 + 0x12c) = 0
                *edx_16 = 1
                int32_t var_40_1 = *(result + 0x6c)
            
            int32_t i_1 = 0
            void* esi_8 = &ebx_2[0x68]
            int32_t i_2 = 0
            void* var_34_3 = esi_8
            
            do
                int32_t eax_18 = (&var_44)[i_1]
                void* edi_3 = *(esi_8 - 0x48)
                char* edx_20 = (&data_8c6ae0)[i_1 + (eax_18 << 1)]
                
                if (edi_3 == 0)
                    if (eax_18 != *(esi_8 + 0x28) && *(esi_8 + 0x20) != 0)
                        if (*esi_8 != 0)
                            sub_515570(*(ebx_2 + 0x1c), esi_8)
                        
                        void* edi_4 = *(ebx_2 + 0x1c)
                        int32_t* ebx_6 = *(edi_4 + 4)
                        char* var_9c_13 = edx_20
                        int32_t eax_24
                        int32_t ecx_26
                        eax_24, ecx_26 = sub_516fb0(ebx_6, edx_20)
                        void* eax_26
                        
                        if (eax_24 != 0xffffffff)
                            unimplemented  {fld st0, dword [0x873c70]}
                            int32_t var_9c_15 = ecx_26
                            float var_9c_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            unimplemented  {fldz }
                            int32_t var_a4_3 = ecx_26
                            float var_a4_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            eax_26 = sub_516bc0(edi_4, ebx_6, eax_24, 4, var_a4_4, 1, var_9c_16)
                            top_17 -= 1
                            unimplemented  {call 0x516bc0}
                        else
                            char* var_9c_14 = edx_20
                            sub_4c5680("can't find anim clip: %s")
                            eax_26 = nullptr
                        
                        int128_t* ecx_27 = *(esi_8 + 0x18)
                        int32_t edi_5 = *(esi_8 + 0x20)
                        *esi_8 = eax_26
                        sub_516af0(eax_26, edi_5, ecx_27)
                        *(var_34_3 + 0x28) = eax_18
                        esi_8 = var_34_3
                        ebx_2 = esi
                        i_1 = i_2
                else if (*(esi_8 + 0x28) != eax_18)
                    int32_t* ebx_5 = *(edi_3 + 4)
                    char* var_9c_9 = edx_20
                    int32_t eax_20
                    int32_t ecx_23
                    eax_20, ecx_23 = sub_516fb0(ebx_5, edx_20)
                    
                    if (eax_20 != 0xffffffff)
                        unimplemented  {fld st0, dword [0x873c70]}
                        int32_t var_9c_11 = ecx_23
                        float var_9c_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fld st0, dword [0x8a5680]}
                        int32_t var_a4_1 = ecx_23
                        float var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_516bc0(edi_3, ebx_5, eax_20, 1, var_a4_2, 1, var_9c_12)
                        top_17 -= 1
                        unimplemented  {call 0x516bc0}
                        *(esi_8 + 0x28) = eax_18
                    else
                        char* var_9c_10 = edx_20
                        sub_4c5680("can't find anim clip: %s")
                        *(esi_8 + 0x28) = eax_18
                    
                    ebx_2 = esi
                    i_1 = i_2
                
                i_1 += 1
                esi_8 += 4
                i_2 = i_1
                var_34_3 = esi_8
            while (i_1 s< 2)
            
            if (*(ebx_2 + 0x10) == 1 && *(ebx_2 + 4) == 0 && *(*(ebx_2 + 0x64) + 0xac) s<= 0)
                sub_4c5870("model.pAnimSetBody->maskCount > 0", &data_83f3d3, "..\code\RftGVR.cpp", 
                    0x499, "PlayerModelUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *(ebx_2 + 0x1c)
        else
            *(esi + 0x1c)
        result = sub_4d4ab0()
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
