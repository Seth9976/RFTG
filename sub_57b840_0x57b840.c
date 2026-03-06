// 函数名称: sub_57b840
// 虚拟地址: 0x57b840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_57b840()
{
    // 第一条实际指令: void var_11c
    void var_11c
    int32_t eax_1 = __security_cookie ^ &var_11c
    char var_115 = 0
    int32_t* eax_2
    int32_t edx
    eax_2, edx = sub_4f4890(data_273ac20)
    void* result = nullptr
    void* result_1 = nullptr
    
    if (data_273bc2c s> 0)
        float var_108
        float var_fc
        float var_60[0x4]
        float var_50[0x4]
        int32_t ecx_12
        
        do
            int32_t* ecx_1 = data_273ac20
            int32_t edi_1 = (&data_273ac2c)[result]
            
            if (ecx_1[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                sub_520800(result, edx.b, ecx_1, 0)
                
                if (*ecx_1 == 0)
                    sub_509540(ecx_1)
            
            int32_t* ecx_2 = **ecx_1
            edx = ecx_2[1]
            int32_t ebx_1 = 0
            int32_t* eax_5 = nullptr
            int32_t eax_6
            void* ebx_3
            
            while (true)
                if (ebx_1 s>= edx)
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t esi_2 = *ecx_2
                
                if (*(eax_5 + esi_2) == edi_1)
                    void* ebx_2 = ebx_1 * 0x118
                    eax_6 = *(ebx_2 + esi_2 + 4)
                    ebx_3 = ebx_2 + esi_2
                    break
                
                ebx_1 += 1
                eax_5 = &eax_5[0x46]
            
            int32_t* esi_4
            int32_t* edi_2
            
            if (eax_6 == 1 || eax_6 == 4 || eax_6 == 5)
                int32_t* esi_5 = *(ebx_3 + 0x68)
                
                if (esi_5 == 0)
                    sub_4c5870("el.image", &data_83f3d3, "Editor\UIEditor.cpp", 0x7fe, "SizeToSource")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*esi_5 != 0)
                    if (esi_5[7] != 0)
                        sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                            "AssetCatalogPurgeAsset")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_520bc0(esi_5)
                    *esi_5 = 0
                
                int32_t* eax_14 = *sub_466320(*(ebx_3 + 0x68))
                long double x87_r7_16 = float.t(*eax_14)
                
                if (*eax_14 s< 0)
                    x87_r7_16 = x87_r7_16 + fconvert.t(4.2949673e+09f)
                
                long double x87_r7_17 = float.t(eax_14[1])
                
                if (eax_14[1] s< 0)
                    x87_r7_17 = x87_r7_17 + fconvert.t(4.2949673e+09f)
                
                float var_2c
                esi_4 = &var_2c
                edi_2 = &var_60
                long double x87_r7_19 = fconvert.t(fconvert.s(fconvert.t(eax_14[2])))
                var_108 = fconvert.s(x87_r7_19 * fconvert.t(fconvert.s(x87_r7_16)))
                long double x87_r6_13 = fconvert.t(0.5)
                long double x87_r7_26 = fconvert.t(fconvert.s(fconvert.t(var_108) * x87_r6_13))
                long double x87_r5_16 = fconvert.t(fconvert.s((fconvert.t(*(ebx_3 + 0x14))
                    + fconvert.t(*(ebx_3 + 0xc))) * x87_r6_13))
                float var_e0_1 = fconvert.s(x87_r7_26 + x87_r5_16)
                long double x87_r5_18 = fconvert.t(fconvert.s(x87_r6_13
                    * fconvert.t(fconvert.s(x87_r7_19 * fconvert.t(fconvert.s(x87_r7_17))))))
                long double x87_r3_1 = fconvert.t(fconvert.s((fconvert.t(*(ebx_3 + 0x18))
                    + fconvert.t(*(ebx_3 + 0x10))) * x87_r6_13))
                float var_dc_1 = fconvert.s(x87_r5_18 + x87_r3_1)
                var_2c = fconvert.s(fconvert.t(fconvert.s(x87_r5_16 - x87_r7_26)))
                float var_28_1 = fconvert.s(fconvert.t(fconvert.s(x87_r3_1 - x87_r5_18)))
                float var_24_1 = fconvert.s(fconvert.t(var_e0_1))
                float var_20_1 = fconvert.s(fconvert.t(var_dc_1))
                goto label_57bc15
            
            if (eax_6 == 2)
                void* eax_7 = sub_4f4890(*(ebx_3 + 0xa0))
                long double x87_r7_3 = fconvert.t(fconvert.s(float.t(*(ebx_3 + 0x8c))))
                long double x87_r5_1 = float.t(1)
                long double x87_r5_3 = fconvert.t(fconvert.s(float.t(*(ebx_3 + 0x88))))
                float var_7c_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ebx_3 + 0x90))))
                    * fconvert.t(fconvert.s(x87_r5_3 - x87_r5_1)))
                long double x87_r7_8 = fconvert.t(fconvert.s(x87_r7_3
                    * fconvert.t(fconvert.s(fconvert.t(*(eax_7 + 0x10)) - fconvert.t(*(eax_7 + 8)))))) +
                    fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ebx_3 + 0x94))))
                    * fconvert.t(fconvert.s(x87_r7_3 - x87_r5_1))))
                long double x87_r7_9 = fconvert.t(fconvert.s(x87_r5_3 *
                    fconvert.t(fconvert.s(fconvert.t(*(eax_7 + 0x14)) - fconvert.t(*(eax_7 + 0xc))))))
                float var_68 = fconvert.s(x87_r7_8)
                float var_64_1 = fconvert.s(x87_r7_9 + fconvert.t(var_7c_1))
                long double x87_r6_7 = fconvert.t(0.5)
                long double x87_r6_9 = fconvert.t(*(ebx_3 + 0x18))
                var_fc =
                    fconvert.s((fconvert.t(*(ebx_3 + 0x14)) + fconvert.t(*(ebx_3 + 0xc))) * x87_r6_7)
                float var_f8_1 = fconvert.s(x87_r6_7 * (x87_r6_9 + fconvert.t(*(ebx_3 + 0x10))))
                int32_t var_40
                sub_405e30(&var_40, &var_68, &var_fc)
                int32_t var_1c = var_40
                int32_t var_3c
                int32_t var_18_1 = var_3c
                int32_t var_38
                int32_t var_14_1 = var_38
                int32_t var_34
                int32_t var_10_1 = var_34
                esi_4 = &var_1c
                edi_2 = &var_50
            label_57bc15:
                int32_t* eax_17 = sub_413110(esi_4, edi_2)
                edx = eax_17[1]
                int32_t esi_6 = eax_17[2]
                int32_t eax_18 = eax_17[3]
                *(ebx_3 + 0xc) = *eax_17
                *(ebx_3 + 0x10) = edx
                *(ebx_3 + 0x14) = esi_6
                *(ebx_3 + 0x18) = eax_18
            else if (eax_6 == 6)
                var_115 = 1
            
            ecx_12 = data_273bc2c
            result = result_1 + 1
            result_1 = result
        while (result s< ecx_12)
        
        if (var_115 != 0)
            int32_t i = 0
            int32_t i_1 = 0
            
            if (ecx_12 s> 0)
                do
                    result = sub_575c20((&data_273ac2c)[i])
                    
                    if (*(result + 4) == 6)
                        int32_t edx_9 = *eax_2
                        int32_t ecx_14 = var_108 i* 0x118
                        int32_t esi_7 = *(ecx_14 + edx_9 + 0x12c)
                        float ecx_15 = *(ecx_14 + edx_9 + 0x124)
                        int32_t edx_10 = *(ecx_14 + edx_9 + 0x128)
                        int32_t var_f0_1 = *(ecx_14 + edx_9 + 0x130)
                        int32_t eax_23 = *(result + 0x48)
                        int32_t ebx_5 = var_108 i+ 2
                        var_fc = ecx_15
                        int32_t var_f8_2 = edx_10
                        int32_t var_f4_1 = esi_7
                        
                        if (eax_23 != 0xffffffff)
                            int32_t var_110_3 = ebx_5
                            
                            if (ebx_5 s<= eax_23 i+ var_108)
                                int32_t ebx_6 = ebx_5 * 0x118
                                
                                while (true)
                                    float* eax_33 = sub_4684b0(&var_fc, *eax_2 + ebx_6 + 0xc, &var_50)
                                    ecx_15 = *eax_33
                                    edx_10 = eax_33[1]
                                    esi_7 = eax_33[2]
                                    var_110_3 += 1
                                    var_f0_1 = eax_33[3]
                                    int32_t eax_37 = *(result + 0x48) i+ var_108
                                    var_fc = ecx_15
                                    int32_t var_f8_4 = edx_10
                                    int32_t var_f4_3 = esi_7
                                    
                                    if (var_110_3 s> eax_37)
                                        break
                                    
                                    ebx_6 += 0x118
                        else if (ebx_5 s< eax_2[1])
                            int32_t eax_25 = ebx_5 * 0x118
                            int32_t var_110_2 = eax_25
                            
                            while (true)
                                float* eax_30 = sub_4684b0(&var_fc, *eax_2 + eax_25 + 0xc, &var_60)
                                ecx_15 = *eax_30
                                edx_10 = eax_30[1]
                                esi_7 = eax_30[2]
                                int32_t eax_31 = eax_30[3]
                                var_110_2 += 0x118
                                ebx_5 += 1
                                var_fc = ecx_15
                                int32_t var_f8_3 = edx_10
                                int32_t var_f4_2 = esi_7
                                var_f0_1 = eax_31
                                
                                if (ebx_5 s>= eax_2[1])
                                    break
                                
                                eax_25 = var_110_2
                        
                        *(result + 0xc) = ecx_15
                        *(result + 0x10) = edx_10
                        *(result + 0x14) = esi_7
                        i = i_1
                        *(result + 0x18) = var_f0_1
                    
                    i += 1
                    i_1 = i
                while (i s< data_273bc2c)
    
    sub_5a6aba(eax_1 ^ &var_11c)
    return result
}
