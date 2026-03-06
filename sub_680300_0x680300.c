// 函数名称: sub_680300
// 虚拟地址: 0x680300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_680300(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_1c = ebx
    int32_t* esp_1 = &var_1c
    int32_t* ebx_1 = arg1
    void* i = ebx_1[0x70]
    void* ecx = ebx_1[0x36]
    int32_t var_8 = 0
    long double (* var_c)(void* arg1, void* arg2, int16_t* arg3, int32_t arg4, int32_t arg5) = nullptr
    void* i_1 = nullptr
    
    if (ebx_1[9] s> 0)
        int32_t esi
        int32_t var_20_1 = esi
        int32_t edi
        int32_t var_24 = edi
        int32_t* esp_2 = &var_24
        int32_t* edi_1 = ecx + 0x24
        int32_t* esi_1 = i + 0x2c
        int32_t* var_18_1 = edi_1
        int32_t* var_10_1 = esi_1
        
        do
            switch (*edi_1 - 1)
                case 0
                    var_c = sub_685810
                    var_8 = 0
                case 1
                    var_c = sub_685380
                    var_8 = 0
                case 3
                    var_c = sub_684ff0
                    var_8 = 0
                case 7
                    int32_t eax_2 = ebx_1[0x12]
                    
                    if (eax_2 == 0)
                        var_c = sub_683e40
                        var_8 = 0
                    else if (eax_2 == 1)
                        var_c = sub_684480
                        var_8 = 1
                    else if (eax_2 == 2)
                        var_c = sub_684950
                        var_8 = 2
                    else
                        *(*ebx_1 + 0x14) = 0x30
                        int32_t edx_1 = **ebx_1
                        *(esp_2 - 4) = ebx_1
                        edx_1()
                        esp_2 += 4
                default
                    *(*ebx_1 + 0x14) = 7
                    *(*ebx_1 + 0x18) = *edi_1
                    int32_t ecx_3 = **ebx_1
                    *(esp_2 - 4) = ebx_1
                    ecx_3()
                    esp_2 += 4
            
            esi_1[-0xa] = var_c
            
            if (edi_1[3] != 0 && *esi_1 != var_8)
                void* esi_2 = edi_1[0xa]
                
                if (esi_2 != 0)
                    *var_10_1 = var_8
                    
                    if (var_8 == 0)
                        int32_t ecx_10 = edi_1[0xb]
                        
                        for (int32_t j = 0; j s< 0x40; j += 1)
                            *(ecx_10 + (j << 2)) = zx.d(*(esi_2 + (j << 1)))
                    else if (var_8 == 1)
                        void* eax_14 = esi_2 + 4
                        void* const j_1 = &data_8359f2
                        int32_t esi_11 = neg.d(esi_2)
                        void* ecx_9 = edi_1[0xb] + 8
                        
                        do
                            *(ecx_9 - 8) = (sx.d(*(j_1 - 2)) * zx.d(*(eax_14 - 4)) + 0x800) s>> 0xc
                            *(ecx_9 - 4) = (zx.d(*(eax_14 - 2)) * sx.d(*j_1) + 0x800) s>> 0xc
                            *ecx_9 =
                                (sx.d(*(esi_11 + eax_14 + 0x8359f0)) * zx.d(*eax_14) + 0x800) s>> 0xc
                            *(ecx_9 + 4) = (
                                sx.d(*(esi_11 + eax_14 + &data_8359f2)) * zx.d(*(eax_14 + 2)) + 0x800)
                                s>> 0xc
                            j_1 += 8
                            ecx_9 += 0x10
                            eax_14 += 8
                        while (j_1 s< 0x835a72)
                        
                        edi_1 = var_18_1
                        ebx_1 = arg1
                    else if (var_8 == 2)
                        void* const j_2 = &data_835a70
                        void* edx_6 = edi_1[0xb] + 8
                        void* ecx_6 = esi_2 + 4
                        
                        do
                            uint32_t esi_3 = zx.d(*(ecx_6 - 4))
                            j_2 += 8
                            ecx_6 += 0x10
                            edx_6 += 0x20
                            *(edx_6 - 0x28) = fconvert.s(float.t(esi_3) * fconvert.t(*(j_2 - 8)))
                            *(edx_6 - 0x24) = fconvert.s(float.t(zx.d(*(ecx_6 - 0x12)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(1.3870398450000001))
                            *(edx_6 - 0x20) = fconvert.s(float.t(zx.d(*(ecx_6 - 0x10)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(1.3065629649999999))
                            *(edx_6 - 0x1c) = fconvert.s(float.t(zx.d(*(ecx_6 - 0xe)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(1.1758756020000001))
                            *(edx_6 - 0x18) =
                                fconvert.s(float.t(zx.d(*(ecx_6 - 0xc))) * fconvert.t(*(j_2 - 8)))
                            *(edx_6 - 0x14) = fconvert.s(float.t(zx.d(*(ecx_6 - 0xa)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(0.785694958))
                            *(edx_6 - 0x10) = fconvert.s(float.t(zx.d(*(ecx_6 - 8)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(0.54119609999999996))
                            *(edx_6 - 0xc) = fconvert.s(float.t(zx.d(*(ecx_6 - 6)))
                                * fconvert.t(*(j_2 - 8)) * fconvert.t(0.275899379))
                        while (j_2 s< &data_835ab0)
                    else
                        *(*ebx_1 + 0x14) = 0x30
                        int32_t ecx_5 = **ebx_1
                        *(esp_2 - 4) = ebx_1
                        ecx_5()
            
            i = i_1 + 1
            esi_1 = &var_10_1[1]
            edi_1 = &edi_1[0x15]
            i_1 = i
            var_10_1 = esi_1
            var_18_1 = edi_1
        while (i s< ebx_1[9])
        
        *esp_2
        esp_2[1]
        esp_1 = &esp_2[2]
    
    *esp_1
    return i
}
