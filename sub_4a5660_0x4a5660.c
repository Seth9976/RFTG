// 函数名称: sub_4a5660
// 虚拟地址: 0x4a5660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a5660(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx_2 = &arg2[arg5 * 5]
    int32_t result_7 = *(ecx_2 + 0x46c) + ((arg6 * 3 + 3) << 3)
    *(ecx_2 + 0x468) |= 1 << (arg6.w + 8).b
    void* edi_2 = arg4 * 0xb4 + arg2
    void* var_93c = edi_2
    
    if ((*(result_7 + 8) & 0x1000000) == 0)
        goto label_4a584e
    
    *(edi_2 + 0x60) = 0xffff
    int32_t eax_8 = sx.d(*(edi_2 + 0x44))
    int32_t var_934 = 0
    int32_t var_938_1 = eax_8
    
    if (eax_8 == 0xffffffff)
        goto label_4a57d3
    
    int32_t var_930[0x148]
    
    while (true)
        int32_t ecx_5 = eax_8 * 5
        void* var_94c = &arg2[ecx_5 + 0x119]
        
        if (*(arg2[ecx_5 + 0x11b] + 6) == 1)
            edi_2 = var_93c
            
            if (sub_4a1120(arg2, eax_8, 0, 0, 0, 0) != 0)
                int32_t eax_10 = var_934
                var_930[eax_10] = var_938_1
                var_934 = eax_10 + 1
            
            eax_8 = var_938_1
        
        int32_t eax_12 = sx.d(arg2[eax_8 * 5 + 0x11d].w)
        var_938_1 = eax_12
        
        if (eax_12 == 0xffffffff)
            break
        
        eax_8 = var_938_1
    
    if (var_934 == 0)
        goto label_4a57d3
    
    int32_t result = sub_49d9e0(arg2, arg4, 5, &var_930, &var_934, 0, nullptr, 3, arg5, 1, 0)
    *(var_93c + 0x60) = result.w
    
    if (*(arg2 + 0x1ec3) == 0)
        edi_2 = var_93c
    label_4a57d3:
        uint32_t eax_14 = zx.d(*(edi_2 + 0x60))
        
        if (eax_14.w != 0xffff)
            sub_4a5400(sub_49f030(eax_14, sx.d(eax_14.w), arg2, arg4, 0), arg5, arg4, arg2, 
                sx.d(*(edi_2 + 0x60)), 0, 0)
        label_4a584e:
            char var_410[0x404]
            
            if ((*(result_7 + 8) & 0x2000000) == 0)
            label_4a5a06:
                int32_t result_5 = result_7
                
                if ((*(result_5 + 8) & 0x4000000) == 0)
                label_4a5c56:
                    
                    if ((*(result_7 + 8) & 0x8000000) == 0)
                    label_4a5e29:
                        int32_t eax_67 = *(result_7 + 0xc) & 0x200
                        
                        if (eax_67 != 0)
                            sub_4a4cd0(eax_67, result_5, arg2, arg4)
                        
                        result = *(result_7 + 0xc) & 0x400
                        
                        if (result != 0)
                            result = sub_4a51d0(arg2, arg4)
                    else
                        result_5 = 0xffffffff
                        *(edi_2 + 0x60) = 0xffff
                        int32_t result_8 = sx.d(*(edi_2 + 0x44))
                        var_934 = 0
                        int32_t result_6 = result_8
                        
                        if (result_8 == 0xffffffff)
                        label_4a5d95:
                            uint32_t eax_62 = zx.d(*(edi_2 + 0x60))
                            
                            if (eax_62.w != 0xffff)
                                void* eax_63 = sub_49f030(eax_62, sx.d(eax_62.w), arg2, arg4, 0)
                                
                                if (arg2[6].b == 0)
                                    int32_t var_964_10 = **(ecx_2 + 0x46c)
                                    int32_t var_968_16 = *(edi_2 + 0x20)
                                    sub_5a733b(&var_410, "%s uses %s to place an additional world.\n")
                                    int32_t eax_65
                                    int32_t edx_28
                                    eax_65, edx_28 = sub_4c5680(&var_410)
                                    char (* var_964_11)[0x404] = &var_410
                                    eax_63 = sub_4591b0(eax_65, edx_28, arg2, arg4)
                                
                                result_5 =
                                    sub_4a5400(eax_63, arg5, arg4, arg2, sx.d(*(edi_2 + 0x60)), 0, 0)
                            
                            goto label_4a5e29
                        
                        while (true)
                            void* ecx_43 = arg2[result_8 * 5 + 0x11b]
                            
                            if (*(ecx_43 + 6) == 1 && *(ecx_43 + 0xe) != 5)
                                int32_t eax_55
                                eax_55, result_5 = sub_4a1120(arg2, result_8, 0, 0, 1, 0)
                                edi_2 = var_93c
                                
                                if (eax_55 != 0)
                                    int32_t eax_56 = var_934
                                    result_5 = result_6
                                    var_930[eax_56] = result_5
                                    var_934 = eax_56 + 1
                                
                                result_8 = result_6
                            
                            int32_t result_9 = sx.d(arg2[result_8 * 5 + 0x11d].w)
                            result_6 = result_9
                            
                            if (result_9 == 0xffffffff)
                                break
                            
                            result_8 = result_6
                        
                        if (var_934 == 0)
                            goto label_4a5d95
                        
                        sub_49d720(arg2, arg4)
                        
                        if (*(edi_2 + 0xc8) s< *(edi_2 + 0xc4))
                            result, result_5 =
                                sub_49d860(&var_930, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                        else
                            result_5 = (*(*(edi_2 + 0x28) + 0xc))(arg2, arg4, 5, &var_930, &var_934, 0, 
                                0, 3, arg5, 1, 0)
                            
                            if (*(arg2 + 0x1ec3) == 0)
                                int32_t eax_60 = *(*(edi_2 + 0x28) + 0x10)
                                
                                if (eax_60 != 0)
                                    eax_60(arg2, arg4, 5)
                                
                                int32_t var_964_9 = 0
                                result, result_5 =
                                    sub_49d860(&var_930, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                            else
                                result = 0xffffffff
                        
                        *(edi_2 + 0x60) = result.w
                        
                        if (*(arg2 + 0x1ec3) == 0)
                            goto label_4a5d95
                else
                    result_5 = arg3
                    result = sx.d(*(arg2[result_5 * 5 + 0x11b] + 7))
                    *(edi_2 + 0x60) = 0xffff
                    int32_t result_4 = sx.d(*(edi_2 + 0x44))
                    int32_t result_1 = result
                    var_934 = 0
                    int32_t result_3 = result_4
                    
                    if (result_4 == 0xffffffff)
                    label_4a5b98:
                        
                        if (*(edi_2 + 0x60) == 0xffff)
                            goto label_4a5c56
                        
                        if (arg2[6].b == 0)
                            int32_t var_964_6 = **(ecx_2 + 0x46c)
                            int32_t var_968_10 = *(edi_2 + 0x20)
                            sub_5a733b(&var_410, "%s uses %s to place an additional world.\n")
                            int32_t eax_46
                            int32_t edx_19
                            eax_46, edx_19 = sub_4c5680(&var_410)
                            char (* var_964_7)[0x404] = &var_410
                            result = sub_4591b0(eax_46, edx_19, arg2, arg4)
                        
                        int32_t eax_48 = sub_4a0fd0(
                            sub_49f030(result, sx.d(*(edi_2 + 0x60)), arg2, arg4, 0), arg3, 
                            sx.d(*(edi_2 + 0x60)), arg2, arg4)
                        int32_t eax_49 = result_1 - eax_48
                        
                        if (result_1 - eax_48 s< 0)
                            eax_49 = 0
                        
                        int32_t eax_50 = neg.d(eax_49)
                        result, result_5 =
                            sub_4a5400(eax_50, arg5, arg4, arg2, sx.d(*(edi_2 + 0x60)), 1, eax_50)
                        
                        if (*(arg2 + 0x1ec3) == 0)
                            goto label_4a5c56
                    else
                        while (true)
                            void* eax_36 = arg2[result_4 * 5 + 0x11b]
                            
                            if (*(eax_36 + 6) == 1 && (*(eax_36 + 0x10) & 1) != 0)
                                int32_t eax_37 = sub_4a0fd0(eax_36, result_5, result_4, arg2, arg4)
                                int32_t ecx_25 = result_1 - eax_37
                                
                                if (result_1 - eax_37 s< 0)
                                    ecx_25 = 0
                                
                                int32_t eax_38
                                eax_38, result_5 = sub_4a1120(arg2, result_3, neg.d(ecx_25), 1, 0, 0)
                                edi_2 = var_93c
                                result_4 = result_3
                                
                                if (eax_38 != 0)
                                    int32_t eax_39 = var_934
                                    result_5 = result_4
                                    var_930[eax_39] = result_5
                                    var_934 = eax_39 + 1
                            
                            result = sx.d(arg2[result_4 * 5 + 0x11d].w)
                            result_3 = result
                            
                            if (result == 0xffffffff)
                                break
                            
                            result_4 = result_3
                            result_5 = arg3
                        
                        if (var_934 == 0)
                            goto label_4a5b98
                        
                        sub_49d720(arg2, arg4)
                        
                        if (*(edi_2 + 0xc8) s< *(edi_2 + 0xc4))
                            result, result_5 =
                                sub_49d860(&var_930, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                        else
                            result_5 = (*(*(edi_2 + 0x28) + 0xc))(arg2, arg4, 5, &var_930, &var_934, 0, 
                                0, 3, arg5, 1, 0)
                            
                            if (*(arg2 + 0x1ec3) == 0)
                                int32_t eax_43 = *(*(edi_2 + 0x28) + 0x10)
                                
                                if (eax_43 != 0)
                                    eax_43(arg2, arg4, 5)
                                
                                int32_t var_964_5 = 0
                                result, result_5 =
                                    sub_49d860(&var_930, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                            else
                                result = 0xffffffff
                        
                        *(edi_2 + 0x60) = result.w
                        
                        if (*(arg2 + 0x1ec3) == 0)
                            goto label_4a5b98
            else
                *(edi_2 + 0x60) = 0xffff
                result = sx.d(*(edi_2 + 0x44))
                var_934 = 0
                int32_t result_2 = result
                
                if (result == 0xffffffff)
                label_4a598c:
                    
                    if (*(edi_2 + 0x60) == 0xffff)
                        goto label_4a5a06
                    
                    if (arg2[6].b == 0)
                        int32_t var_964_2 = **(ecx_2 + 0x46c)
                        int32_t var_968_4 = *(edi_2 + 0x20)
                        sub_5a733b(&var_410, "%s uses %s to place an additional world.\n")
                        char (* var_964_3)[0x404] = &var_410
                        result = sub_4591b0(&var_410, sub_4c5680(&var_410), arg2, arg4)
                    
                    sub_4a5400(sub_49f030(result, sx.d(*(edi_2 + 0x60)), arg2, arg4, 0), arg5, arg4, 
                        arg2, sx.d(*(edi_2 + 0x60)), 1, 0)
                    goto label_4a5a06
                
                while (true)
                    if (*(arg2[result * 5 + 0x11b] + 6) == 1)
                        edi_2 = var_93c
                        
                        if (sub_4a1120(arg2, result, 0, 1, 0, 0) != 0)
                            int32_t eax_21 = var_934
                            var_930[eax_21] = result_2
                            var_934 = eax_21 + 1
                        
                        result = result_2
                    
                    result = sx.d(arg2[result * 5 + 0x11d].w)
                    result_2 = result
                    
                    if (result == 0xffffffff)
                        break
                    
                    result = result_2
                
                if (var_934 == 0)
                    goto label_4a598c
                
                sub_49d720(arg2, arg4)
                int32_t eax_23 = *(edi_2 + 0xc8)
                
                if (eax_23 s< *(edi_2 + 0xc4))
                    result = sub_49d860(eax_23, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                else
                    (*(*(edi_2 + 0x28) + 0xc))(arg2, arg4, 5, &var_930, &var_934, 0, 0, 3, arg5, 1, 0)
                    
                    if (*(arg2 + 0x1ec3) == 0)
                        eax_23 = *(*(edi_2 + 0x28) + 0x10)
                        
                        if (eax_23 != 0)
                            eax_23 = eax_23(arg2, arg4, 5)
                        
                        int32_t var_964_1 = 0
                        result = sub_49d860(eax_23, 0, arg2, arg4, 5, &var_930, &var_934, nullptr)
                    else
                        result = 0xffffffff
                
                *(edi_2 + 0x60) = result.w
                
                if (*(arg2 + 0x1ec3) == 0)
                    goto label_4a598c
        else
            result = sub_4a43c0(arg4, 0)
            
            if (result != 0)
                result = sub_4a5400(result, arg5, arg4, arg2, 0xffffffff, 0, 0)
            
            if (*(arg2 + 0x1ec3) == 0)
                goto label_4a584e
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
