// 函数名称: sub_66f910
// 虚拟地址: 0x66f910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66f910(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = arg5
    int32_t __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t __saved_esi
    int32_t* esp_1 = &__saved_esi
    
    if (ecx u<= 6)
        int32_t __saved_ebx_2
        int32_t __saved_ebx_1 = __saved_ebx_2
        int32_t __saved_ebx
        esp_1 = &__saved_ebx
        int32_t ebx
        
        switch (ecx)
            case 0
                ebx = arg4
                
                if (ebx - 1 u> 0xf)
                label_66f95d:
                    char const* const var_24_1 = "Invalid bit depth for grayscale image"
                    sub_664320(arg1, "Invalid bit depth for grayscale image")
                    noreturn
                
                switch (ebx + &jump_table_66fc94[1]:3)
                    case &lookup_table_66fc9c[2], &lookup_table_66fc9c[4], &lookup_table_66fc9c[5], 
                            &lookup_table_66fc9c[6], &lookup_table_66fc9c[8], &lookup_table_66fc9c[9], 
                            &lookup_table_66fc9c[0xa], &lookup_table_66fc9c[0xb], 
                            &lookup_table_66fc9c[0xc], &lookup_table_66fc9c[0xd], 
                            &lookup_table_66fc9c[0xe]
                        goto label_66f95d
                
            label_66f951:
                *(arg1 + 0x13f) = 1
            label_66f9f1:
                
                if (arg6 != 0)
                    char const* const var_24_6 = "Invalid compression type specified"
                    sub_664100(arg1, "Invalid compression type specified")
                    ecx = arg5
                    arg6 = 0
                
                if ((*(arg1 + 0x258) & 4) == 0 || (*(arg1 + 0x6c) & 0x1000) != 0
                        || (ecx != 2 && ecx != 6))
                    if (arg7 != 0)
                    label_66fa33:
                        char const* const var_24_7 = "Invalid filter type specified"
                        sub_664100(arg1, "Invalid filter type specified")
                        ecx = arg5
                        arg7 = 0
                else if (arg7 != 0x40 && arg7 != 0)
                    goto label_66fa33
                
                int32_t eax_5 = arg8
                
                if (eax_5 != 0 && eax_5 != 1)
                    char const* const var_24_8 = "Invalid interlace type specified"
                    sub_664100(arg1, "Invalid interlace type specified")
                    ecx = arg5
                    eax_5 = 1
                    arg8 = 1
                
                *(arg1 + 0x138) = eax_5.b
                eax_5.b = arg7.b
                *(arg1 + 0x25c) = eax_5.b
                eax_5.b = *(arg1 + 0x13f)
                eax_5.w = muls.dp.b(eax_5.b, ebx.b)
                *(arg1 + 0x13b) = ecx.b
                ecx.b = arg6.b
                *(arg1 + 0x27c) = ecx.b
                *(arg1 + 0x13e) = eax_5.b
                *(arg1 + 0x13c) = ebx.b
                *(arg1 + 0xe4) = arg2
                *(arg1 + 0xe8) = arg3
                uint32_t eax_6 = zx.d(eax_5.b)
                uint32_t eax_8
                
                if (eax_5.b u< 8)
                    eax_8 = (eax_6 * arg2 + 7) u>> 3
                else
                    eax_8 = (eax_6 u>> 3) * arg2
                
                *(arg1 + 0xf4) = eax_8
                eax_8.b = *(arg1 + 0x13f)
                *(arg1 + 0x140) = eax_8.b
                uint8_t var_18 = (arg2 u>> 0x18).b
                uint8_t var_17 = (arg2 u>> 0x10).b
                *(arg1 + 0xf0) = arg2
                char var_15 = arg2.b
                uint8_t var_16 = (arg2 u>> 8).b
                uint8_t var_14 = (arg3 u>> 0x18).b
                char var_11 = arg3.b
                int32_t edx_2
                edx_2.b = arg5.b
                uint8_t var_13 = (arg3 u>> 0x10).b
                uint8_t var_12 = (arg3 u>> 8).b
                char var_f = edx_2.b
                edx_2.b = arg8.b
                *(arg1 + 0x13d) = ebx.b
                char var_10 = ebx.b
                int32_t var_24_9 = 0xd
                uint8_t var_e = arg6.b
                uint8_t var_d = arg7.b
                char var_c = edx_2.b
                sub_66f010(arg1, 0xd)
                int32_t var_28_9 = 0xd
                sub_666640(arg1, &var_18, 0xd)
                int32_t var_34 = 0xd
                sub_662280(arg1, &var_18, 0xd)
                sub_66f0f0(arg1)
                *(arg1 + 0x98) = sub_6621f0
                *(arg1 + 0x9c) = sub_662250
                *(arg1 + 0xa0) = arg1
                
                if (*(arg1 + 0x13a) == 0)
                    if (*(arg1 + 0x13b) == 3 || *(arg1 + 0x13c) u< 8)
                        *(arg1 + 0x13a) = 8
                    else
                        *(arg1 + 0x13a) = 0xf8
                
                int32_t result = *(arg1 + 0x70)
                
                if ((result.b & 1) == 0)
                    int32_t ebx_2
                    ebx_2.b = *(arg1 + 0x13a) != 8
                    *(arg1 + 0xcc) = ebx_2
                
                if ((result.b & 2) == 0)
                    *(arg1 + 0xbc) = 0xffffffff
                
                if ((result.b & 4) == 0)
                    *(arg1 + 0xc8) = 8
                
                if ((8 & result.b) == 0)
                    *(arg1 + 0xc4) = 0xf
                
                if ((result.b & 0x10) == 0)
                    *(arg1 + 0xc0) = 8
                
                if ((result & 0x1000000) == 0)
                    *(arg1 + 0xe0) = 0
                
                if ((result & 0x2000000) == 0)
                    *(arg1 + 0xd0) = *(arg1 + 0xbc)
                
                if ((result & 0x4000000) == 0)
                    *(arg1 + 0xdc) = *(arg1 + 0xc8)
                
                if ((result & 0x8000000) == 0)
                    *(arg1 + 0xd8) = *(arg1 + 0xc4)
                
                if ((result & 0x10000000) == 0)
                    result = *(arg1 + 0xc0)
                    *(arg1 + 0xd4) = result
                
                *(arg1 + 0xb8) = 0
                *(arg1 + 0x6c) = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            case 2
                ebx = arg4
                
                if (ebx == 8 || ebx == 0x10)
                    *(arg1 + 0x13f) = 3
                    goto label_66f9f1
                
                char const* const var_24_2 = "Invalid bit depth for RGB image"
                sub_664320(arg1, "Invalid bit depth for RGB image")
                noreturn
            case 3
                ebx = arg4
                
                if (ebx - 1 u> 7)
                label_66f9a2:
                    char const* const var_24_3 = "Invalid bit depth for paletted image"
                    sub_664320(arg1, "Invalid bit depth for paletted image")
                    noreturn
                
                switch (ebx + &jump_table_66fcac[1]:3)
                    case &lookup_table_66fcb4[2], &lookup_table_66fcb4[4], &lookup_table_66fcb4[5], 
                            &lookup_table_66fcb4[6]
                        goto label_66f9a2
                
                goto label_66f951
            case 4
                ebx = arg4
                
                if (ebx == 8 || ebx == 0x10)
                    *(arg1 + 0x13f) = 2
                    goto label_66f9f1
                
                char const* const var_24_4 = "Invalid bit depth for grayscale+alpha image"
                sub_664320(arg1, "Invalid bit depth for grayscale+alpha image")
                noreturn
            case 6
                ebx = arg4
                
                if (ebx == 8 || ebx == 0x10)
                    *(arg1 + 0x13f) = 4
                    goto label_66f9f1
                
                char const* const var_24_5 = "Invalid bit depth for RGBA image"
                sub_664320(arg1, "Invalid bit depth for RGBA image")
                noreturn
    
    *(esp_1 - 4) = "Invalid image color type specified"
    *(esp_1 - 8) = arg1
    sub_664320()
    noreturn
}
