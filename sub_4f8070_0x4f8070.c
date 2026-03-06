// 函数名称: sub_4f8070
// 虚拟地址: 0x4f8070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f8070(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t* edi_1 = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:0_1 = edi_1[2].b != 0
    int32_t* var_24_1 = edi_1
    edi_1[7] = 1
    
    if (cond:0_1)
        return 
    
    int32_t* eax = sub_4f4890(edi_1[1])
    int32_t i = 0
    int32_t* var_20_1 = eax
    int32_t i_1 = 0
    
    if (eax[1] s<= 0)
        return 
    
    int32_t var_28_1 = 0
    
    do
        int32_t* ebx_2 = *eax + var_28_1
        int32_t* ecx_1 = ebx_2[1]
        
        if (ecx_1 != 1 && ecx_1 != 5 && (ecx_1 != 3 || ebx_2[0x34].b != 0))
            int128_t* eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_4f6e90(i, edi_1, ebx_2[2])
            int128_t* edi_2 = eax_2
            unimplemented  {fld st0, dword [edi+0x10]}
            unimplemented  {fldz }
            unimplemented  {fucompp } f- unimplemented  {fucompp }
            bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
            bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
            bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
            unimplemented  {fucompp }
            unimplemented  {fucompp }
            int16_t top
            eax_2.w =
                (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                ecx_1 = *(edi_2 + 8)
                
                if (ecx_1 s<= *edi_2)
                    eax_2.b = ebx_2[0xc].b
                else
                    eax_2.b = *(edi_2 + 0xc)
            
            if (p_1 || eax_2.b == 0)
                float eax_4 = ebx_2[1] - 2
                
                switch (eax_4)
                    case 0
                        int32_t var_18_1
                        int32_t var_14_1
                        int32_t eax_5
                        
                        if (edi_2[0x12].d s<= *edi_2)
                            int32_t ecx_3 = ebx_2[0x22]
                            var_18_1 = ebx_2[0x23]
                            var_14_1 = ecx_3
                            eax_5 = ecx_3
                        else
                            eax_5 = edi_2[0x13].d
                            var_18_1 = *(edi_2 + 0x12c)
                            var_14_1 = eax_5
                        
                        if (ebx_2[0x23] * ebx_2[0x22] s> 0x1e)
                            sub_4c5870("el.rows * el.cols <= 30", &data_83f3d3, "UIDef.cpp", 0x794, 
                                "UIStateUpdateNew")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        ecx_1 = var_18_1 * eax_5
                        
                        if (ecx_1 s> 0x1e)
                            sub_4c5870("dimsUpdate.x * dimsUpdate.y <= 30", &data_83f3d3, "UIDef.cpp", 
                                0x795, "UIStateUpdateNew")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t* var_2c_2 = nullptr
                        
                        if (eax_5 s> 0)
                            do
                                int32_t esi_3 = 0
                                
                                if (var_18_1 s> 0)
                                    do
                                        int32_t* var_c_1 = var_2c_2
                                        int32_t var_10 = esi_3
                                        void* eax_8 = sub_4f7720(&var_10, ebx_2, edi_2)
                                        unimplemented  {fld st0, dword [ebp+0xc]}
                                        int32_t var_48_1 = arg2
                                        float var_48_2 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        sub_4f8070(*(eax_8 + 0x434), var_48_2, arg2, arg3, 
                                            *(edi_2 + 0x11c))
                                        esi_3 += 1
                                    while (esi_3 s< var_18_1)
                                    
                                    eax_5 = var_14_1
                                
                                ecx_1 = var_2c_2 + 1
                                var_2c_2 = ecx_1
                            while (ecx_1 s< eax_5)
                    case 1
                        if (*(edi_2 + 0x15c) != 0)
                            ecx_1 = sub_506480(&edi_2[0x16], 0, &data_840a00)
                            top -= 1
                            unimplemented  {call 0x506480}
                    case 3, 6
                        int128_t* eax_10 = sub_4eb5a0(ecx_1, edi_2[0xa].d)
                        int32_t* edx_11 = ebx_2[0x11]
                        
                        if (edx_11 != 0)
                            if (eax_10 == 0)
                                int32_t* const var_3c_6 = &data_840a00
                                eax_10 = sub_4eb510(eax_10, edx_11, ecx_1)
                                ecx_1 = *(eax_10 + 0x78)
                                eax_10[2].d = 1
                                edi_2[0xa].d = ecx_1
                            
                            if (*eax_10 != ebx_2[0x11])
                                float* ecx_10 = sub_4eb650()
                                int32_t* const var_3c_7 = &data_840a00
                                eax_10 = sub_4eb510(ebx_2, ebx_2[0x11], ecx_10)
                                ecx_1 = *(eax_10 + 0x78)
                                eax_10[2].d = 1
                                edi_2[0xa].d = ecx_1
                            
                            sub_4eeef0(eax_10)
                            top -= 1
                            unimplemented  {call 0x4eeef0}
                        else if (eax_10 != 0)
                            ecx_1 = sub_4eb650()
                            edi_2[0xa].d = 0
                    case 4
                        unimplemented  {fld st0, dword [ebp+0xc]}
                        int32_t* var_3c_2 = ecx_1
                        float var_3c_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        ecx_1 = edi_2
                        sub_4f7490(eax_4, edx_1, ecx_1, ebx_2, var_3c_3)
                    case 5
                        void* eax_9 = sub_4e7b40(ecx_1, *(edi_2 + 0x9c))
                        
                        if (eax_9 != 0)
                            ecx_1 = sub_4e7c30(eax_9)
                            top -= 1
                            unimplemented  {call 0x4e7c30}
                
                if (sub_4eb5a0(ecx_1, edi_2[0xa].d) != 0 && ebx_2[1] != 8)
                    sub_4eb650()
                    edi_2[0xa].d = 0
            
            eax = var_20_1
            edi_1 = var_24_1
        
        var_28_1 += 0x118
        i = i_1 + 1
        i_1 = i
    while (i s< eax[1])
}
