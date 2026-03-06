// 函数名称: sub_606f70
// 虚拟地址: 0x606f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_606f70(char* arg1)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    uint32_t ebx = zx.d(*(*(edi + 4) + 9))
    void* eax = nullptr
    
    if (ebx - 1 u<= 3)
        switch (ebx)
            case 1
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(*(edi + 8))
                eax = (((eax_2 - edx_1) s>> 1) + 1) * *(edi + 0xc) * 3 + 2
            case 2, 3
                int32_t ecx_2 = *(edi + 8)
                eax = (ecx_2 * ebx + ((ecx_2 s/ 0xff) << 1) + 2) * *(edi + 0xc) + 2
            case 4
                int32_t ecx_4 = *(edi + 8)
                eax = (((ecx_4 s/ 0xffff + ecx_4 + 1) * *(edi + 0xc)) << 2) + 4
    
    void* var_4c = eax
    int16_t* eax_19 = sub_5d0ac0()
    int16_t* esi = eax_19
    int16_t* var_3c = esi
    
    if (esi == 0)
        sub_5cd050(eax_19)
        return 0xffffffff
    
    int32_t var_18 = *(edi + 0x14)
    int32_t ecx_7 = not.d(*(*(edi + 4) + 0x18))
    int32_t eax_21 = neg.d(ebx - 4)
    int32_t edx_11 = *(*(edi + 0x34) + 0x48) & ecx_7
    int32_t ecx_9 = *((ebx << 2) + &data_6b9154[0x24])
    int32_t ecx_10 = *(edi + 8)
    int32_t ecx_11 = *(edi + 0xc)
    int32_t eax_24 = (sbb.d(eax_21, eax_21, ebx != 4) & 0xffff0100) + 0xffff
    int16_t* edx_12 = esi
    int32_t var_1c = eax_24
    int16_t* var_38 = edx_12
    
    if (ecx_11 s> 0)
        int32_t ebx_1 = 0
        int32_t var_34_1 = ecx_11
        int32_t var_14_1 = 0
        int32_t var_30_1 = 0
        
        while (true)
            int32_t var_20_1 = ebx_1
            
            if (ebx_1 s< ecx_10)
                int32_t edi_3 = ebx_1 * ebx + var_18
                
                do
                    if ((ecx_9(edi_3) & ecx_7) != edx_11)
                        break
                    
                    edi_3 += ebx
                    ebx_1 += 1
                while (ebx_1 s< ecx_10)
                
                eax_24 = var_1c
                var_14_1 = ebx_1
            
            int32_t edx_13 = ebx_1
            int32_t var_c_1 = edx_13
            
            if (ebx_1 s< ecx_10)
                int32_t edi_6 = ebx_1 * ebx + var_18
                
                do
                    if ((ecx_9(edi_6) & ecx_7) == edx_11)
                        break
                    
                    edi_6 += ebx
                    ebx_1 += 1
                while (ebx_1 s< ecx_10)
                
                edx_13 = var_c_1
                eax_24 = var_1c
                var_14_1 = ebx_1
            
            int32_t i = edx_13 - var_20_1
            
            if (i == ecx_10)
                var_30_1 = 1
            
            int32_t ebx_2 = ebx_1 - edx_13
            int32_t var_20_2 = ebx_2
            
            for (; i s> eax_24; i -= eax_24)
                if (ebx != 4)
                    *esi = eax_24.b
                    *(esi + 1) = 0
                    esi = &esi[1]
                else
                    *esi = eax_24.w
                    esi[1] = 0
                    esi = &esi[2]
            
            if (ebx_2 s>= eax_24)
                ebx_2 = eax_24
            
            void* esi_1
            
            if (ebx != 4)
                *esi = i.b
                *(esi + 1) = ebx_2.b
                esi_1 = &esi[1]
            else
                *esi = i.w
                esi[1] = ebx_2.w
                esi_1 = esi + ebx
            
            int32_t edi_8 = ebx_2 * ebx
            int32_t var_4c_4 = edi_8
            int32_t var_50_1 = var_c_1 * ebx + var_18
            void* var_54_1 = esi_1
            sub_5cd110()
            int32_t var_c_2 = var_c_1 + ebx_2
            int32_t eax_31 = var_20_2 - ebx_2
            esi = esi_1 + edi_8
            int32_t var_20_3 = eax_31
            
            if (eax_31 != 0)
                while (true)
                    int32_t ebx_3 = var_1c
                    
                    if (eax_31 s< ebx_3)
                        ebx_3 = eax_31
                    
                    void* esi_2
                    
                    if (ebx != 4)
                        *esi = 0
                        *(esi + 1) = ebx_3.b
                        esi_2 = &esi[1]
                    else
                        *esi = 0
                        esi[1] = ebx_3.w
                        esi_2 = &esi[2]
                    
                    int32_t edi_10 = ebx_3 * ebx
                    int32_t var_4c_5 = edi_10
                    int32_t var_50_2 = var_c_2 * ebx + var_18
                    void* var_54_2 = esi_2
                    sub_5cd110()
                    var_c_2 += ebx_3
                    esi = esi_2 + edi_10
                    int32_t temp2_1 = var_20_3
                    var_20_3 -= ebx_3
                    
                    if (temp2_1 == ebx_3)
                        break
                    
                    eax_31 = var_20_3
            
            if (var_30_1 == 0)
                var_38 = esi
            
            if (var_14_1 s< ecx_10)
                ebx_1 = var_14_1
                eax_24 = var_1c
            else
                var_18 += *(arg1 + 0x10)
                int32_t temp1_1 = var_34_1
                var_34_1 -= 1
                
                if (temp1_1 == 1)
                    break
                
                eax_24 = var_1c
                ebx_1 = 0
                var_14_1 = 0
                var_30_1 = 0
        
        edx_12 = var_38
        esi = var_3c
        edi = arg1
    
    void* ebx_4
    
    if (ebx != 4)
        *edx_12 = 0
        ebx_4 = &edx_12[1]
    else
        *edx_12 = 0
        ebx_4 = &edx_12[2]
    
    if ((*edi & 1) == 0)
        int32_t var_4c_6 = *(edi + 0x14)
        sub_5d0af0()
        *(edi + 0x14) = 0
    
    int32_t var_4c_7 = ebx_4 - esi
    int16_t* var_50_3 = esi
    int16_t* eax_34 = sub_5d0ae0()
    
    if (eax_34 == 0)
        eax_34 = esi
    
    *(*(edi + 0x34) + 0xc) = eax_34
    return 0
}
