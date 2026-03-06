// 函数名称: sub_4623b0
// 虚拟地址: 0x4623b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4623b0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t eax_1
    
    if (*arg3 != 0)
        eax_1 = arg1 + 0xa
    else if (arg1 != 0xffffffff)
        eax_1 = *sub_46b2b0(arg1) + 0xa
    else
        eax_1 = arg1 + 0xa
    
    arg3[4] = eax_1
    int32_t result = *arg3
    
    if (result u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6783, "MakeSortVal")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (result)
        case 0
            void* ecx = data_27e7a40
            int32_t edi = 0xa - arg3[4]
            arg3[4] = edi
            int32_t edx = *(ecx + 0x548)
            long double x87_r7_1 = fconvert.t(*(edx + (arg1 << 2) + 0xbfb4))
            long double x87_r6_1 = float.t(0)
            x87_r6_1 - x87_r7_1
            result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                float* var_18_1 = edx + (arg1 << 2) + 0xbfb4
                int32_t eax_4
                int80_t st0_1
                st0_1, eax_4 = sub_403030(fconvert.s(fconvert.t(fconvert.s((
                    fconvert.t(*(edx + (arg1 << 2) + 0xbfb4)) + fconvert.t(1.0)) * fconvert.t(1000000.0)))))
                result = eax_4 + edi
                arg3[4] = result
            
            return result
        case 1
            arg3[4] -= 0xbb8
            
            if ((*(arg3[1] + 0xa4) & 1) != 0)
                arg3[4] += 0x1f4
            
            goto label_4624cc
        case 2
        label_4624cc:
            int32_t* esi_1 = arg3[1]
            arg3[4] += 0xbb8
            
            if (sub_445cd0(esi_1) != 0)
                arg3[4] -= 0x3e8
            
            if (sub_42f650(esi_1) != 0)
                arg3[4] += 0x989680
            
            int32_t edi_2 = esi_1[0x16]
            int16_t top
            
            if (edi_2 s>= 0)
                int32_t eax_10 = *(data_27e7a40 + 0x548)
                int32_t eax_11
                
                if (edi_2 != 0xffffffff)
                    eax_11 = sub_46b360(edi_2)
                else
                    eax_11 = eax_10 | edi_2
                
                long double x87_r7_7 = fconvert.t(*(eax_10 + (eax_11 << 2) + 0xbfb4))
                long double x87_r6_2 = float.t(0)
                x87_r6_2 - x87_r7_7
                top = 0
                eax_11.w = (x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    int32_t edi_3 = esi_1[0x16]
                    int32_t eax_12 = *(data_27e7a40 + 0x548)
                    int32_t eax_13
                    
                    if (edi_3 != 0xffffffff)
                        eax_13 = sub_46b360(edi_3)
                    else
                        eax_13 = eax_12 | edi_3
                    
                    int32_t var_18_3 = eax_12
                    int32_t eax_14
                    int80_t st0_2
                    st0_2, eax_14 = sub_403030(fconvert.s(fconvert.t(fconvert.s((
                        fconvert.t(*(eax_12 + (eax_13 << 2) + 0xbfb4)) + fconvert.t(1.0))
                        * fconvert.t(1000000.0)))))
                    top = 0xffff
                    arg3[4] += eax_14
            
            char eax_15
            int32_t ecx_5
            eax_15, ecx_5 = sub_44a330(esi_1)
            char eax_16
            
            if (eax_15 == 0)
                eax_16 = sub_439ee0(ecx_5, esi_1)
            
            if (eax_15 != 0 || eax_16 != 0)
                arg3[4] += 0x1388
            
            if (esi_1[0x17] == 0xf)
                arg3[4] += 0x184ac
            
            if (esi_1[0x17] == 0x10)
                arg3[4] += 0x184ac
            
            if (sub_44a2e0(esi_1).b != 0 && esi_1[0x14] == 0xa)
                unimplemented  {fld st0, dword [0x8a5740]}
                long double temp0_1 = fconvert.t(esi_1[0x1e])
                unimplemented  {fcomp st0, dword [esi+0x78]} f- temp0_1
                bool c0_3 = unimplemented  {fcomp st0, dword [esi+0x78]} f< temp0_1
                bool c2_3 = is_unordered.t(unimplemented  {fcomp st0, dword [esi+0x78]}, temp0_1)
                bool c3_3 = unimplemented  {fcomp st0, dword [esi+0x78]} f== temp0_1
                unimplemented  {fcomp st0, dword [esi+0x78]}
                
                if ((((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb):1.b & 0x41) == 0)
                    arg3[4] -= 0x1f4
            
            if (esi_1[0x1a] != 0x14)
                char eax_18
                int32_t ecx_6
                eax_18, ecx_6 = sub_44a2e0(esi_1)
                
                if (eax_18 == 0 || *(esi_1 + 0x99) != 0)
                    if (sub_426af0(esi_1) != 0)
                        arg3[4] += 0x186a0
                    else if (sub_439ee0(ecx_6, esi_1) != 0)
                        arg3[4] += 0x186a0
                else
                    arg3[4] += 0x186a0
            else
                arg3[4] += 0x184ac
            
            if (*esi_1 == 6)
                arg3[4] += 0x4e20
            
            int32_t eax_22 = esi_1[0x17]
            
            if (eax_22 == 0x12 || eax_22 == 0x13)
                arg3[4] += 0x7a184
            
            if (esi_1[0x17] == 2)
                arg3[4] += 0x2af8
            
            if (*esi_1 == 1)
                arg3[4] += 0x2710
            
            if (*esi_1 == 4)
                arg3[4] -= 0x5dc
            
            result = esi_1[0x17]
            
            if (result == 0x1b || result == 0x1c)
                arg3[4] += 0xc350
            
            if (*arg3 == 2)
                int32_t ebx_1 = arg3[4]
                esi_1[0x28] = ebx_1
                
                if (ebx_1 s< 0x3e8)
                    sub_4c5870("gfx.sortVal >= 1000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x677f, 
                        "MakeSortVal")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            return result
        case 3
            arg3[4] += 0x7a120
            return result
        case 4
            arg3[4] += 0x988eb0
            return result
        case 5
            arg3[4] += 0x182b8
            return result
        case 6
            arg3[4] += 0x184ac
            return result
        case 7
            arg3[4] += 0x180c4
            return result
        case 8
            arg3[4] += 0x5f5e100
            return result
        case 9
            arg3[4] += 0x989298
            return result
}
