// 函数名称: zip_discard
// 虚拟地址: 0x5c1b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidzip_discard(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t* eax_1 = *arg1
    
    if (eax_1 != 0)
        zip_source_close(eax_1)
        zip_source_free(*arg1)
    
    __free_base(arg1[7])
    sub_5bf1f0(arg1[8])
    sub_5bf1f0(arg1[9])
    
    if (arg1[0x10] != 0)
        int32_t ebx_1 = 0
        int32_t edi_1 = 0
        int32_t temp0_1 = arg1[0xd]
        
        if (temp0_1 u>= 0 && (temp0_1 u> 0 || arg1[0xc] u> 0))
            while (true)
                sub_5c38a0((edi_1 << 4) + arg1[0x10])
                int32_t temp2_1 = edi_1
                edi_1 += 1
                ebx_1 = adc.d(ebx_1, 0, temp2_1 u>= 0xffffffff)
                int32_t temp3_1 = arg1[0xd]
                
                if (ebx_1 u>= temp3_1)
                    if (ebx_1 u> temp3_1)
                        break
                    
                    if (edi_1 u>= arg1[0xc])
                        break
        
        __free_base(arg1[0x10])
    
    int32_t ebx_2 = 0
    int32_t edi_2 = 0
    
    if (arg1[0x11] u> 0)
        while (true)
            sub_5c3060(*(arg1[0x13] + (edi_2 << 2)))
            int32_t temp1_1 = edi_2
            edi_2 += 1
            ebx_2 = adc.d(ebx_2, 0, temp1_1 u>= 0xffffffff)
            
            if (ebx_2 u>= 0)
                if (ebx_2 u> 0)
                    break
                
                if (edi_2 u>= arg1[0x11])
                    break
    
    __free_base(arg1[0x13])
    zip_error_fini(&arg1[2])
    __free_base(arg1)
}
