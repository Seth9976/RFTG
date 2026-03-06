// 函数名称: sub_5c1980
// 虚拟地址: 0x5c1980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1980(int32_t* arg1, int32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t temp0 = arg1[0xd]
    int32_t temp0 = arg1[0xd]
    
    if (arg3 u>= temp0 && (arg3 u> temp0 || arg2 u>= arg1[0xc]))
        zip_error_set(&arg1[2], 0x12, 0)
        return 0xffffffff
    
    int32_t* eax_4 = (arg2 << 4) + arg1[0x10]
    void* eax_5 = *eax_4
    
    if (eax_5 == 0 || *(eax_5 + 4) != 0)
        return 0
    
    int32_t ecx = *(eax_5 + 0x48)
    int32_t eax_7 = adc.d(*(eax_5 + 0x4c), 0, ecx u>= 0xffffffe6)
    
    if (eax_7 u>= 0x7fffffff && (eax_7 u> 0x7fffffff || ecx + 0x1a u> 0xffffffff))
        zip_error_set(&arg1[2], 4, 0x1b)
        return 0xffffffff
    
    if (zip_source_seek(*arg1, ecx + 0x1a, eax_7, 0) s< 0)
        sub_5bf050(&arg1[2], *arg1)
        return 0xffffffff
    
    void var_c
    char* eax_11 = sub_5c0f50(*arg1, 4, 0, &var_c, &arg1[2])
    
    if (eax_11 != 0)
        int16_t eax_12 = sub_5c0cd0(eax_11)
        uint32_t eax_14 = zx.d(sub_5c0cd0(eax_11))
        
        if (sub_5c0c50(eax_11) != 0)
            sub_5c0c20(eax_11)
            int16_t edi_1 = eax_14.w
            int32_t* esi_5
            
            if (edi_1 == 0)
                esi_5 = eax_4
            label_5c1b3e:
                *(*esi_5 + 4) = 1
                void* eax_29 = esi_5[1]
                
                if (eax_29 != 0 && *(eax_29 + 4) == 0)
                    *(esi_5[1] + 0x34) = *(*esi_5 + 0x34)
                    *(esi_5[1] + 4) = 1
                
                return 0
            
            int32_t eax_18
            int32_t edx_3
            edx_3:eax_18 = sx.q(zx.d(eax_12))
            
            if (zip_source_seek(*arg1, eax_18, edx_3, 1) s< 0)
                zip_error_set(&arg1[2], 4, *__errno())
                return 0xffffffff
            
            char* eax_23 = sub_5c20b0(nullptr, *arg1, zx.d(edi_1), 0, &arg1[2])
            
            if (eax_23 != 0)
                void** eax_24 = sub_5c1630(eax_23, edi_1, 0x100, &arg1[2])
                __free_base(eax_23)
                
                if (eax_24 == 0)
                    return 0xffffffff
                
                void** eax_26 = sub_5c17b0(eax_24)
                esi_5 = eax_4
                *(*esi_5 + 0x34) = sub_5c14b0(*(*esi_5 + 0x34), eax_26)
                goto label_5c1b3e
        else
            sub_5c0c20(eax_11)
            zip_error_set(&arg1[2], 0x14, 0)
    
    return 0xffffffff
}
