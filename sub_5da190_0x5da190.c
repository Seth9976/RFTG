// 函数名称: sub_5da190
// 虚拟地址: 0x5da190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da190(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_2
    int32_t __saved_edi_1 = __saved_edi_2
    int32_t* edi = arg2
    int32_t eax = *edi
    
    if (eax == 0x200)
        void* eax_2 = sub_5c9730(edi[2])
        int32_t* esi = arg1
        
        if (eax_2 == esi[0x2f])
            int32_t eax_3 = esi[1]
            
            if (eax_3 != 0)
                eax_3(esi, edi)
            
            eax_3.b = edi[3].b
            
            if (eax_3.b == 6)
                if (esi[0x31] != 0)
                    sub_5da040(esi)
                    return 0
                
                int32_t eax_5 = esi[2]
                int32_t* esp_1
                int32_t* var_1c
                
                if (eax_5 == 0)
                    int32_t* var_14_4 = &arg2
                    int32_t* var_18_3 = &arg1
                    var_1c = esi[0x2f]
                    esp_1 = &var_1c
                    sub_5c9bb0(var_1c, var_18_3, var_14_4)
                else
                    int32_t* var_14_3 = &arg2
                    int32_t* var_18_2 = &arg1
                    var_1c = esi
                    eax_5(var_1c, var_18_2, var_14_3)
                    int32_t __saved_edi
                    esp_1 = &__saved_edi
                
                if (esi[0x4a] != 0)
                    int32_t* ecx_1 = arg2
                    esi[0x39] = 0
                    esi[0x3a] = 0
                    esp_1[3]
                    esi[0x3b] = arg1
                    esi[0x3c] = ecx_1
                    esp_1[4]
                    esp_1[5]
                    esp_1[6]
                    return 0
                
                int32_t* edx_2 = arg1
                int32_t ecx_2 = esi[0xc]
                esi[0x35] = 0
                esi[0x36] = 0
                int32_t* eax_8 = arg2
                esp_1[2] = esi
                esi[0x37] = edx_2
                esi[0x38] = eax_8
                ecx_2()
                esp_1[3]
                esp_1[4]
                esp_1[5]
                esp_1[6]
                return 0
            
            if (eax_3.b == 2)
                esi[0x30] = 1
                return 0
            
            bool cond:2_1
            
            if (eax_3.b != 1)
                if (eax_3.b == 7)
                    esi[0x30] = 1
                    return 0
                
                if (eax_3.b == 9)
                    cond:2_1 = (sub_5c9760(eax_2) & 8) != 0
                    goto label_5da2b6
            else
                cond:2_1 = (sub_5c9760(eax_2) & 0x40) != 0
            label_5da2b6:
                
                if (not(cond:2_1))
                    esi[0x30] = 0
    else if (eax == 0x400)
        int32_t* esi_3 = arg1
        
        if (esi_3[0x31] != 0)
            edi[5] -= esi_3[0x35]
            long double x87_r7_1 = float.t(edi[5])
            edi[6] -= esi_3[0x36]
            int32_t eax_15 = sub_685f40(x87_r7_1 / fconvert.t(esi_3[0x45]))
            long double x87_r7_3 = float.t(edi[6])
            edi[5] = eax_15
            edi[6] = sub_685f40(x87_r7_3 / fconvert.t(esi_3[0x46]))
            int32_t* eax_17 = edi[7]
            arg1 = eax_17
            int32_t eax_18
            
            if (eax_17 s> 0)
                eax_18 = sub_685f40(float.t(arg1) / fconvert.t(esi_3[0x45]))
                
                if (eax_18 s< 1)
                    eax_18 = 1
                
                edi[7] = eax_18
            else if (eax_17 s< 0)
                eax_18 = sub_685f40(float.t(arg1) / fconvert.t(esi_3[0x45]))
                
                if (eax_18 s> 0xffffffff)
                    eax_18 = 0xffffffff
                
                edi[7] = eax_18
            int32_t* eax_19 = edi[8]
            arg1 = eax_19
            
            if (eax_19 s> 0)
                int32_t eax_20 = sub_685f40(float.t(arg1) / fconvert.t(esi_3[0x46]))
                
                if (eax_20 s< 1)
                    eax_20 = 1
                
                edi[8] = eax_20
                return 0
            
            if (eax_19 s< 0)
                int32_t eax_22 = sub_685f40(float.t(arg1) / fconvert.t(esi_3[0x46]))
                
                if (eax_22 s> 0xffffffff)
                    eax_22 = 0xffffffff
                
                edi[8] = eax_22
    else if (eax == 0x401 || eax == 0x402)
        int32_t* ebx_3 = arg1
        
        if (ebx_3[0x31] != 0)
            edi[5] -= ebx_3[0x35]
            long double x87_r7_13 = float.t(edi[5])
            edi[6] -= ebx_3[0x36]
            int32_t eax_24 = sub_685f40(x87_r7_13 / fconvert.t(ebx_3[0x45]))
            long double x87_r7_15 = float.t(edi[6])
            edi[5] = eax_24
            edi[6] = sub_685f40(x87_r7_15 / fconvert.t(ebx_3[0x46]))
    
    return 0
}
