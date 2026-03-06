// 函数名称: sub_66c420
// 虚拟地址: 0x66c420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66c420(void* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    char eax = esi[2].b
    int32_t result = 0
    
    if ((eax & 1) != 0 || (eax & 2) == 0)
        return 0
    
    void* edx = arg1
    uint32_t ecx = zx.d(*(edx + 0x254))
    uint32_t ebx = zx.d(*(edx + 0x256))
    uint32_t i_6 = *esi
    int32_t edi_1 = 0x8000 - ebx - ecx
    uint32_t var_1c = ecx
    int32_t var_14 = edi_1
    uint32_t i_7 = i_6
    void* var_20 = zx.d(eax) u>> 2 & 1
    void* eax_3
    
    if (*(esi + 9) != 8)
        if (*(edx + 0x194) == 0 || *(edx + 0x190) == 0)
            eax_3 = arg3
            void* ecx_14 = eax_3
            
            if (i_6 != 0)
                uint32_t i_8 = i_6
                
                while (true)
                    uint16_t esi_19 = zx.w(*(ecx_14 + 3)) | zx.w(*(ecx_14 + 2)) << 8
                    uint32_t edx_10 = zx.d(*(ecx_14 + 1)) | zx.d(zx.w(*ecx_14) << 8)
                    uint16_t esi_21 = zx.w(*(ecx_14 + 5)) | zx.w(*(ecx_14 + 4)) << 8
                    ecx_14 += 6
                    uint32_t esi_22 = zx.d(esi_21)
                    
                    if (edx_10.w != esi_19 || edx_10.w != esi_22.w)
                        result |= 1
                    
                    uint32_t edx_14 = zx.d(((esi_22 * edi_1 + zx.d(esi_19) * ebx + edx_10 * var_1c
                        + 0x4000) u>> 0xf).w)
                    *eax_3 = (edx_14 u>> 8).b
                    *(eax_3 + 1) = edx_14.b
                    eax_3 += 2
                    
                    if (var_20 != 0)
                        *eax_3 = *ecx_14
                        *(eax_3 + 1) = *(ecx_14 + 1)
                        eax_3 += 2
                        ecx_14 += 2
                    
                    uint32_t i_9 = i_8
                    i_8 -= 1
                    
                    if (i_9 == 1)
                        break
                    
                    edi_1 = var_14
                
                i_6 = i_7
                esi = arg2
        else
            eax_3 = arg3
            void* var_10_2 = eax_3
            
            if (i_6 != 0)
                uint32_t i_5 = i_6
                uint32_t i
                
                do
                    uint32_t edi_6 = zx.d(zx.w(*eax_3) << 8) | zx.d(*(eax_3 + 1))
                    uint32_t ebx_5 = zx.d(zx.w(*(eax_3 + 2)) << 8) | zx.d(*(eax_3 + 3))
                    uint16_t ecx_6 = zx.w(*(eax_3 + 4)) << 8 | zx.w(*(eax_3 + 5))
                    eax_3 += 6
                    uint32_t esi_10 = zx.d(ecx_6)
                    uint32_t ecx_8
                    
                    if (edi_6.w != ebx_5.w || edi_6.w != esi_10.w)
                        char ecx_9 = (*(edx + 0x174)).b
                        int32_t esi_12 = *(edx + 0x194)
                        int32_t edx_6 =
                            zx.d(*(*(esi_12 + (zx.d(ebx_5.b) u>> ecx_9 << 2)) + (ebx_5 u>> 8 << 1)))
                            * ebx +
                            zx.d(*(*(esi_12 + (zx.d(esi_10.b) u>> ecx_9 << 2)) + (esi_10 u>> 8 << 1)))
                            * var_14
                        uint32_t eax_16 = zx.d(((edx_6
                            + zx.d(*(*(esi_12 + (zx.d(edi_6.b) u>> ecx_9 << 2)) + (edi_6 u>> 8 << 1)))
                            * var_1c + 0x4000) u>> 0xf).w)
                        edx = arg1
                        result |= 1
                        ecx_8 = zx.d(*
                            (*(*(edx + 0x190) + (zx.d(eax_16.b) u>> ecx_9 << 2)) + (eax_16 u>> 8 << 1)))
                    else
                        int32_t esi_11 = *(edx + 0x184)
                        
                        if (esi_11 == 0)
                            ecx_8 = edi_6
                        else
                            ecx_6.b = *(edx + 0x174)
                            ecx_8 = zx.d(
                                *(*(esi_11 + (zx.d(edi_6.b) u>> ecx_6.b << 2)) + (edi_6 u>> 8 << 1)))
                    
                    *var_10_2 = (ecx_8 u>> 8).b
                    *(var_10_2 + 1) = ecx_8.b
                    void* esi_16 = var_10_2 + 2
                    var_10_2 = esi_16
                    
                    if (var_20 != 0)
                        *esi_16 = *eax_3
                        *(esi_16 + 1) = *(eax_3 + 1)
                        var_10_2 = esi_16 + 2
                        eax_3 += 2
                    
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                i_6 = i_7
                esi = arg2
    else if (*(edx + 0x188) == 0 || *(edx + 0x18c) == 0)
        eax_3 = arg3
        void* esi_6 = eax_3
        
        if (i_6 == 0)
            esi = arg2
        else
            uint32_t i_4 = i_6
            uint32_t i_1
            
            do
                ecx.b = *eax_3
                edx.b = *(eax_3 + 1)
                i_6.b = *(eax_3 + 2)
                eax_3 += 3
                
                if (ecx.b != edx.b || ecx.b != i_6.b)
                    result |= 1
                    void* ebx_2 = zx.d(i_6.b) * edi_1
                    edi_1 = var_14
                    *esi_6 = ((ebx_2 + zx.d(edx.b) * ebx + zx.d(ecx.b) * var_1c) u>> 0xf).b
                else
                    *esi_6 = ecx.b
                
                esi_6 += 1
                
                if (var_20 != 0)
                    edx.b = *eax_3
                    *esi_6 = edx.b
                    esi_6 += 1
                    eax_3 += 1
                
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            i_6 = i_7
            esi = arg2
    else
        void* esi_1 = arg3
        void* edi_2 = esi_1
        void* var_10_1 = edi_2
        
        if (i_6 == 0)
            esi = arg2
        else
            uint32_t i_3 = i_6
            uint32_t i_2
            
            do
                eax_3.b = *(esi_1 + 1)
                ecx.b = *esi_1
                i_6.b = *(esi_1 + 2)
                esi_1 += 3
                
                if (ecx.b != eax_3.b || ecx.b != i_6.b)
                    int32_t eax_4 = *(edx + 0x18c)
                    result |= 1
                    edi_2 = var_10_1
                    ecx.b = *(((zx.d(*(zx.d(i_6.b) + eax_4)) * var_14
                        + zx.d(*(zx.d(eax_3.b) + eax_4)) * ebx + zx.d(*(zx.d(ecx.b) + eax_4)) * var_1c
                        + 0x4000) u>> 0xf) + *(edx + 0x188))
                else
                    eax_3 = *(edx + 0x180)
                    
                    if (eax_3 != 0)
                        ecx.b = *(zx.d(ecx.b) + eax_3)
                
                *edi_2 = ecx.b
                edi_2 += 1
                var_10_1 = edi_2
                
                if (var_20 != 0)
                    eax_3.b = *esi_1
                    *edi_2 = eax_3.b
                    edi_2 += 1
                    var_10_1 = edi_2
                    esi_1 += 1
                
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            i_6 = i_7
            esi = arg2
    
    *(esi + 0xa) -= 2
    eax_3.b = *(esi + 0xa)
    eax_3.w = muls.dp.b(eax_3.b, *(esi + 9))
    esi[2].b &= 0xfd
    *(esi + 0xb) = eax_3.b
    uint32_t eax_18 = zx.d(eax_3.b)
    
    if (eax_3.b u< 8)
        esi[1] = (eax_18 * i_6 + 7) u>> 3
        return result
    
    esi[1] = (eax_18 u>> 3) * i_6
    return result
}
