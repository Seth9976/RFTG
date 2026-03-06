// 函数名称: sub_4d5260
// 虚拟地址: 0x4d5260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4d5260(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = data_27e7fcc
    int32_t* ebx = arg3
    int32_t* var_10 = ebx
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi = *(eax_3 + 4)
    int32_t ecx = esi[1]
    float var_c = fconvert.s(float.t(0))
    int16_t top = 0
    int32_t* eax_5 = nullptr
    int32_t* var_20 = esi
    int32_t* var_18 = nullptr
    int32_t edx_1
    
    if (ecx == 0)
    label_4d52e4:
        edx_1 = 0
    else
        void* edx = *esi
        
        while ((*(edx + 0x68) & 0xffff0000) == 0)
            eax_5 += 1
            edx += 0x6c
            
            if (eax_5 u>= ecx)
                goto label_4d52e4
        
        edx_1 = *(edx + 0x68)
    
    int32_t edi = edx_1
    
    if (edx_1 != 0)
        while (true)
            int32_t edx_2 = var_20[1]
            int32_t edi_1 = edi & 0xffff
            int32_t edi_2 = *esi
            int32_t eax_7 = edi_1 + 1
            void* esi_3 = edi_1 * 0x6c + edi_2
            int32_t var_1c_1
            
            if (eax_7 u>= edx_2)
            label_4d5345:
                var_1c_1 = 0
            else
                void* ecx_6 = eax_7 * 0x6c + edi_2
                
                while ((*(ecx_6 + 0x68) & 0xffff0000) == 0)
                    eax_7 += 1
                    ecx_6 += 0x6c
                    
                    if (eax_7 u>= edx_2)
                        goto label_4d5345
                
                var_1c_1 = *(ecx_6 + 0x68)
            
            int32_t* eax_8 = *ebx
            edi = var_1c_1
            float* i = *(esi_3 + 0x68)
            
            if (eax_8 != 0)
                eax_5 = *eax_8
            
            if (eax_8 == 0 || eax_5 == 0)
            label_4d536b:
                int32_t eax_9 = ebx[1]
                
                if (eax_9 != 0)
                    eax_5, i = eax_9(ebx, i)
                
                if (eax_9 == 0 || eax_5.b != 0)
                    ebx.b = ebx[3].b
                    float* var_54_2 = arg4
                    eax_5 = sub_4d4ce0(arg4, esi_3, i)
                    
                    if (eax_5.b != 0)
                        if (ebx.b != 0)
                            float var_24
                            eax_5 = sub_4d5130(esi_3, arg4, &var_24)
                            top -= 1
                            unimplemented  {call 0x4d5130}
                        
                        if (ebx.b == 0 || eax_5.b != 0)
                            int16_t top_1 = top - 1
                            unimplemented  {fld st0, dword [ebp-0x20]}
                            
                            if (var_18 == 0)
                            label_4d53c6:
                                float var_c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x8], st0})
                                unimplemented  {fstp dword [ebp-0x8], st0}
                                top = top_1 + 1
                                var_18 = *(esi_3 + 0x68)
                            else
                                unimplemented  {fld st0, dword [ebp-0x8]}
                                unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
                                bool c0_1 =
                                    unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
                                bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, st1}, 
                                    unimplemented  {fcomp st0, st1})
                                bool c3_1 =
                                    unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
                                unimplemented  {fcomp st0, st1}
                                eax_5.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                    | (c3_1 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
                                
                                if ((eax_5:1.b & 0x41) == 0)
                                    goto label_4d53c6
                                
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top = top_1 + 1
                    
                    ebx = var_10
            else
                while (*eax_5 != i)
                    eax_5 = eax_5[1]
                    
                    if (eax_5 == 0)
                        goto label_4d536b
            
            if (var_1c_1 == 0)
                break
            
            esi = var_20
        
        if (var_18 != 0)
            unimplemented  {fld st0, dword [eax+0xc]}
            unimplemented  {fld st0, dword [ebp-0x8]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            float var_34 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
            unimplemented  {fstp dword [ebp-0x30], st0}
            unimplemented  {fld st0, dword [eax+0x10]}
            unimplemented  {fmul st0, st1}
            float var_30 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
            unimplemented  {fstp dword [ebp-0x2c], st0}
            unimplemented  {fmul st0, dword [eax+0x14]}
            float var_2c = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
            unimplemented  {fstp dword [ebp-0x28], st0}
            unimplemented  {fld st0, dword [eax]}
            unimplemented  {fadd dword [ebp-0x30]}
            float var_44 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
            unimplemented  {fstp dword [ebp-0x40], st0}
            unimplemented  {fld st0, dword [eax+0x4]}
            unimplemented  {fadd dword [ebp-0x2c]}
            float var_40 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
            unimplemented  {fstp dword [ebp-0x3c], st0}
            unimplemented  {fld st0, dword [eax+0x8]}
            unimplemented  {fadd dword [ebp-0x28]}
            ebx[4] = var_44
            ebx[7] = var_18
            float var_3c = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
            unimplemented  {fstp dword [ebp-0x38], st0}
            ebx[5] = var_40
            ebx[6] = var_3c
            float eax_11
            eax_11.b = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_11
    
    eax_5.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_5
}
