// 函数名称: sub_48eac0
// 虚拟地址: 0x48eac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_48eac0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    edx:eax = sx.q(arg1)
    char* esi = arg2
    int32_t edi = 0x7f4a7c13
    int32_t var_2c = eax
    int32_t var_18 = 0x9e3779b9
    int32_t var_10 = 0x9e3779b9
    int32_t eax_1 = 0x7f4a7c13
    int32_t ecx = 0
    int32_t ebx = 0
    int32_t var_28 = edx
    int32_t var_14 = 0x7f4a7c13
    
    if (edx != 0 || var_2c u> 0x17)
        int32_t esi_18
        
        while (true)
            int32_t edi_1 = edi + *(esi + 8)
            int32_t var_18_1 = adc.d(var_18, *(esi + 0xc), edi + *(esi + 8) u< edi)
            int32_t ecx_1 = ecx + *(esi + 0x10)
            int32_t ebx_1 = adc.d(ebx, *(esi + 0x14), ecx + *(esi + 0x10) u< ecx)
            int32_t ecx_2 = *esi
            int32_t ecx_3 = ecx_2 - ecx_1
            int32_t ecx_4 = ecx_3 - edi_1
            int32_t ecx_6 = (ecx_4 + var_14) ^ ebx_1 u>> 0xb
            int32_t esi_5 = adc.d(
                sbb.d(sbb.d(*(esi + 4), ebx_1, ecx_2 u< ecx_1), var_18_1, ecx_3 u< edi_1), var_10, 
                ecx_4 + var_14 u< ecx_4)
            int32_t edi_2 = edi_1 - ecx_1
            int32_t edi_4 = (edi_2 - ecx_6) ^ ecx_6 << 9
            int32_t edx_7 = sbb.d(sbb.d(var_18_1, ebx_1, edi_1 u< ecx_1), esi_5, edi_2 u< ecx_6)
                ^ (esi_5 << 9 | ecx_6 u>> 0xffffffe9)
            int32_t eax_8 = ecx_1 - edi_4
            int32_t edx_10 =
                sbb.d(sbb.d(ebx_1, edx_7, ecx_1 u< edi_4), esi_5, eax_8 u< ecx_6) ^ edx_7 u>> 8
            int32_t eax_10 = (eax_8 - ecx_6) ^ (edi_4 u>> 8 | edx_7 << 0x18)
            int32_t ecx_7 = ecx_6 - eax_10
            int32_t ecx_9 = (ecx_7 - edi_4) ^ edx_10 u>> 6
            int32_t esi_8 = sbb.d(sbb.d(esi_5, edx_10, ecx_6 u< eax_10), edx_7, ecx_7 u< edi_4)
            int32_t edi_5 = edi_4 - eax_10
            int32_t edi_7 = (edi_5 - ecx_9) ^ ecx_9 << 0x17
            int32_t ebx_9 = sbb.d(sbb.d(edx_7, edx_10, edi_4 u< eax_10), esi_8, edi_5 u< ecx_9)
                ^ (esi_8 << 0x17 | ecx_9 u>> 0xfffffff7)
            int32_t eax_11 = eax_10 - edi_7
            int32_t eax_13 = (eax_11 - ecx_9) ^ (edi_7 u>> 5 | ebx_9 << 0x1b)
            int32_t edx_23 =
                sbb.d(sbb.d(edx_10, ebx_9, eax_10 u< edi_7), esi_8, eax_11 u< ecx_9) ^ ebx_9 u>> 5
            int32_t ecx_10 = ecx_9 - eax_13
            int32_t esi_11 = sbb.d(sbb.d(esi_8, edx_23, ecx_9 u< eax_13), ebx_9, ecx_10 u< edi_7)
            int32_t ecx_12 = (ecx_10 - edi_7) ^ edx_23 u>> 3
            int32_t edi_8 = edi_7 - eax_13
            int32_t eax_18 = sbb.d(sbb.d(ebx_9, edx_23, edi_7 u< eax_13), esi_11, edi_8 u< ecx_12)
            int32_t edi_10 = edi_8 - ecx_12
            int32_t var_58_1 = eax_18
            int32_t esi_13 = eax_18 ^ ecx_12 << 0x11
            int32_t ebx_12 = eax_13 - edi_10
            int32_t ebx_14 = (ebx_12 - ecx_12) ^ (edi_10 u>> 0xb | esi_13 << 0x15)
            int32_t edx_26 = sbb.d(sbb.d(edx_23, esi_13, eax_13 u< edi_10), esi_11, ebx_12 u< ecx_12)
                ^ esi_13 u>> 0xb
            int32_t ecx_13 = ecx_12 - ebx_14
            int32_t ecx_15 = (ecx_13 - edi_10) ^ (ebx_14 u>> 0xc | edx_26 << 0x14)
            int32_t edi_18 = sbb.d(sbb.d(esi_11, edx_26, ecx_12 u< ebx_14), esi_13, ecx_13 u< edi_10)
                ^ edx_26 u>> 0xc
            int32_t eax_22 = edi_10 - ebx_14
            var_14 = ecx_15
            var_10 = edi_18
            int32_t ebx_20 = sbb.d(sbb.d(esi_13, edx_26, edi_10 u< ebx_14), edi_18, eax_22 u< ecx_15)
                ^ (edi_18 << 0x12 | ecx_15 u>> 0xfffffff2)
            edi = (eax_22 - ecx_15) ^ ecx_15 << 0x12
            int32_t esi_16 = ebx_14 - edi
            var_18 = ebx_20
            esi_18 = (esi_16 - var_14) ^ (edi u>> 0x16 | ebx_20 << 0xa)
            esi = &arg2[0x18]
            ebx =
                ebx_20 u>> 0x16 ^ sbb.d(sbb.d(edx_26, ebx_20, ebx_14 u< edi), var_10, esi_16 u< var_14)
            int32_t temp33_1 = var_2c
            var_2c -= 0x18
            arg2 = esi
            int32_t eax_26 = adc.d(var_28, 0xffffffff, temp33_1 u>= 0x18)
            var_28 = eax_26
            
            if (eax_26 u<= 0)
                if (eax_26 u< 0)
                    break
                
                if (var_2c u<= 0x17)
                    break
            
            ecx = esi_18
        
        eax_1 = var_14
        ecx = esi_18
    
    int32_t ecx_19 = ecx + eax
    int32_t ebx_22 = adc.d(ebx, edx, ecx + eax u< ecx)
    int32_t var_24_4 = ecx_19
    
    if (var_28 u<= 0 && (var_28 u< 0 || var_2c u<= 0x17) && var_2c - 1 u<= 0x16)
        switch (var_2c)
            case 2
                goto label_48ee21
            case 3
                goto label_48ee0f
            case 4
                goto label_48edfd
            case 5
                goto label_48edf1
            case 6
                goto label_48ede2
            case 7
                goto label_48edd3
            case 8
                goto label_48edc4
            case 9
                goto label_48edba
            case 0xa
                goto label_48eda9
            case 0xb
                goto label_48ed98
            case 0xc
                goto label_48ed87
            case 0xd
                goto label_48ed7c
            case 0xe
                goto label_48ed6e
            case 0xf
                goto label_48ed60
            case 0x10
                goto label_48ed52
            case 0x11
                goto label_48ed3f
            case 0x12
                goto label_48ed2f
            case 0x13
                goto label_48ed1f
            case 0x14
                goto label_48ed15
            case 0x15
                goto label_48ed08
            case 0x16
                goto label_48ecfb
            case 0x17
                int32_t eax_28
                int32_t edx_31
                edx_31:eax_28 = sx.q(zx.d(esi[0x16]))
                ebx_22 = adc.d(ebx_22, eax_28 << 0x18, ecx_19 u>= 0)
            label_48ecfb:
                int32_t eax_31
                int32_t edx_32
                edx_32:eax_31 = sx.q(zx.d(esi[0x15]))
                ebx_22 = adc.d(ebx_22, eax_31 << 0x10, ecx_19 u>= 0)
            label_48ed08:
                int32_t eax_34
                int32_t edx_33
                edx_33:eax_34 = sx.q(zx.d(esi[0x14]))
                ebx_22 = adc.d(ebx_22, eax_34 << 8, ecx_19 u>= 0)
            label_48ed15:
                int32_t eax_37
                int32_t edx_34
                edx_34:eax_37 = sx.q(zx.d(esi[0x13]))
                ebx_22 = adc.d(ebx_22, eax_37, ecx_19 u>= 0)
            label_48ed1f:
                int32_t eax_39
                int32_t edx_35
                edx_35:eax_39 = sx.q(zx.d(esi[0x12]))
                int32_t eax_40 = eax_39 << 0x18
                int32_t temp69_1 = ecx_19
                ecx_19 += eax_40
                ebx_22 =
                    adc.d(ebx_22, edx_35 << 0x18 | eax_39 u>> 0xfffffff8, temp69_1 + eax_40 u< temp69_1)
            label_48ed2f:
                int32_t eax_42
                int32_t edx_37
                edx_37:eax_42 = sx.q(zx.d(esi[0x11]))
                int32_t eax_43 = eax_42 << 0x10
                int32_t temp70_1 = ecx_19
                ecx_19 += eax_43
                ebx_22 =
                    adc.d(ebx_22, edx_37 << 0x10 | eax_42 u>> 0xfffffff0, temp70_1 + eax_43 u< temp70_1)
            label_48ed3f:
                int32_t eax_45
                int32_t edx_39
                edx_39:eax_45 = sx.q(zx.d(esi[0x10]))
                int32_t eax_46 = eax_45 << 8
                var_24_4 = ecx_19 + eax_46
                ebx_22 = adc.d(ebx_22, edx_39 << 8 | eax_45 u>> 0xffffffe8, ecx_19 + eax_46 u< ecx_19)
            label_48ed52:
                int32_t eax_48
                int32_t edx_41
                edx_41:eax_48 = sx.q(zx.d(esi[0xf]))
                var_18 = adc.d(var_18, eax_48 << 0x18, edi u>= 0)
            label_48ed60:
                int32_t eax_51
                int32_t edx_42
                edx_42:eax_51 = sx.q(zx.d(esi[0xe]))
                var_18 = adc.d(var_18, eax_51 << 0x10, edi u>= 0)
            label_48ed6e:
                int32_t eax_54
                int32_t edx_43
                edx_43:eax_54 = sx.q(zx.d(esi[0xd]))
                var_18 = adc.d(var_18, eax_54 << 8, edi u>= 0)
            label_48ed7c:
                int32_t eax_57
                int32_t edx_44
                edx_44:eax_57 = sx.q(zx.d(esi[0xc]))
                var_18 = adc.d(var_18, eax_57, edi u>= 0)
            label_48ed87:
                int32_t eax_59
                int32_t edx_45
                edx_45:eax_59 = sx.q(zx.d(esi[0xb]))
                int32_t eax_60 = eax_59 << 0x18
                int32_t temp76_1 = edi
                edi += eax_60
                var_18 =
                    adc.d(var_18, edx_45 << 0x18 | eax_59 u>> 0xfffffff8, temp76_1 + eax_60 u< temp76_1)
            label_48ed98:
                int32_t eax_62
                int32_t edx_47
                edx_47:eax_62 = sx.q(zx.d(esi[0xa]))
                int32_t eax_63 = eax_62 << 0x10
                int32_t temp77_1 = edi
                edi += eax_63
                var_18 =
                    adc.d(var_18, edx_47 << 0x10 | eax_62 u>> 0xfffffff0, temp77_1 + eax_63 u< temp77_1)
            label_48eda9:
                int32_t eax_65
                int32_t edx_49
                edx_49:eax_65 = sx.q(zx.d(esi[9]))
                int32_t eax_66 = eax_65 << 8
                int32_t temp78_1 = edi
                edi += eax_66
                var_18 =
                    adc.d(var_18, edx_49 << 8 | eax_65 u>> 0xffffffe8, temp78_1 + eax_66 u< temp78_1)
            label_48edba:
                int32_t eax_68
                int32_t edx_51
                edx_51:eax_68 = sx.q(zx.d(esi[8]))
                int32_t temp79_1 = edi
                edi += eax_68
                var_18 = adc.d(var_18, edx_51, temp79_1 + eax_68 u< temp79_1)
            label_48edc4:
                int32_t eax_70
                int32_t edx_52
                edx_52:eax_70 = sx.q(zx.d(esi[7]))
                var_10 = adc.d(var_10, eax_70 << 0x18, var_14 u>= 0)
            label_48edd3:
                int32_t eax_73
                int32_t edx_53
                edx_53:eax_73 = sx.q(zx.d(esi[6]))
                var_10 = adc.d(var_10, eax_73 << 0x10, var_14 u>= 0)
            label_48ede2:
                int32_t eax_76
                int32_t edx_54
                edx_54:eax_76 = sx.q(zx.d(esi[5]))
                var_10 = adc.d(var_10, eax_76 << 8, var_14 u>= 0)
            label_48edf1:
                int32_t eax_79
                int32_t edx_55
                edx_55:eax_79 = sx.q(zx.d(esi[4]))
                var_10 = adc.d(var_10, eax_79, var_14 u>= 0)
            label_48edfd:
                int32_t eax_81
                int32_t edx_56
                edx_56:eax_81 = sx.q(zx.d(esi[3]))
                int32_t eax_82 = eax_81 << 0x18
                int32_t temp84_1 = var_14
                var_14 += eax_82
                var_10 =
                    adc.d(var_10, edx_56 << 0x18 | eax_81 u>> 0xfffffff8, temp84_1 + eax_82 u< temp84_1)
            label_48ee0f:
                int32_t eax_84
                int32_t edx_58
                edx_58:eax_84 = sx.q(zx.d(esi[2]))
                int32_t eax_85 = eax_84 << 0x10
                int32_t temp85_1 = var_14
                var_14 += eax_85
                var_10 =
                    adc.d(var_10, edx_58 << 0x10 | eax_84 u>> 0xfffffff0, temp85_1 + eax_85 u< temp85_1)
            label_48ee21:
                ecx_19 = var_24_4
                int32_t eax_87
                int32_t edx_60
                edx_60:eax_87 = sx.q(zx.d(esi[1]))
                int32_t eax_88 = eax_87 << 8
                int32_t temp86_1 = var_14
                var_14 += eax_88
                var_10 =
                    adc.d(var_10, edx_60 << 8 | eax_87 u>> 0xffffffe8, temp86_1 + eax_88 u< temp86_1)
        
        int32_t eax_90
        int32_t edx_62
        edx_62:eax_90 = sx.q(zx.d(*esi))
        eax_1 = var_14 + eax_90
        var_10 = adc.d(var_10, edx_62, var_14 + eax_90 u< var_14)
    
    int32_t eax_91 = eax_1 - ecx_19
    int32_t eax_93 = (eax_91 - edi) ^ ebx_22 u>> 0xb
    int32_t edx_69 = sbb.d(sbb.d(var_10, ebx_22, eax_1 u< ecx_19), var_18, eax_91 u< edi)
    int32_t edi_20 = edi - ecx_19
    int32_t edi_22 = (edi_20 - eax_93) ^ eax_93 << 9
    int32_t edx_72 = sbb.d(sbb.d(var_18, ebx_22, edi u< ecx_19), edx_69, edi_20 u< eax_93)
        ^ (edx_69 << 9 | eax_93 u>> 0xffffffe9)
    int32_t ecx_21 = ecx_19 - edi_22
    int32_t ecx_23 = (ecx_21 - eax_93) ^ (edi_22 u>> 8 | edx_72 << 0x18)
    int32_t ebx_25 =
        sbb.d(sbb.d(ebx_22, edx_72, ecx_19 u< edi_22), edx_69, ecx_21 u< eax_93) ^ edx_72 u>> 8
    int32_t eax_94 = eax_93 - ecx_23
    int32_t edx_77 = sbb.d(sbb.d(edx_69, ebx_25, eax_93 u< ecx_23), edx_72, eax_94 u< edi_22)
    int32_t eax_96 = (eax_94 - edi_22) ^ ebx_25 u>> 6
    int32_t edi_23 = edi_22 - ecx_23
    int32_t edi_25 = (edi_23 - eax_96) ^ eax_96 << 0x17
    int32_t ecx_32 = sbb.d(sbb.d(edx_72, ebx_25, edi_22 u< ecx_23), edx_77, edi_23 u< eax_96)
        ^ (edx_77 << 0x17 | eax_96 u>> 0xfffffff7)
    int32_t esi_30 = ecx_23 - edi_25
    int32_t ebx_28 =
        sbb.d(sbb.d(ebx_25, ecx_32, ecx_23 u< edi_25), edx_77, esi_30 u< eax_96) ^ ecx_32 u>> 5
    int32_t esi_32 = (esi_30 - eax_96) ^ (edi_25 u>> 5 | ecx_32 << 0x1b)
    int32_t eax_97 = eax_96 - esi_32
    int32_t eax_99 = (eax_97 - edi_25) ^ ebx_28 u>> 3
    int32_t edx_80 = sbb.d(sbb.d(edx_77, ebx_28, eax_96 u< esi_32), ecx_32, eax_97 u< edi_25)
    int32_t ecx_37 = edi_25 - esi_32
    int32_t edi_29 = sbb.d(sbb.d(ecx_32, ebx_28, edi_25 u< esi_32), edx_80, ecx_37 u< eax_99)
    int32_t ecx_39 = ecx_37 - eax_99
    int32_t var_60_5 = edi_29
    int32_t edx_82 = edi_29 ^ eax_99 << 0x11
    int32_t esi_33 = esi_32 - ecx_39
    int32_t esi_35 = (esi_33 - eax_99) ^ (ecx_39 u>> 0xb | edx_82 << 0x15)
    int32_t ebx_31 =
        sbb.d(sbb.d(ebx_28, edx_82, esi_32 u< ecx_39), edx_80, esi_33 u< eax_99) ^ edx_82 u>> 0xb
    int32_t eax_100 = eax_99 - esi_35
    int32_t eax_102 = (eax_100 - ecx_39) ^ (esi_35 u>> 0xc | ebx_31 << 0x14)
    int32_t edi_37 =
        sbb.d(sbb.d(edx_80, ebx_31, eax_99 u< esi_35), edx_82, eax_100 u< ecx_39) ^ ebx_31 u>> 0xc
    int32_t ecx_40 = ecx_39 - esi_35
    int32_t ecx_42 = (ecx_40 - eax_102) ^ eax_102 << 0x12
    return (esi_35 - ecx_42 - eax_102) ^ (ecx_42 u>> 0x16 | (
        sbb.d(sbb.d(edx_82, ebx_31, ecx_39 u< esi_35), edi_37, ecx_40 u< eax_102)
        ^ (edi_37 << 0x12 | eax_102 u>> 0xfffffff2)) << 0xa)
}
