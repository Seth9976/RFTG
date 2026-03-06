// 函数名称: sub_4ac450
// 虚拟地址: 0x4ac450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ac450(int32_t arg1, int32_t* arg2, int32_t* arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg2
    int32_t* eax_4 = arg4 * 0xb4 + ebx
    int32_t* var_95c = ebx
    int32_t var_964 = arg5
    int32_t var_97c_12
    int32_t* var_978_14
    
    if (arg5 s< 0)
        arg2.b = 1
        arg2.b = 1 << (neg.d(arg5)).b
        *(eax_4 + 0x3d) |= arg2.b
        
        if (arg5 == 0xffffffff || arg5 == 0xfffffffe)
            var_978_14 = 0xffffffff
            var_97c_12 = 0xffffffff
            goto label_4acce9
        
        sub_49cf20(ebx, arg4, 3, "his Prestige Produce bonus")
        eax_4[0x2e].w += 3
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    void* eax_5 = &ebx[arg5 * 5]
    void* edx_2 = *(eax_5 + 0x46c) + ((arg3 * 3 + 3) << 3)
    *(eax_5 + 0x468) |= 1 << (arg3.b + 8)
    void* ecx_3 = **(eax_5 + 0x46c)
    int32_t eax_7 = *(edx_2 + 8)
    int32_t ecx_5 = *(edx_2 + 0xc)
    
    if (eax_7 == 1 && ecx_5 == 0)
        int32_t eax_8 = sub_4abcd0(eax_7, ebx, arg4, arg5, arg5, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_8
    
    if (eax_7 == 0x81 && ecx_5 == 0)
        int32_t eax_9 = sub_49e100(eax_7, var_95c, arg4, arg5, arg5)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_9
    
    if ((eax_7 & 0x100) != 0)
        sub_49cf20(ebx, arg4, sx.d(*(edx_2 + 0x10)), ecx_3)
        eax_4[0x2e].w += sx.w(*(edx_2 + 0x10))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    int32_t edx_8 = 0
    int32_t var_948_1
    
    if ((eax_7 & 0x8000) == 0)
        int16_t var_948_2
        int16_t ecx_36
        int32_t edx_11
        
        if ((eax_7 & &__dos_header) != 0)
            edx_11 = 1
        label_4ac66c:
            int32_t eax_18 = sub_49c940(arg4, edx_11, ebx)
            var_948_2 = eax_18.w
            sub_49cf20(ebx, arg4, sx.d(*(edx_2 + 0x10)) * eax_18, ecx_3)
            ecx_36 = sx.w(*(edx_2 + 0x10))
        label_4ac69f:
            ecx_36 *= var_948_2
        label_4ac6ad:
            eax_4[0x2e].w += ecx_36
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_4
        
        edx_8 = 0
        
        if ((eax_7 & &data_800000) == 0)
            edx_8 = 0
            
            if ((eax_7 & 0x1000000) == 0)
                if ((eax_7 & 0x2000000) != 0)
                    edx_11 = 0x400
                    goto label_4ac66c
                
                if ((eax_7 & 0x4000000) != 0)
                    int32_t eax_24 = sub_49c940(arg4, 0x800, ebx)
                    var_948_2 = eax_24.w
                    sub_49cf20(ebx, arg4, sx.d(*(edx_2 + 0x10)) * eax_24, ecx_3)
                    ecx_36 = sx.w(*(edx_2 + 0x10))
                    goto label_4ac69f
                
                if ((eax_7 & 0x8000000) == 0)
                    int32_t edx_18 = 0
                    int32_t eax_28
                    
                    if ((eax_7 & 0x200000) != 0)
                        int32_t i = 0
                        int32_t i_6 = 0
                        
                        if (sx.d(ebx[0x116].b) s> 0)
                            do
                                if (i != arg4)
                                    edx_18 = 0x800
                                    int32_t eax_27 = sub_49c940(arg4, 0x800, ebx)
                                    eax_28 = sub_49c940(i_6, 0x800, ebx)
                                    
                                    if (eax_28 s>= eax_27)
                                        goto label_4accf9
                                    
                                    i = i_6
                                
                                i += 1
                                i_6 = i
                            while (i s< sx.d(ebx[0x116].b))
                        
                        *(edx_2 + 0x10)
                        sub_49d110(edx_2, edx_18, ecx_3, var_95c, arg4)
                        eax_4[0x2f].w += sx.w(*(edx_2 + 0x10))
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_4
                    
                    if ((eax_7 & 0x10000000) != 0)
                        int32_t* edx_20 = ebx
                        int32_t var_944[0x148]
                        eax_28 = sub_49db30(eax_7, edx_20, arg4, &var_944, 5)
                        int32_t var_948_4 = eax_28
                        int32_t var_958_1 = 0
                        
                        if (eax_28 s> 0)
                            eax_28 = 0
                            char var_40c[0x404]
                            
                            do
                                if (ebx[6].b == 0)
                                    int32_t var_978_8 = var_944[eax_28]
                                    sub_49c120(arg4, edx_20)
                                    ebx = var_95c
                                
                                int32_t esi_9 = var_944[var_958_1]
                                int32_t var_978_9 = 2
                                sub_49cc30(ebx, esi_9, var_958_1, arg4)
                                edx_20 = eax_4
                                
                                if (*(edx_20[0xa] + 0x20) != 0)
                                    int32_t var_978_10 = *ebx[esi_9 * 5 + 0x11b]
                                    int32_t var_97c_8 = eax_4[8]
                                    sub_5a733b(&var_40c, "%s takes %s.\n")
                                    edx_20 = (*(eax_4[0xa] + 0x20))(ebx, arg4, &var_40c, "discard")
                                
                                eax_28 = var_958_1 + 1
                                var_958_1 = eax_28
                            while (eax_28 s< var_948_4)
                            
                            if (var_948_4 s> 0 && ebx[6].b == 0)
                                char* const eax_37 = &data_83f3d3
                                
                                if (var_948_4 != 1)
                                    eax_37 = &data_85f840
                                
                                int32_t var_978_11 = **(eax_5 + 0x46c)
                                char* const var_97c_9 = eax_37
                                int32_t var_980_1 = var_948_4
                                int32_t var_984_2 = eax_4[8]
                                sub_5a733b(&var_40c, "%s takes %d card%s from under %s.\n")
                                int32_t eax_39
                                int32_t edx_28
                                eax_39, edx_28 = sub_4c5680(&var_40c)
                                char (* var_978_12)[0x404] = &var_40c
                                char* eax_40 = sub_4591b0(eax_39, edx_28, ebx, arg4)
                                sub_5a6aba(eax_1 ^ &__saved_ebp)
                                return eax_40
                        
                        goto label_4accf9
                    
                    if ((eax_7 & 0x80) != 0 && (eax_7 & 0x3e) != 0)
                        int32_t eax_41 = sub_4ac0a0(eax_7, arg3, ebx, arg4, arg5, arg3)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_41
                    
                    if ((eax_7 & 0x3e) != 0)
                        eax_4 = arg3
                        var_978_14 = eax_4
                        var_97c_12 = arg5
                    label_4acce9:
                        eax_28 = sub_4ac260(eax_4, ebx, arg4, var_97c_12, var_978_14)
                    label_4accf9:
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_28
                    
                    int32_t i_1 = sx.d(*(eax_4 + 0x46))
                    int32_t var_424
                    __builtin_memset(&var_424, 0, 0x18)
                    
                    for (; i_1 != 0xffffffff; i_1 = sx.d(ebx[i_1 * 5 + 0x11d].w))
                        if ((ebx[i_1 * 5 + 0x11a].w & 0xe000) != 0)
                            uint32_t edx_33 = zx.d(ebx[i_1 * 5 + 0x11a].w) u>> 0xd
                            (&var_424)[edx_33] += 1
                    
                    int32_t var_41c
                    
                    if ((eax_7 & 0x800) != 0)
                        sub_49cf20(ebx, arg4, var_41c, ecx_3)
                        ecx_36 = var_41c.w
                        goto label_4ac6ad
                    
                    int32_t var_418
                    
                    if ((eax_7 & 0x1000) != 0)
                        sub_49cf20(ebx, arg4, var_418, ecx_3)
                        ecx_36 = var_418.w
                        goto label_4ac6ad
                    
                    int32_t var_414
                    
                    if ((eax_7 & 0x2000) != 0)
                        sub_49cf20(ebx, arg4, var_414, ecx_3)
                        ecx_36 = var_414.w
                        goto label_4ac6ad
                    
                    int32_t var_410
                    
                    if ((eax_7 & 0x4000) != 0)
                        sub_49cf20(ebx, arg4, var_410, ecx_3)
                        ecx_36 = var_410.w
                        goto label_4ac6ad
                    
                    eax_28 = eax_7 & 0x20000
                    
                    if (eax_28 == 0)
                        goto label_4accf9
                    
                    int32_t var_948_5 = 0
                    
                    if (var_424 != 0)
                        var_948_5 = 1
                    
                    int32_t var_420
                    
                    if (var_420 != 0)
                        var_948_5 += 1
                    
                    if (var_41c != 0)
                        var_948_5 += 1
                    
                    if (var_418 != 0)
                        var_948_5 += 1
                    
                    if (var_414 != 0)
                        var_948_5 += 1
                    
                    if (var_410 != 0)
                        var_948_5 += 1
                    
                    sub_49cf20(ebx, arg4, var_948_5, ecx_3)
                    ecx_36 = var_948_5.w
                    goto label_4ac6ad
                
                int32_t i_2 = sx.d(*(eax_4 + 0x46))
                int32_t esi_6 = 0
                var_948_1 = 0
                
                if (i_2 != 0xffffffff)
                    do
                        void* ecx_64 = ebx[i_2 * 5 + 0x11b]
                        
                        if (*(ecx_64 + 6) == 2 && *(ecx_64 + 7) s>= 5)
                            esi_6 += 1
                        
                        i_2 = sx.d(ebx[i_2 * 5 + 0x11d].w)
                    while (i_2 != 0xffffffff)
                    
                    var_948_1 = esi_6
            else
                int32_t i_3 = sx.d(*(eax_4 + 0x46))
                var_948_1 = 0
                
                if (i_3 != 0xffffffff)
                    do
                        void* esi_4 = ebx[i_3 * 5 + 0x11b]
                        
                        if (*(esi_4 + 6) == 1)
                            char ecx_50 = (*(esi_4 + 0x10)).b
                            
                            if ((ecx_50 & 1) != 0 && (ecx_50 & 0x40) != 0)
                                edx_8 += 1
                        
                        i_3 = sx.d(ebx[i_3 * 5 + 0x11d].w)
                    while (i_3 != 0xffffffff)
                    
                    var_948_1 = edx_8
        else
            int32_t i_4 = sx.d(*(eax_4 + 0x46))
            var_948_1 = 0
            
            if (i_4 != 0xffffffff)
                do
                    void* ecx_44 = ebx[i_4 * 5 + 0x11b]
                    
                    if (*(ecx_44 + 6) != 2 && (*(ecx_44 + 0x10) & 0x40) != 0)
                        edx_8 += 1
                    
                    i_4 = sx.d(ebx[i_4 * 5 + 0x11d].w)
                while (i_4 != 0xffffffff)
                
                var_948_1 = edx_8
    else
        int32_t i_5 = sx.d(*(eax_4 + 0x46))
        var_948_1 = 0
        
        if (i_5 != 0xffffffff)
            do
                void* ecx_24
                ecx_24.b = *(ebx[i_5 * 5 + 0x11b] + 0xe)
                
                if (ecx_24.b == 4 || ecx_24.b == 1)
                    edx_8 += 1
                
                i_5 = sx.d(ebx[i_5 * 5 + 0x11d].w)
            while (i_5 != 0xffffffff)
            
            var_948_1 = edx_8
    
    sub_49cf20(ebx, arg4, sx.d(*(edx_2 + 0x10)) * var_948_1, ecx_3)
    eax_4[0x2e].w += sx.w(*(edx_2 + 0x10)) * var_948_1.w
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}
