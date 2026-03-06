// 函数名称: sub_608110
// 虚拟地址: 0x608110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_608110(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t ebx = sub_607d00(esi)
    
    if (ebx == 0)
        return 
    
    int32_t edi_1 = arg3
    __alloca_probe_16(edi_1 << 4)
    int32_t __saved_edi
    
    if (&__saved_edi == 0)
        sub_5cd050(&__saved_edi)
        return 
    
    int32_t eax_4 = *(esi + 0xd4)
    int32_t __saved_esi
    
    if (eax_4 != 0 || *(esi + 0xd8) != eax_4)
        if (edi_1 s> 0)
            void* ebx_2 = arg2 + 0xc
            void* esi_2 = &__saved_esi
            int32_t i_3 = arg3
            long double x87_r6_1 = fconvert.t(fconvert.s(float.t(*(esi + 0xd8))))
            int32_t i
            
            do
                *(esi_2 - 4) =
                    sub_685f40(fconvert.t(*(ebx_2 - 0xc)) + fconvert.t(fconvert.s(float.t(eax_4))))
                *esi_2 = sub_685f40(fconvert.t(*(esi_2 + arg2 - &__saved_edi)) + x87_r6_1)
                int32_t eax_17
                
                if (sub_685f40(fconvert.t(*(ebx_2 - 4))) s<= 1)
                    eax_17 = 1
                else
                    eax_17 = sub_685f40(fconvert.t(*(ebx_2 - 4)))
                
                *(esi_2 + 4) = eax_17
                int32_t eax_18 = sub_685f40(fconvert.t(*ebx_2))
                
                if (eax_18 s<= 1)
                    eax_18 = 1
                
                *(esi_2 + 8) = eax_18
                ebx_2 += 0x10
                esi_2 += 0x10
                i = i_3
                i_3 -= 1
            while (i != 1)
            edi_1 = arg3
            esi = arg1
    else if (edi_1 s> 0)
        void* ebx_1 = arg2 + 0xc
        int32_t* esi_1 = &__saved_esi
        int32_t i_2 = arg3
        int32_t i_1
        
        do
            esi_1[-1] = sub_685f40(fconvert.t(*(ebx_1 - 0xc)))
            *esi_1 = sub_685f40(fconvert.t(*(arg2 - &__saved_edi + esi_1)))
            int32_t eax_10
            
            if (sub_685f40(fconvert.t(*(ebx_1 - 4))) s<= 1)
                eax_10 = 1
            else
                eax_10 = sub_685f40(fconvert.t(*(ebx_1 - 4)))
            
            esi_1[1] = eax_10
            int32_t eax_11 = sub_685f40(fconvert.t(*ebx_1))
            
            if (eax_11 s<= 1)
                eax_11 = 1
            
            esi_1[2] = eax_11
            ebx_1 += 0x10
            esi_1 = &esi_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        edi_1 = arg3
        esi = arg1
    int32_t eax_19 = *(esi + 0x130)
    
    if (eax_19 != 0)
        sub_6440c0(ebx, &__saved_edi, edi_1, eax_19, *(esi + 0x12c), *(esi + 0x12d), *(esi + 0x12e), 
            *(esi + 0x12f))
        return 
    
    sub_6120c0(ebx, &__saved_edi, edi_1, 
        sub_5d7e30(*(ebx + 4), *(esi + 0x12c), *(esi + 0x12d), *(esi + 0x12e), *(esi + 0x12f)))
}
