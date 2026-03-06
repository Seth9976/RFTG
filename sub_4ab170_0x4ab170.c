// 函数名称: sub_4ab170
// 虚拟地址: 0x4ab170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ab170(int32_t arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi = arg3
    void* ebx = arg4 * 0xb4 + edi
    int32_t i = sx.d(*(ebx + 0x46))
    int32_t esi = 0
    int32_t var_dac = 0
    int32_t var_d90 = 0
    int32_t var_d8c = 0
    int32_t var_d98 = 1
    void* var_da4 = ebx
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    
    if (i != 0xffffffff)
        do
            int32_t ecx = i * 5
            arg3 = edi + (ecx << 2) + 0x464
            
            if (*(edi + (ecx << 2) + 0x472) != 0)
                arg2 = sx.d(*(arg3 + 0xe))
                int32_t ecx_2 = sx.d(*(*(arg3 + 8) + 0xe))
                var_dac += arg2
                (&var_24)[ecx_2] += arg2
                ebx = var_da4
                arg3 = &(&__saved_ebp)[ecx_2 - 8]
            
            i = sx.d(*(edi + ((i * 5 + 0x11d) << 2)))
        while (i != 0xffffffff)
        
        if (var_24 != 0)
            var_d90 = 1
        
        if (var_20 != 0)
            var_d90 += 1
        
        if (var_1c != 0)
            var_d90 += 1
        
        if (var_18 != 0)
            var_d90 += 1
        
        if (var_14 != 0)
            var_d90 += 1
        
        if (var_10 != 0)
            var_d90 += 1
    
    void var_348
    void* var_dcc = &var_348
    int32_t var_dd0 = 4
    int32_t i_1
    int32_t ecx_3
    i_1, ecx_3 = sub_49dea0(arg4, arg2, arg3, edi)
    int32_t var_da0 = 0
    int32_t var_d88[0x148]
    int32_t var_868[0x148]
    
    if (i_1 s> 0)
        int32_t ecx_17
        
        do
            int32_t edi_1 = sx.d(*(&var_348 + (var_da0 << 3)))
            void var_344
            void* eax_6 = *(&var_344 + (var_da0 << 3))
            int32_t ecx_7 = *(eax_6 + 8)
            int32_t var_db4_1 = *(eax_6 + 0xc)
            int32_t var_da8_1 = 1
            
            if ((ecx_7 & 0x10000) != 0)
                var_da8_1 = 2
            
            if ((ecx_7 & 0x8000) == 0 || *(edi + edi_1 * 0x14 + 0x472) != 0)
                void var_346
                int32_t ebx_3
                
                if (((ecx_7 & 0x400) == 0 || var_dac s< var_da8_1)
                        && ((ecx_7 & 0x800) == 0 || var_20 + var_1c s< var_da8_1)
                        && ((ecx_7 & 0x1000) == 0 || var_18 + var_20 s< var_da8_1)
                        && ((ecx_7 & 0x2000) == 0 || var_14 + var_20 s< var_da8_1)
                        && ((ecx_7 & 0x4000) == 0 || var_10 + var_20 s< var_da8_1))
                    ebx_3 = var_da0
                else
                    ebx_3 = var_da0
                    int32_t edx_5 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = edx_5
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
                
                void* ecx_12 = *(&var_344 + (ebx_3 << 3))
                
                if ((*(ecx_12 + 8) & 0x20000) != 0 && var_d90 s>= 3)
                    int32_t eax_32 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = eax_32
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
                
                if ((*(ecx_12 + 8) & 0x40000) != 0 && var_dac s> 0)
                    int32_t edx_6 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = edx_6
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
                
                if ((*(ecx_12 + 8) & 0x80000) != 0 && var_dac s> 0)
                    int32_t eax_39 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = eax_39
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
                
                if ((*(ecx_12 + 8) & 0x100000) != 0 && *(var_da4 + 0xa3) s> 0)
                    int32_t eax_43 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = eax_43
                    esi += 1
                    var_d8c = esi
                
                int32_t ecx_13 = 0
                
                if ((*(ecx_12 + 8) & 0x10000000) != 0)
                    if (edi == 0)
                        goto label_4ab6d0
                    
                    if (arg4 s< 0)
                        goto label_4ab6d0
                    
                    void* edx_8 = var_da4
                    int32_t j = sx.d(*(edx_8 + 0x44))
                    
                    if (j s< 0xffffffff)
                        goto label_4ab6d0
                    
                    if (j != 0xffffffff)
                        do
                            j = sx.d(*(edi + ((j * 5 + 0x11d) << 2)))
                            ecx_13 += 1
                        while (j != 0xffffffff)
                        
                        edx_8 = var_da4
                    
                    if (sx.d(*(edx_8 + 0xae)) - sx.d(*(edx_8 + 0xb0)) + ecx_13 s>= var_da8_1)
                        int32_t eax_49 = sx.d(*(&var_346 + (ebx_3 << 3)))
                        var_868[esi] = edi_1
                        var_d88[esi] = eax_49
                        esi += 1
                        var_d8c = esi
                
                void* ecx_14 = *(&var_344 + (ebx_3 << 3))
                
                if ((*(ecx_14 + 8) & 0x100) != 0 && var_dac s> 0)
                    int32_t edx_13 = sx.d(*(&var_346 + (ebx_3 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = edx_13
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
                
                int32_t eax_54 = *(ecx_14 + 8)
                
                if (*(edi + 0x18) != 0)
                    int32_t ecx_15 = 0
                    
                    if ((eax_54 & 0x20000000) != 0)
                        if (arg4 s< 0)
                            goto label_4ab6d0
                        
                        void* edx_14 = var_da4
                        int32_t j_1 = sx.d(*(edx_14 + 0x44))
                        
                        if (j_1 s< 0xffffffff)
                            goto label_4ab6d0
                        
                        if (j_1 != 0xffffffff)
                            do
                                j_1 = sx.d(*(edi + ((j_1 * 5 + 0x11d) << 2)))
                                ecx_15 += 1
                            while (j_1 != 0xffffffff)
                            
                            edx_14 = var_da4
                        
                        if (sx.d(*(edx_14 + 0xae)) - sx.d(*(edx_14 + 0xb0)) + ecx_15 s>= 1)
                            var_d88[esi] = sx.d(*(&var_346 + (ebx_3 << 3)))
                            goto label_4ab644
                else if ((eax_54 & 0x20000000) != 0 && sub_4ab130(arg4, edi) != 0)
                    var_d88[esi] = sx.d(*(&var_346 + (var_da0 << 3)))
                label_4ab644:
                    var_868[esi] = edi_1
                    esi += 1
                    var_d8c = esi
                
                ecx_17 = var_da0
                
                if ((*(*(&var_344 + (ecx_17 << 3)) + 8) & 0x4c000000) != 0)
                    int32_t eax_68 = sx.d(*(&var_346 + (ecx_17 << 3)))
                    var_868[esi] = edi_1
                    var_d88[esi] = eax_68
                    esi += 1
                    var_d8c = esi
                    var_d98 = 0
            else
                ecx_17 = var_da0
            
            var_da0 = ecx_17 + 1
        while (ecx_17 + 1 s< i_1)
        ebx = var_da4
    
    int32_t eax_69 = 0x87
    
    if ((*(ebx + 0x2c) == 0x87 || *(ebx + 0x30) == 0x87) && *(ebx + 0x3d) == 0)
        if (edi != 0)
            if (arg4 s< 0)
                sub_49b2a0()
                noreturn
            
            int32_t i_2 = sx.d(*(ebx + 0x44))
            int32_t ecx_19 = 0
            
            if (i_2 s< 0xffffffff)
                sub_49b2a0()
                noreturn
            
            while (i_2 != 0xffffffff)
                i_2 = sx.d(*(edi + ((i_2 * 5 + 0x11d) << 2)))
                ecx_19 += 1
            
            eax_69 = sx.d(*(ebx + 0xb0))
            
            if (sx.d(*(ebx + 0xae)) - eax_69 + ecx_19 s>= 1)
                eax_69 = 0xffffffff
                var_868[esi] = 0xffffffff
                var_d88[esi] = 0xffffffff
                esi += 1
                var_d8c = esi
            
            goto label_4ab742
        
    label_4ab6d0:
        sub_49b2a0()
        noreturn
    
    label_4ab742:
    
    if (esi != 0)
        if (esi s> 0)
        label_4ab779:
            sub_49d720(edi, arg4)
            
            if (*(ebx + 0xc8) s>= *(ebx + 0xc4))
                eax_69 = (*(*(ebx + 0x28) + 0xc))(edi, arg4, 0xd, &var_868, &var_d8c, &var_d88, 
                    &var_d8c, var_d98, 0, 0, 0)
                
                if (*(edi + 0x1ec3) == 0)
                    int32_t eax_74 = *(*(ebx + 0x28) + 0x10)
                    
                    if (eax_74 != 0)
                        eax_74(edi, arg4, 0xd)
                    
                    int32_t var_dd8_3 = 0xd
                    eax_69 = sub_49d860(arg4, &var_d88, edi, arg4, 0xd, &var_868, &var_d8c, &var_d8c)
            else
                int32_t var_dd8_1 = 0xd
                eax_69 = sub_49d860(&var_868, &var_d88, edi, arg4, 0xd, &var_868, &var_d8c, &var_d8c)
            
            esi = var_d8c
        else if (esi == 1 && var_d98 != 0)
            goto label_4ab779
        
        if (*(edi + 0x1ec3) == 0 && (var_d98 == 0 || esi != 0))
            sub_4aab60(eax_69, edi, arg4, var_868[0], var_d88[0])
            int32_t result
            result.b = *(edi + 0x1ec3) == 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
