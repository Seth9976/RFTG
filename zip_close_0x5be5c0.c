// 函数名称: zip_close
// 虚拟地址: 0x5be5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_close(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (edi == 0)
        return 0xffffffff
    
    int32_t var_28
    int32_t eax_1 = sub_5be120(edi, &var_28)
    int32_t edx = var_28
    int32_t var_24
    
    if ((edx | var_24) != 0)
        if (eax_1 != 0)
            int32_t esi_2 = edi[0xd]
            
            if (var_24 u>= esi_2 && (var_24 u> esi_2 || edx u> edi[0xc]))
                zip_error_set(&edi[2], 0x14, 0)
                return 0xffffffff
            
            int32_t* ebx = sub_5a881a(edx << 3)
            int32_t ecx_2 = 0
            arg1 = ebx
            
            if (ebx != 0)
                int32_t eax_9 = 0
                int32_t var_14_1 = 0
                int32_t var_1c_1 = 0
                
                if (esi_2 u>= 0 && (esi_2 u> 0 || edi[0xc] u> 0))
                    while (true)
                        if (*(edi[0x10] + ecx_2 * 0x10 + 0xc) == 0)
                            if (var_14_1 u> var_24)
                                goto label_5be6e8
                            
                            if (var_14_1 u>= var_24 && eax_9 u>= var_28)
                                goto label_5be6e8
                            
                            ebx[eax_9 * 2] = ecx_2
                            ebx[eax_9 * 2 + 1] = var_1c_1
                            int32_t temp4_1 = eax_9
                            eax_9 += 1
                            var_14_1 = adc.d(var_14_1, 0, temp4_1 u>= 0xffffffff)
                        
                        int32_t temp1_1 = ecx_2
                        ecx_2 += 1
                        int32_t edx_7 = adc.d(var_1c_1, 0, temp1_1 u>= 0xffffffff)
                        var_1c_1 = edx_7
                        int32_t temp2_1 = edi[0xd]
                        
                        if (edx_7 u>= temp2_1)
                            if (edx_7 u> temp2_1)
                                break
                            
                            if (ecx_2 u>= edi[0xc])
                                break
                
                if (var_14_1 u<= var_24 && (var_14_1 u< var_24 || eax_9 u< var_28))
                label_5be6e8:
                    __free_base(ebx)
                    zip_error_set(&edi[2], 0x14, 0)
                    return 0xffffffff
                
                if (zip_source_begin_write(*edi) s< 0)
                    sub_5bf050(&edi[2], *edi)
                    __free_base(ebx)
                    return 0xffffffff
                
                int32_t eax_14 = 0
                int32_t var_8_1 = 0
                int32_t var_18_1 = 0
                int32_t var_14_2 = 0
                
                if (var_24 u< 0 || (var_24 u<= 0 && var_28 u<= 0))
                label_5be756:
                    
                    if (sub_5be0c0(edi, ebx, var_28, var_24) s< 0)
                        var_8_1 = 1
                else
                    while (true)
                        int32_t esi_6 = ebx[eax_14 * 2]
                        int32_t* edx_8 = ebx[eax_14 * 2 + 1]
                        int32_t* esi_8 = (esi_6 << 4) + edi[0x10]
                        char* eax_17
                        
                        if (esi_8[2] == 0)
                            eax_17 = esi_8[1]
                        
                        int32_t var_c_1
                        
                        if (esi_8[2] == 0 && (eax_17 == 0 || (*eax_17 & 1) == 0))
                            var_c_1 = 0
                        else
                            var_c_1 = 1
                        
                        if (esi_8[1] == 0)
                            int32_t* eax_19 = sub_5bfce0(*esi_8)
                            esi_8[1] = eax_19
                            
                            if (eax_19 == 0)
                                zip_error_set(&edi[2], 0xe, 0)
                                var_8_1 = 1
                                break
                        
                        char* ebx_1 = esi_8[1]
                        
                        if (sub_5c1980(edi, esi_6, edx_8) s< 0)
                            goto label_5be980
                        
                        int32_t eax_22
                        int32_t edx_10
                        eax_22, edx_10 = zip_source_tell_write(*edi)
                        
                        if (edx_10 s< 0 || (edx_10 s<= 0 && eax_22 u< 0))
                            goto label_5be980
                        
                        *(ebx_1 + 0x48) = eax_22
                        *(ebx_1 + 0x4c) = edx_10
                        
                        if (var_c_1 == 0)
                            *(ebx_1 + 0xa) &= 0xfff7
                            
                            if (sub_5c0290(edi, ebx_1, 0x100) s< 0)
                                goto label_5be980
                            
                            void* var_38_13 = &edi[2]
                            int32_t eax_27
                            int32_t edx_13
                            eax_27, edx_13 = sub_5beed0(edi, esi_6, edx_8)
                            
                            if ((eax_27 | edx_13) == 0)
                                goto label_5be980
                            
                            if (zip_source_seek(*edi, eax_27, edx_13, 0) s< 0)
                                sub_5bf050(&edi[2], *edi)
                            label_5be980:
                                var_8_1 = 1
                                ebx = arg1
                                break
                                break
                            
                            if (sub_5bdec0(*(ebx_1 + 0x20), *(ebx_1 + 0x24)) s< 0)
                                goto label_5be980
                        else
                            int32_t* esi_9 = esi_8[2]
                            int32_t* ebx_2 = nullptr
                            
                            if (esi_9 == 0)
                                ebx_2 = sub_5c27b0(edi, edi, esi_6, edx_8, 8, esi_9, esi_9, esi_9, 
                                    esi_9, esi_9)
                                
                                if (ebx_2 == 0)
                                    goto label_5be980
                                
                                esi_9 = ebx_2
                            
                            if (sub_5be1d0(ebx_1, edi, esi_9) s< 0)
                                var_8_1 = 1
                                
                                if (ebx_2 != 0)
                                    zip_source_free(ebx_2)
                                
                                ebx = arg1
                                break
                                break
                            
                            if (ebx_2 != 0)
                                zip_source_free(ebx_2)
                        
                        int32_t temp6_1 = var_18_1
                        var_18_1 += 1
                        int32_t eax_32 = adc.d(var_14_2, 0, temp6_1 u>= 0xffffffff)
                        var_14_2 = eax_32
                        
                        if (eax_32 u>= var_24 && (eax_32 u> var_24 || var_18_1 u>= var_28))
                            ebx = arg1
                            goto label_5be756
                        
                        eax_14 = var_18_1
                        ebx = arg1
                
                __free_base(ebx)
                
                if (var_8_1 == 0)
                    if (zip_source_commit_write(*edi) == 0)
                        zip_discard(edi)
                        return 0
                    
                    sub_5bf050(&edi[2], *edi)
                
                zip_source_rollback_write(*edi)
            
            return 0xffffffff
    else if (((edi[1].b & 8) != 0 || eax_1 != 0) && sub_5c2c30(*edi) s< 0)
        sub_5bf050(&edi[2], *edi)
        return 0xffffffff
    
    zip_discard(edi)
    return 0
}
