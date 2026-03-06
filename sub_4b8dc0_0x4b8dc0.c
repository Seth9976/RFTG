// 函数名称: sub_4b8dc0
// 虚拟地址: 0x4b8dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b8dc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    sub_4b7950()
    void* eax = sub_4d2b00(ebx[1])
    
    if (eax != 0)
        int32_t ecx_1 = data_be1a6c
        data_be1a6c = zx.d(*(eax + 0x20))
        *(eax + 0x20) = ecx_1
        data_be1a70 -= 1
    
    sub_4c5680("player disposed")
    void* edi = data_27e7a44
    int32_t* var_8 = nullptr
    
    while (true)
        int32_t* esi_2
        
        if (var_8 != 0)
            esi_2 = &var_8[0x80]
        else
            esi_2 = *(edi + 0x38)
        
        int32_t eax_3 = (*(edi + 0x3c) << 9) + *(edi + 0x38)
        
        if (esi_2 u>= eax_3)
            break
        
        while (true)
            if ((esi_2[0x7e] & 0xffff0000) != 0)
                int32_t edx_3 = esi_2[0x50]
                int32_t eax_5 = 0
                var_8 = esi_2
                
                if (edx_3 s<= 0)
                    break
                
                int32_t* ecx_2 = esi_2
                
                while (true)
                    if (*ecx_2 == ebx[1])
                        ebx = arg1
                        
                        if (sub_4b8d30(esi_2, ebx) != 0)
                            break
                        
                        int32_t eax_7 = *(edi + 0x44)
                        *(edi + 0x44) = zx.d(esi_2[0x7e].w)
                        esi_2[0x7e] = eax_7
                        *(edi + 0x48) -= 1
                        break
                    
                    eax_5 += 1
                    ecx_2 = &ecx_2[0x14]
                    
                    if (eax_5 s>= edx_3)
                        ebx = arg1
                        break
                
                break
            
            esi_2 = &esi_2[0x80]
            
            if (esi_2 u>= eax_3)
                goto label_4b8e46
    
    label_4b8e46:
    int32_t edx_2 = ebx[0x70]
    void* eax_4 = nullptr
    
    while (true)
        if (eax_4 != 0)
            eax_4 += 0xc
        else
            eax_4 = *(edi + 0x54)
        
        int32_t ecx_6 = *(edi + 0x54) + *(edi + 0x58) * 0xc
        
        if (eax_4 u>= ecx_6)
            break
        
        while (true)
            if ((*(eax_4 + 8) & 0xffff0000) != 0)
                if (*eax_4 != edx_2)
                    break
                
                int32_t ecx_8 = *(edi + 0x60)
                *(edi + 0x60) = zx.d(*(eax_4 + 8))
                *(eax_4 + 8) = ecx_8
                *(edi + 0x64) -= 1
                break
            
            eax_4 += 0xc
            
            if (eax_4 u>= ecx_6)
                goto label_4b8ed4
    
    label_4b8ed4:
    int32_t ecx_7 = *ebx
    
    if (ecx_7 != 0)
        void* edx_4 = data_27e7bb8
        uint32_t eax_8 = zx.d(ecx_7.w)
        
        if (eax_8 u< *(edx_4 + 4))
            int32_t* eax_10 = eax_8 * 0x4c + *edx_4
            
            if (eax_10[0x12] == ecx_7)
                sub_4c6a10(eax_10)
                edi = data_27e7a44
    
    int32_t result = *(edi + 0x28)
    *(edi + 0x28) = zx.d(ebx[0x70].w)
    ebx[0x70] = result
    *(edi + 0x2c) -= 1
    return result
}
