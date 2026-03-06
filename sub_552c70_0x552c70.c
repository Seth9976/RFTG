// 函数名称: sub_552c70
// 虚拟地址: 0x552c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_552c70(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_7c
    int32_t var_7c
    int32_t eax_1 = __security_cookie ^ &var_7c
    int32_t* esi = arg4
    int32_t var_70 = arg5
    int32_t eax_3 = *(arg3 + 4)
    int32_t* var_58 = esi
    var_7c = eax_3
    
    if (eax_3 == 0)
        var_7c = esi[4]
    
    int32_t eax_5 = *(arg3 + 0x10) - 1
    int32_t eax_6 = neg.d(eax_5)
    *arg2 = esi[1]
    int32_t ecx_1 = esi[2]
    arg2[0xd] = (sbb.d(eax_6, eax_6, eax_5 != 0) & 0xfffffffb) + 6
    int32_t eax_12 = ((sbb.d(eax_6, eax_6, eax_5 != 0) & 0xfffffffb) + 6) * 8
    arg2[1] = ecx_1
    arg2[3] = 1
    int128_t* eax_13 = sub_4cce80(eax_12)
    sub_5abfc0(eax_13, 0, eax_12)
    int32_t ecx_2 = var_7c
    arg2[0xf] = eax_13
    arg2[4] = 6
    arg2[5] = ecx_2
    arg2[6] = *(arg3 + 0x10)
    int16_t x87control
    int80_t result = sub_550ba0(x87control, esi)
    
    if (*(arg3 + 0x10) != 1)
        int32_t* ebx_10 = arg2[0xf]
        *ebx_10 = 0
        sub_5945a0(esi, ebx_10)
    else
        int32_t edi_1 = *(arg3 + 0x14)
        int32_t ecx_3 = esi[1]
        int32_t edx_3 = esi[2]
        int32_t ebx_1 = esi[3]
        int32_t var_6c = *esi
        int32_t eax_17 = esi[4]
        int32_t var_68_1 = ecx_3
        int32_t var_64_1 = edx_3
        int32_t var_60_1 = ebx_1
        int32_t var_24
        __builtin_memset(&var_24, 0, 0x18)
        
        if (edi_1 == 0)
            int32_t eax_18 = esi[1]
            
            if (eax_18 * 2 == edx_3 * 3)
                goto label_552dcc
            
            int32_t ecx_6 = edx_3 * 4
            
            if (eax_18 * 3 == ecx_6)
                goto label_552e25
            
            if (eax_18 == ecx_6)
                goto label_552ead
            
            goto label_552da9
        
        int32_t var_68_2
        int32_t var_3c
        int32_t ecx_8
        int32_t edi_5
        
        if (edi_1 == 1)
        label_552dcc:
            int32_t eax_20
            int32_t edx_6
            edx_6:eax_20 = muls.dp.d(0x55555556, esi[1])
            edi_5 = (edx_6 u>> 0x1f) + edx_6
            int32_t eax_22
            int32_t edx_7
            edx_7:eax_22 = sx.q(esi[2])
            ecx_8 = (eax_22 - edx_7) s>> 1
            int32_t ebx_2 = ebx_1 * ecx_8
            int32_t eax_27 = ebx_1 s/ 3
            int32_t edx_9 = eax_27 * 2
            int32_t var_34_1 = eax_27
            int32_t var_38_1 = edx_9
            var_3c = 0
            int32_t var_28_1 = ebx_2
            int32_t var_2c_1 = eax_27 + ebx_2
            int32_t var_30_1 = edx_9 + ebx_2
        label_552f1f:
            var_68_2 = edi_5
            goto label_552f23
        
        if (edi_1 != 2)
            if (edi_1 != 3)
            label_552da9:
                sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x559, "sTextureImportToPng")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
        label_552ead:
            sub_552810(esi)
            int32_t ebx_4 = esi[3]
            int32_t eax_37
            int32_t edx_20
            edx_20:eax_37 = muls.dp.d(0x2aaaaaab, esi[2])
            edi_5 = esi[1]
            int32_t var_60_2 = ebx_4
            ecx_8 = (edx_20 u>> 0x1f) + edx_20
            int32_t ebx_5 = ebx_4 * ecx_8
            int32_t var_34_3 = ebx_5 * 2
            int32_t var_38_3 = ebx_5
            int32_t var_30_3 = ebx_5 * 3
            int32_t var_28_3 = ebx_5 * 5
            var_3c = 0
            int32_t var_2c_3 = ebx_5 << 2
            var_24 = 1
            int32_t var_20_2 = 3
            int32_t var_1c_2 = 2
            int32_t var_18_2 = 0
            int32_t var_14_2 = 2
            int32_t var_10_2 = 0
            goto label_552f1f
        
    label_552e25:
        int32_t eax_30
        int32_t edx_11
        edx_11:eax_30 = sx.q(esi[1])
        int32_t eax_31
        int32_t edx_13
        edx_13:eax_31 = muls.dp.d(0x55555556, esi[2])
        ecx_8 = (edx_13 u>> 0x1f) + edx_13
        int32_t ebx_3 = ebx_1 * ecx_8
        int32_t eax_33
        int32_t edx_14
        edx_14:eax_33 = sx.q(ebx_1)
        int32_t eax_35 = (eax_33 + (edx_14 & 3)) s>> 2
        int32_t var_38_2 = ebx_3 + (eax_35 << 1)
        int32_t var_34_2 = ebx_3 + eax_35
        int32_t var_2c_2 = eax_35
        edi_5 = ((edx_11 & 3) + eax_30) s>> 2
        int32_t var_30_2 = eax_35 * 3 + ebx_3
        int32_t var_28_2 = eax_35 + (ebx_3 << 1)
        var_68_2 = edi_5
        var_3c = ebx_3
        var_24 = 1
        int32_t var_20_1 = 3
        int32_t var_1c_1 = 2
        int32_t var_18_1 = 0
        int32_t var_14_1 = 2
        int32_t var_10_1 = 0
    label_552f23:
        int32_t* eax_40 = arg2
        int32_t edx_21 = 0
        eax_40[1] = ecx_8
        int32_t ecx_14 = 0
        *eax_40 = edi_5
        var_7c = 0
        int32_t var_78_1 = 0
        
        while (true)
            int32_t* eax_42 = eax_40[0xf] + edx_21
            int32_t edx_22 = *(&var_3c + ecx_14)
            int32_t ecx_15 = *(&var_24 + ecx_14)
            *eax_42 = 0
            int32_t edx_23 = edx_22 + *esi
            var_6c = edx_23
            
            if (ecx_15 == 0)
                sub_5945a0(&var_6c, eax_42)
            else
                int32_t var_48_1 = ecx_8
                int32_t var_44_1 = sub_5540b0(eax_17, var_68_2)
                int32_t var_50 = sub_4cce80(sub_554170(eax_17, edx_23, var_68_2))
                sub_552180(&var_6c, &var_50, ecx_15)
                sub_5945a0(&var_50, eax_42)
                int32_t eax_49 = var_50
                
                if (eax_49 != 0)
                    _aligned_free_base(eax_49)
                
                esi = var_58
            
            edx_21 = var_7c + 8
            ecx_14 = var_78_1 + 4
            var_7c = edx_21
            var_78_1 = ecx_14
            
            if (edx_21 s>= 0x30)
                break
            
            eax_40 = arg2
    
    int32_t eax_50 = *esi
    
    if (eax_50 != 0)
        _aligned_free_base(eax_50)
    
    *esi = 0
    eax_50.b = 1
    sub_5a6aba(eax_1 ^ &var_7c)
    return result
}
