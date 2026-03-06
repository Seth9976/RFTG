// 函数名称: sub_4a6bf0
// 虚拟地址: 0x4a6bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a6bf0(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* ecx
    char* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x12b0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* esi = edx
    int32_t edx_1 = sx.d(esi[ecx * 0x2d + 0x19].b)
    int32_t eax_4 = &esi[ecx * 0x2d]
    int32_t i = sx.d(*(eax_4 + 0x56))
    int32_t edi = 0
    int32_t* var_12a8 = esi
    char* var_12a4 = ecx
    int32_t var_1298 = 0
    int32_t var_129c = 0
    int32_t var_1294 = 0
    int32_t var_12a0 = 0
    int32_t var_12b0 = edx_1
    
    if (i != 0xffffffff)
        do
            int32_t eax_5 = i * 5
            edx_1 = esi[eax_5 + 0x11b]
            void* esi_1 = &esi[eax_5]
            int32_t j = 0
            
            if (*(edx_1 + 0x15) s> 0)
                edx_1 += 0x28
                
                do
                    if (*(edx_1 - 0x10) == 3 && (zx.d(*(esi_1 + 0x468)) & 1 << (j.b + 8)) != 0
                            && (*(edx_1 - 8) & 0x80) != 0 && sx.d(*edx_1) s> var_12b0)
                        edx_1.w = 1 << (j.b + 8)
                        edx_1.w = not.w(edx_1.w)
                        *(esi_1 + 0x468) &= edx_1.w
                        break
                    
                    j += 1
                    edx_1 += 0x18
                while (j s< sx.d(*(*(esi_1 + 0x46c) + 0x15)))
            
            i = sx.d(*(esi_1 + 0x476))
            esi = var_12a8
        while (i != 0xffffffff)
        
        edi = var_129c
        ecx = var_12a4
    
    void var_330
    void* var_14 = &var_330
    int32_t var_18 = 3
    int32_t eax_13
    int32_t edx_2
    eax_13, edx_2 = sub_49dea0(ecx, edx_1, ecx, esi)
    var_1298 = eax_13
    int32_t var_850[0x148]
    
    if (eax_13 s> 0)
        int32_t ebx_1 = 0
        
        do
            void var_32c
            void* esi_2 = *(&var_32c + (ebx_1 << 3))
            
            if (*(esi_2 + 8) == 0x120 && *(esi_2 + 0xc) == 0)
                var_850[edi] = sx.d(*(&var_330 + (ebx_1 << 3)))
                edi += 1
                var_129c = edi
                edx_2 = sx.d(*(esi_2 + 0x10))
                var_1294 += edx_2
            
            if ((*(esi_2 + 8) & 0x80) != 0)
                var_850[edi] = sx.d(*(&var_330 + (ebx_1 << 3)))
                edi += 1
                var_129c = edi
                var_12a0 += sx.d(*(esi_2 + 0x10))
            
            if ((*(esi_2 + 8) & 0x80000000) == 0)
                goto label_4a6dce
            
            edx_2 = eax_4
            
            if (*(edx_2 + 0xa3) != 0)
                var_850[edi] = sx.d(*(&var_330 + (ebx_1 << 3)))
                edi += 1
                var_129c = edi
                var_1294 += sx.d(*(esi_2 + 0x10))
            label_4a6dce:
                
                if ((*(esi_2 + 8) & 0x10000000) == 0)
                    goto label_4a6e1e
                
                void var_1290
                int32_t eax_26
                eax_26, edx_2 = sub_49db70(var_12a8, &var_1290, var_12a4, var_12a8, &var_1290, 3)
                
                if (eax_26 != 0)
                    var_850[edi] = sx.d(*(&var_330 + (ebx_1 << 3)))
                    edi += 1
                    var_129c = edi
                    edx_2 = sx.d(*(esi_2 + 0x10))
                    var_1294 += edx_2
                label_4a6e1e:
                    
                    if ((*(esi_2 + 8) & 0x40000000) != 0)
                        int32_t eax_31
                        eax_31, edx_2 = sub_49db70(&var_1290, edx_2, var_12a4, var_12a8, &var_1290, 5)
                        
                        if (eax_31 != 0)
                            edx_2 = sx.d(*(&var_330 + (ebx_1 << 3)))
                            var_850[edi] = edx_2
                            edi += 1
                            var_129c = edi
                            var_1294 += sx.d(*(esi_2 + 0x10))
            
            ebx_1 += 1
        while (ebx_1 s< var_1298)
        
        esi = var_12a8
    
    if (esi == 0)
        sub_49b2a0()
        noreturn
    
    if (var_12a4 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t edi_1 = eax_4
    int32_t i_2 = sx.d(*(edi_1 + 0x44))
    int32_t i_1 = i_2
    int32_t edx_4 = 0
    
    if (i_1 s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i_1 != 0xffffffff)
        i_1 = sx.d(esi[i_1 * 5 + 0x11d].w)
        edx_4 += 1
    
    int32_t ebx_4 = sx.d(*(edi_1 + 0xae)) - sx.d(*(edi_1 + 0xb0))
    int32_t ecx_15 = ebx_4 + edx_4
    
    if (var_12a0 s> ecx_15)
        var_12a0 = ecx_15
    
    int32_t ecx_17 = var_1294 + var_12a0
    
    if (ecx_17 s> arg4)
        int32_t edx_5 = 0
        int32_t var_d70[0x148]
        
        while (i_2 != 0xffffffff)
            var_d70[edx_5] = i_2
            i_2 = sx.d(esi[i_2 * 5 + 0x11d].w)
            edx_5 += 1
        
        var_1298 = edx_5
        
        if (ebx_4 s> 0)
            void* edi_2 = &(&__saved_ebp)[edx_5 - 0x35b]
            edx_5 += ebx_4
            __builtin_memset(edi_2, 0xffffffff, ebx_4 << 2)
            edi_1 = eax_4
            var_1298 = edx_5
        
        if (*(edi_1 + 0xb0) s> *(edi_1 + 0xae))
            var_1298 = edx_5 + ebx_4
        
        if (var_12a0 == 0)
            var_1298 = 0
        
        sub_49d720(esi, var_12a4)
        int32_t* var_1c_3
        int32_t* var_18_3
        int32_t* var_14_3
        int32_t* eax_35
        
        if (*(edi_1 + 0xc8) s>= *(edi_1 + 0xc4))
            i_2 = (*(*(edi_1 + 0x28) + 0xc))(esi, var_12a4, 9, &var_d70, &var_1298, &var_850, 
                &var_129c, arg2, arg3, arg4, ecx_17)
            
            if (*(esi + 0x1ec3) == 0)
                int32_t eax_39 = *(*(edi_1 + 0x28) + 0x10)
                
                if (eax_39 != 0)
                    eax_39(esi, var_12a4, 9)
                
                var_14_3 = &var_129c
                var_18_3 = &var_1298
                eax_35 = &var_d70
                var_1c_3 = &var_d70
                goto label_4a702a
        else
            var_14_3 = &var_129c
            eax_35 = &var_1298
            var_18_3 = &var_1298
            var_1c_3 = &var_d70
        label_4a702a:
            i_2 = sub_49d860(eax_35, &var_850, esi, var_12a4, 9, var_1c_3, var_18_3, var_14_3)
            
            if (*(esi + 0x1ec3) == 0)
                int32_t eax_40 = var_1298
                i_2 = sub_4a6510(eax_40, var_12a4, esi, arg4, &var_d70, eax_40, &var_850, var_129c)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return i_2
}
