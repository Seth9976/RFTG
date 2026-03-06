// 函数名称: sub_49e3c0
// 虚拟地址: 0x49e3c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49e3c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg4
    int32_t* ecx_2 = &arg3[edi * 0x2d + 8]
    int32_t var_424 = 0xffffffff
    int32_t var_414 = 0
    int32_t var_41c = 0
    char var_40c[0x404]
    
    if (arg3[6].b == 0)
        int32_t var_438_1 = (&data_8c671c)[arg5]
        int32_t var_43c_1 = *ecx_2
        sub_5a733b(&var_40c, "%s searches for %s.\n")
        sub_4c5680(&var_40c)
    
    int32_t result
    
    while (true)
        int32_t eax_8
        int32_t ecx_4
        
        if (arg3[6].b != 0 || *arg3 == 0)
            eax_8, ecx_4 = sub_49ca40(arg3)
        else
            int32_t eax_4 = arg3[1]
            
            if (*(eax_4 + (edi << 2) + 0x1ec0) s>= *(eax_4 + (edi << 2) + 0x1ed8))
                eax_8, ecx_4 = sub_49ca40(arg3)
            else
                ecx_4 = eax_4
                int32_t edx_1 = *(ecx_4 + (edi << 2) + 0x1ec0)
                eax_8 = *(ecx_4 + ((edi * 0x148 + edx_1) << 2))
                *(ecx_4 + (edi << 2) + 0x1ec0) = edx_1 + 1
                
                if (eax_8 s< 0)
                    eax_8, ecx_4 = sub_49ca40(arg3)
        
        int32_t ecx_22
        
        if (eax_8 == 0xffffffff)
            if (arg3[6].b == 0)
                int32_t var_438_9 = *ecx_2
                sub_5a733b(&var_40c, "Search fails for %s.\n")
                sub_4c5680(&var_40c)
            
            ecx_22 = ecx_2
            *(ecx_22 + 0x1c) = 0
        else
            int32_t var_438_2 = 6
            int32_t edx_4 = sub_49cc30(arg3, eax_8, ecx_4, 0xffffffff)
            char* ecx_5 = arg5
            arg3[eax_8 * 5 + 0x11a].w |= 0x3f
            int32_t var_420_1
            
            if (ecx_5 u> 8)
                var_420_1 = 0
            else
                int32_t eax_12
                eax_12, ecx_5 = sub_49e1d0(arg3[eax_8 * 5 + 0x11b], edx_4, ecx_5)
                var_420_1 = eax_12
            
            if (arg3[6].b == 0)
                if (var_420_1 == 0)
                    sub_49c720(arg4)
                    void* ebx_2 = *(data_27e7a40 + 0x548) + arg4 * 0x524 + 0x41ec0
                    *(ebx_2 + (*(ebx_2 + 0x520) << 2)) =
                        sx.d(*(*(sub_418a10() + eax_8 * 0x14 + 0x46c) + 4))
                    *(ebx_2 + 0x520) += 1
                    int32_t var_438_8 = *arg3[eax_8 * 5 + 0x11b]
                    int32_t var_43c_4 = *ecx_2
                    sub_5a733b(&var_40c, "%s reveals %s (no match).\n")
                    sub_4c5680(&var_40c)
                    edi = arg4
                    continue
                    continue
                else
                    int32_t var_438_3 = *arg3[eax_8 * 5 + 0x11b]
                    int32_t var_43c_2 = *ecx_2
                    sub_5a733b(&var_40c, "%s reveals %s (match).\n")
                    char const* const var_448_2 = "prestige"
                    char (* var_44c_1)[0x404] = &var_40c
                    ecx_5 = sub_4c5680("%s (%s)")
            
            if (var_420_1 == 0)
                edi = arg4
                continue
            
            if (var_41c == 0)
                goto label_49e576
            
            if (*(arg3[eax_8 * 5 + 0x11b] + 0xe) == 1 && arg5 == 4)
                var_414 = 1
            label_49e576:
                
                if (arg3[6].b == 0)
                    sub_49c7b0(arg4)
                
                edi = arg4
                result, ecx_5 =
                    sub_49d9e0(arg3, edi, 0x17, nullptr, nullptr, 0, nullptr, eax_8, arg5, 0, 0)
                
                if (*(arg3 + 0x1ec3) != 0)
                    break
                
                if (result == 0)
                    var_424 = eax_8
                    
                    if (arg3[6].b == result.b)
                        sub_49c840(edi)
                        int32_t var_438_6 = *arg3[eax_8 * 5 + 0x11b]
                        int32_t var_43c_3 = *ecx_2
                        sub_5a733b(&var_40c, "%s declines %s.\n")
                        sub_4c5680(&var_40c)
                    
                    var_41c = 1
                    
                    if (var_414 != 0)
                        continue
                    else if (*(arg3[eax_8 * 5 + 0x11b] + 0xe) != 1)
                        continue
                    else if (arg5 != 4)
                        continue
                    else
                        var_41c = 0
                        continue
            
            if (arg3[6].b == 0)
                sub_49c690(arg4)
                char* eax_24 =
                    (arg4 + (sx.d(*(arg3 + 0x1ec2)) << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
                int32_t ecx_19 = 0xffffffff
                char* var_414_1 = eax_24
                *eax_24 = 1
                
                if (var_424 != 0xffffffff)
                    ecx_19 = sx.d(*(*(sub_418a10() + var_424 * 0x14 + 0x46c) + 4))
                    eax_24 = var_414_1
                
                *(eax_24 + 4) = ecx_19
                ecx_5 = var_414_1
                *(ecx_5 + 8) = sx.d(*(*(sub_418a10() + eax_8 * 0x14 + 0x46c) + 4))
            
            int32_t var_438_12 = 2
            sub_49cc30(arg3, eax_8, ecx_5, arg4)
            ecx_22 = arg4
            arg3[eax_8 * 5 + 0x11a].w = (arg3[eax_8 * 5 + 0x11a].w & 0xffc0) | 1 << ecx_22.b
            
            if (arg3[6].b == 0)
                int32_t var_438_13 = *arg3[eax_8 * 5 + 0x11b]
                int32_t var_43c_6 = *ecx_2
                sub_5a733b(&var_40c, "%s takes %s.\n")
                ecx_22 = sub_4c5680(&var_40c)
        
        result = 0
        int32_t edi_4 = 0
        
        if (0 s< arg3[0x118].w)
            void* ebx_3 = arg3 + 0x465
            
            do
                if (*ebx_3 == 6)
                    int32_t var_438_14 = 1
                    result = sub_49cc30(arg3, edi_4, ecx_22, 0xffffffff)
                
                ecx_22 = sx.d(arg3[0x118].w)
                edi_4 += 1
                ebx_3 += 0x14
            while (edi_4 s< ecx_22)
        
        break
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
