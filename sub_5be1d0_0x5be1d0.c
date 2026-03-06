// 函数名称: sub_5be1d0
// 虚拟地址: 0x5be1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5be1d0(char* arg1 @ esi, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_64
    int32_t var_64
    
    if (zip_source_stat(arg3, &var_64) s< 0)
        sub_5bf050(&arg2[2], arg3)
        return 0xffffffff
    
    int32_t eax_2 = var_64
    int16_t var_30
    int16_t edx
    
    if ((eax_2 & 0x40) != 0)
        edx = var_30
    else
        eax_2 |= 0x40
        edx = 0
        var_64 = eax_2
        var_30 = 0
    
    int32_t ecx_5 = *(arg1 + 0xc)
    int32_t var_4c
    int32_t var_48
    int32_t var_44
    int32_t var_40
    
    if ((ecx_5 == 0xffffffff || ecx_5 == 0xfffffffe) && edx != 0)
        *(arg1 + 0xc) = zx.d(edx)
    else
        if (ecx_5 != 0 || (eax_2 & 4) == 0)
            eax_2 &= 0xfffffff7
            int32_t var_60_2 = 0
        else
            eax_2 |= 8
            int32_t var_60
            int32_t var_60_1 = var_60
            var_44 = var_4c
            var_40 = var_48
        
        var_64 = eax_2
    
    int32_t var_8 = 0x100
    
    if ((eax_2 & 4) != 0)
        *(arg1 + 0x28) = var_4c
        *(arg1 + 0x2c) = var_48
        
        if ((eax_2 & 8) != 0)
            *(arg1 + 0x20) = var_44
            *(arg1 + 0x24) = var_40
        else
            int32_t eax_5 = *(arg1 + 0xc)
            
            if ((eax_5 == 8 || eax_5 == 0xffffffff || eax_5 == 0xfffffffe)
                    && (var_48 u> 0 || (var_48 u>= 0 && var_4c u> 0xffec0183)))
                var_8 = 0x500
            else if (eax_5 != 0 && eax_5 != 8 && eax_5 != 0xffffffff && eax_5 != 0xfffffffe)
                var_8 = 0x500
    else
        var_8 = 0x500
    
    int32_t eax_7
    int32_t edx_4
    eax_7, edx_4 = zip_source_tell_write(*arg2)
    
    if (edx_4 s> 0)
    label_5be318:
        *(arg1 + 0xa) &= 0xfff7
        int32_t eax_8 = sub_5c0290(arg2, arg1, var_8)
        
        if (eax_8 s>= 0)
            int32_t* ebx_1
            int32_t* ebx_2
            
            if (var_30 == 0)
                ebx_2 = arg3
                zip_source_keep(ebx_2)
            label_5be3b3:
                int32_t* eax_14 = sub_5c2640(arg2, ebx_2, 0)
                zip_source_free(ebx_2)
                
                if (eax_14 != 0)
                    int32_t edx_6 = *(arg1 + 0xc)
                    
                    if (edx_6 == 0 || ((var_64 & 4) != 0 && (var_4c | var_48) == 0))
                        ebx_1 = eax_14
                    else
                        int32_t eax_20 = sub_5c26d0(edx_6)
                        
                        if (eax_20 == 0)
                            zip_error_set(&arg2[2], 0x10, eax_20)
                            zip_source_free(eax_14)
                            return 0xffffffff
                        
                        ebx_1 = eax_20(arg2, eax_14, *(arg1 + 0xc), 1)
                        zip_source_free(eax_14)
                        
                        if (ebx_1 == 0)
                            return 0xffffffff
                    
                    goto label_5be43e
            else
                int32_t eax_9 = *(arg1 + 0xc)
                uint32_t ecx_16
                
                if (eax_9 == 0xffffffff || eax_9 == 0xfffffffe)
                    ecx_16 = zx.d(var_30)
                
                if ((eax_9 == 0xffffffff || eax_9 == 0xfffffffe) && ecx_16 != eax_9)
                    int32_t eax_10 = sub_5c26d0(ecx_16)
                    
                    if (eax_10 == 0)
                        zip_error_set(&arg2[2], 0x10, 0)
                        return 0xffffffff
                    
                    ebx_2 = eax_10(arg2, arg3, zx.d(var_30), 0)
                    
                    if (ebx_2 == 0)
                        return 0xffffffff
                    
                    goto label_5be3b3
                
                ebx_1 = arg3
                zip_source_keep(ebx_1)
            label_5be43e:
                int32_t eax_24
                int32_t edx_9
                eax_24, edx_9 = zip_source_tell_write(*arg2)
                
                if (edx_9 s> 0)
                label_5be465:
                    int32_t var_c_1 = sub_5bdfa0(arg1)
                    
                    if (zip_source_stat(ebx_1, &var_64) s< 0)
                        var_c_1 = 0xffffffff
                    
                    zip_source_free(ebx_1)
                    
                    if (var_c_1 s>= 0)
                        int32_t eax_27
                        int32_t edx_10
                        eax_27, edx_10 = zip_source_tell_write(*arg2)
                        
                        if (edx_10 s> 0)
                        label_5be4c2:
                            
                            if (zip_source_seek_write(*arg2, eax_7, edx_4, 0) s< 0)
                                sub_5bf050(&arg2[2], *arg2)
                                return 0xffffffff
                            
                            int32_t ecx_23 = var_64
                            
                            if ((ecx_23 & 0x64) != 0x64)
                                int32_t var_70_14 = 0
                                zip_error_set(&arg2[2], 0x14, 0)
                                return 0xffffffff
                            
                            if ((*arg1 & 0x20) == 0)
                                int32_t eax_35 = ecx_23 & 0x10
                                
                                if (eax_35 == 0)
                                    sub_5aa87a(eax_35, &arg1[0x10], 0, &arg1[0x10])
                                else
                                    int32_t var_3c
                                    *(arg1 + 0x10) = var_3c
                                    int32_t var_38
                                    *(arg1 + 0x14) = var_38
                            
                            *(arg1 + 0xc) = zx.d(var_30)
                            int32_t var_34
                            *(arg1 + 0x18) = var_34
                            *(arg1 + 0x2c) = var_48
                            *(arg1 + 0x28) = var_4c
                            *(arg1 + 0x20) = eax_27 - eax_24
                            *(arg1 + 0x24) = sbb.d(edx_10, edx_9, eax_27 u< eax_24)
                            int32_t eax_40 = sub_5c0290(arg2, arg1, var_8)
                            
                            if (eax_40 s>= 0)
                                if (eax_8 != eax_40)
                                    zip_error_set(&arg2[2], 0x14, 0)
                                    return 0xffffffff
                                
                                if (zip_source_seek_write(*arg2, eax_27, edx_10, 0) s>= 0)
                                    return 0
                                
                                sub_5bf050(&arg2[2], *arg2)
                        else if (edx_10 s>= 0 && eax_27 u>= 0)
                            goto label_5be4c2
                else if (edx_9 s>= 0 && eax_24 u>= 0)
                    goto label_5be465
    else if (edx_4 s>= 0 && eax_7 u>= 0)
        goto label_5be318
    
    return 0xffffffff
}
