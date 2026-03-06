// 函数名称: sub_527b00
// 虚拟地址: 0x527b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_527b00(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3
    int32_t ecx
    int32_t ecx_1
    eax_3, ecx_1 = sub_530500(ecx, *arg1)
    void* esi = data_27e7fe0
    int32_t result = 0
    int32_t result_1 = 0
    int32_t result_2
    
    do
        int32_t result_3 = *(eax_3 + 0x145c)
        result_2 = result
        int16_t top
        
        if (result_3 s> result)
            unimplemented  {fldz }
            long double temp0_1 = fconvert.t(*(eax_3 + 0x58))
            unimplemented  {fcomp st0, dword [edi+0x58]} f- temp0_1
            bool c0_1 = unimplemented  {fcomp st0, dword [edi+0x58]} f< temp0_1
            bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [edi+0x58]}, temp0_1)
            bool c3_1 = unimplemented  {fcomp st0, dword [edi+0x58]} f== temp0_1
            unimplemented  {fcomp st0, dword [edi+0x58]}
            result.w =
                (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                result_1 = result_3
        
        int32_t eax_4 = *(esi + 0x30)
        float ecx_3 = *(esi + 0x28)
        int32_t edx_1 = *(esi + 0x2c)
        int32_t eax_5 = *(esi + 0x34)
        int32_t eax_6 = *(esi + 0x38)
        int32_t var_44_1 = edx_1
        
        if (*(eax_3 + 0x145c) != result_2)
        label_527d64:
            int32_t i = 0
            
            if (*(eax_3 + 0x19d0) s> 0)
                do
                    edx_1 = sub_527880(sub_525900(i, edx_1, eax_3), result_2, &result_1)
                    top -= 1
                    unimplemented  {call 0x527880}
                    i += 1
                while (i s< *(eax_3 + 0x19d0))
                
                esi = data_27e7fe0
            
            *(esi + 0x28) = ecx_3
            *(esi + 0x2c) = var_44_1
            *(esi + 0x30) = eax_4
            *(esi + 0x34) = eax_5
            *(esi + 0x38) = eax_6
        else
            if (eax_6 != 0xffffffff && eax_6 != 0)
                sub_4c5870("oldClipRegion.regions == -1 || oldClipRegion.regions == 0", &data_83f3d3, 
                    "UI2.cpp", 0xbe3, "UI2Draw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            bool cond:0_1 = *(eax_3 + 0x14f8) == 0
            float var_30 = ecx_3
            int32_t var_2c_1 = edx_1
            int32_t var_28_1 = eax_4
            int32_t var_24_1 = eax_5
            
            if (not(cond:0_1))
                if (eax_6 != 0xffffffff)
                    float var_a0
                    sub_4fc810(&var_a0, eax_3 + 0x14fc, eax_3 + 8)
                    *(esi + 0x28) = var_a0
                    int32_t var_9c
                    *(esi + 0x2c) = var_9c
                    int32_t var_98
                    *(esi + 0x30) = var_98
                    int32_t var_94
                    int32_t var_60_1 = var_94
                    *(esi + 0x34) = var_94
                else
                    float var_80
                    sub_4fc810(&var_80, eax_3 + 0x14fc, eax_3 + 8)
                    float var_1c = var_80
                    int32_t var_7c
                    int32_t var_18_1 = var_7c
                    int32_t var_78
                    int32_t var_14_1 = var_78
                    int32_t var_74
                    int32_t var_10_1 = var_74
                    void var_90
                    int32_t* eax_8 = sub_4fc620(&var_30, &var_1c, &var_90)
                    unimplemented  {call 0x4fc620}
                    int32_t edx_7 = eax_8[1]
                    int32_t ebx_1 = eax_8[2]
                    esi = data_27e7fe0
                    var_30 = *eax_8
                    int32_t var_2c_2 = edx_7
                    int32_t var_28_2 = eax_8[2]
                    int32_t var_24_2 = eax_8[3]
                    int32_t edx_9 = eax_8[1]
                    int32_t eax_9 = eax_8[3]
                    *(esi + 0x28) = *eax_8
                    *(esi + 0x2c) = edx_9
                    *(esi + 0x30) = ebx_1
                    *(esi + 0x34) = eax_9
                
                *(esi + 0x38) = 0xffffffff
            
            int32_t var_58_1 = *(eax_3 + 8)
            edx_1 = *(eax_3 + 0x14)
            int32_t var_54_1 = *(eax_3 + 0xc)
            int32_t var_50_1 = *(eax_3 + 0x10)
            int32_t var_4c_1 = edx_1
            
            if (eax_6 != 0xffffffff)
            label_527caf:
                int32_t eax_13 = *(eax_3 + 0x14c0)
                
                if (eax_13 == 1)
                    edx_1 = sub_527760(*(eax_3 + 0x1534), edx_1, eax_3)
                    esi = data_27e7fe0
                else if (eax_13 == 3)
                    if (*(eax_3 + 0x1580) == 0 || *(eax_3 + 0x14b1) == 0)
                        unimplemented  {fld st0, dword [edi+0x58]}
                        unimplemented  {fldz }
                        unimplemented  {fucompp } f- unimplemented  {fucompp }
                        bool c0_7 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                        bool c2_7 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                        bool c3_7 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        int32_t eax_15
                        eax_15.w = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (p_5)
                            edx_1 = TPI1::QueryTiForCVRecord(eax_3)
                            esi = data_27e7fe0
                    else
                        edx_1 = sub_506a30(eax_3 + 0x1460)
                        esi = data_27e7fe0
                else if (eax_13 == 5)
                    int32_t eax_17 = *(eax_3 + 0x60)
                    int32_t* eax_18
                    
                    if (eax_17 != 3)
                        if (eax_17 == 2)
                            eax_18 = *(eax_3 + 0x1598)
                            goto label_527cf2
                        
                        if (eax_17 == 1)
                            eax_18 = *(eax_3 + 0x1594)
                            goto label_527cf2
                        
                        eax_18 = *(eax_3 + 0x1534)
                    else
                        eax_18 = *(eax_3 + 0x159c)
                    label_527cf2:
                        
                        if (eax_18 == 0)
                            eax_18 = *(eax_3 + 0x1534)
                    
                    int32_t* eax_19
                    eax_19, edx_1 = sub_527760(eax_18, edx_1, eax_3)
                    unimplemented  {fld st0, dword [edi+0x58]}
                    unimplemented  {fldz }
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_6 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_6 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_6 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    eax_19.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        edx_1 = TPI1::QueryTiForCVRecord(eax_3)
                    
                    esi = data_27e7fe0
                
                goto label_527d64
            
            unimplemented  {fld st0, dword [ebp-0x4c]}
            unimplemented  {fld st0, dword [ebp-0x2c]}
            unimplemented  {fcompp } f- unimplemented  {fcompp }
            bool c0_2 = unimplemented  {fcompp } f< unimplemented  {fcompp }
            bool c2_2 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
            bool c3_2 = unimplemented  {fcompp } f== unimplemented  {fcompp }
            unimplemented  {fcompp }
            unimplemented  {fcompp }
            int32_t eax_12
            eax_12.w =
                (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
            
            if ((eax_12:1.b & 0x41) != 0)
                unimplemented  {fld st0, dword [ebp-0x54]}
                unimplemented  {fld st0, dword [ebp-0x24]}
                unimplemented  {fcompp } f- unimplemented  {fcompp }
                bool c0_3 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                bool c2_3 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                bool c3_3 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                unimplemented  {fcompp }
                unimplemented  {fcompp }
                eax_12.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    unimplemented  {fld st0, dword [ebp-0x48]}
                    unimplemented  {fld st0, dword [ebp-0x28]}
                    unimplemented  {fcompp } f- unimplemented  {fcompp }
                    bool c0_4 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                    bool c2_4 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                    bool c3_4 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                    unimplemented  {fcompp }
                    unimplemented  {fcompp }
                    eax_12.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    
                    if ((eax_12:1.b & 0x41) != 0)
                        unimplemented  {fld st0, dword [ebp-0x50]}
                        unimplemented  {fld st0, dword [ebp-0x20]}
                        unimplemented  {fcompp } f- unimplemented  {fcompp }
                        bool c0_5 = unimplemented  {fcompp } f< unimplemented  {fcompp }
                        bool c2_5 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
                        bool c3_5 = unimplemented  {fcompp } f== unimplemented  {fcompp }
                        unimplemented  {fcompp }
                        unimplemented  {fcompp }
                        eax_12.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb
                        bool p_3 = unimplemented  {test ah, 0x5}
                        
                        if (p_3)
                            goto label_527caf
        
        result = result_1
    while (result != result_2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
