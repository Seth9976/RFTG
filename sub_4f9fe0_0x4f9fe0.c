// 函数名称: sub_4f9fe0
// 虚拟地址: 0x4f9fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f9fe0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: float i_2
    float i_2
    float i_1 = i_2
    __chkstk(0x11ec)
    int128_t* var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t* result = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t* result_2 = result
    
    if (result_2[2].b == 0)
        int128_t arg_d4[0x4]
        sub_5abfc0(&arg_d4, 0, 0x1100)
        int32_t arg_11d4 = 1
        __builtin_memcpy(&arg_d4, arg2, 0x40)
        int32_t arg_114 = 0xffffffff
        result = sub_4f4890(result_2[1])
        int32_t ecx_1 = 0
        int32_t* result_1 = result
        i_1 = 0f
        
        if (result[1] s> 0)
            void* edi_1 = &result_2[0xc]
            arg2 = 0
            arg1 = edi_1
            float i
            
            do
                void* ebx = *result
                int32_t esi_3 = *(ebx + ecx_1 + 8)
                void* ebx_1 = ebx + ecx_1
                
                if (ecx_1 s>= 0x11800)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_1 = *edi_1
                int128_t* eax_2
                int128_t* edx_3
                
                if (edx_1 != 0)
                    eax_2 = sub_4fc1e0(ecx_1, edx_1)
                    var_8 = eax_2
                    edx_3 = eax_2
                else
                    eax_2 = sub_4fc0d0()
                    *(eax_2 + 4) = esi_3
                    *edi_1 = *(eax_2 + 0x1bc)
                    edx_3 = eax_2
                    var_8 = edx_3
                
                void arg_54
                int16_t top
                
                if (*(ebx_1 + 4) != 6)
                    int32_t ecx_7 = *edx_3
                    
                    if (*(edx_3 + 8) s<= ecx_7)
                        eax_2.b = *(ebx_1 + 0x30)
                    else
                        eax_2.b = *(edx_3 + 0xc)
                    
                    if (eax_2.b == 0 && (*(edx_3 + 0x144) s<= ecx_7 || *(edx_3 + 0x148) == eax_2.b))
                        void arg_14
                        sub_4f7590(&arg_14, &arg_d4)
                        __builtin_memcpy(&arg_54, &arg_14, 0x40)
                        unimplemented  {fld st0, dword [esp+0x70]}
                        unimplemented  {fldz }
                        unimplemented  {fld st0, st0}
                        unimplemented  {fucomp st0, st2} f- unimplemented  {fucomp st0, st2}
                        bool c0_1 = unimplemented  {fucomp st0, st2} f< unimplemented  {fucomp st0, st2}
                        bool c2_1 = is_unordered.t(unimplemented  {fucomp st0, st2}, 
                            unimplemented  {fucomp st0, st2})
                        bool c3_1 =
                            unimplemented  {fucomp st0, st2} f== unimplemented  {fucomp st0, st2}
                        unimplemented  {fucomp st0, st2}
                        void* eax_6
                        eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | ((top - 2) & 7) << 0xb
                        unimplemented  {fstp st1, st0}
                        unimplemented  {fstp st1, st0}
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                        else
                            unimplemented  {fld st0, dword [esp+0x74]}
                            unimplemented  {fucompp } f- unimplemented  {fucompp }
                            bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                            bool c2_2 =
                                is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                            bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            unimplemented  {fucompp }
                            eax_6.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                                | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (p_2)
                                int128_t* ecx_8 = var_8
                                
                                if (*(ecx_8 + 0x13c) s> *ecx_8)
                                    eax_6 = ecx_8[0x14].d
                                
                                if (*(ecx_8 + 0x13c) s<= *ecx_8 || eax_6 == 0)
                                    unimplemented  {fld st0, dword [ebp+0x10]}
                                    int128_t* var_18_4 = ecx_8
                                    float var_18_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                    unimplemented  {fstp dword [esp], st0}
                                    sub_4f9b40(eax_6, result_2, ecx_8, i_1)
                                else
                                    eax_6(&arg_54, ebx_1, ecx_8)
                    
                    sub_4f75f0(&arg_d4)
                else
                    if (arg_11d4 s<= 0)
                        sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t __saved_edi
                    void* ebx_2 = &(&__saved_edi)[arg_11d4 * 0x11 + 0x3a]
                    void arg_94
                    __builtin_memcpy(&arg_94, ebx_2 - 0x44, 0x40)
                    int32_t eax_4 = sub_4f84f0(arg_11d4, &arg_94, ebx_1, &arg_54, edx_3)
                    top += 1
                    arg_11d4 += 1
                    __builtin_memcpy(ebx_2, eax_4, 0x40)
                    *(ebx_2 + 0x40) = *(ebx_1 + 0x48)
                result = result_1
                i = i_1 i+ 1
                edi_1 = arg1 + 4
                ecx_1 = arg2 + 0x118
                i_1 = i
                arg1 = edi_1
                arg2 = ecx_1
            while (i s< result[1])
    
    sub_5a6aba(eax_1 ^ &var_8)
    return result
}
