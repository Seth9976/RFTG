// 函数名称: sub_604c40
// 虚拟地址: 0x604c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_604c40(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax = arg1[2]
    int32_t eax = arg1[2]
    
    if ((*arg3 & 2) != 0)
        sub_5d6350(arg3)
    
    void* eax_2 = arg1[1]
    uint32_t ecx = zx.d(*(eax_2 + 9))
    void* ebx_1 = arg1[0xd]
    int32_t edx_4 = arg2[1]
    uint32_t esi_3 = arg4[1] * arg3[4] + *arg4 * ecx + arg3[5]
    int32_t edx_5 = 0
    int16_t* ebx_2 = *(ebx_1 + 0xc)
    uint32_t var_c = esi_3
    
    if (edx_4 == 0 || ecx - 1 u> 3)
    label_604d79:
        uint32_t edi_6 = zx.d(*(ebx_1 + 0x4f))
        
        if (*arg2 != 0)
            sub_603ba0(arg3, eax, arg2, eax, ebx_2, arg3, esi_3, edi_6)
        else if (arg2[2] != arg1[2])
            sub_603ba0(arg3, eax, arg2, eax, ebx_2, arg3, esi_3, edi_6)
        else if (edi_6 != 0xff)
            uint32_t ecx_19 = zx.d(*(eax_2 + 9))
            
            if (ecx_19 == 2)
                int32_t edx_73 = *(eax_2 + 0x14)
                int32_t ecx_99 = *(eax_2 + 0xc) | *(eax_2 + 0x10) | edx_73
                
                if (ecx_99 != 0x7fff)
                    if (ecx_99 != 0xffff ||
                            (*(eax_2 + 0x10) != 0x7e0 && *(eax_2 + 0xc) != 0x7e0 && edx_73 != 0x7e0))
                        goto label_60571e
                    
                    if (edi_6 != 0x80)
                        int32_t var_2c_6 = arg2[3]
                        int32_t eax_47 = 0
                        
                        while (true)
                            eax_47 += zx.d(*ebx_2)
                            uint32_t ecx_117 = zx.d(*(ebx_2 + 1))
                            ebx_2 = &ebx_2[1]
                            
                            if (ecx_117 != 0)
                                int32_t edx_100 = esi_3 + (eax_47 << 1)
                                
                                if (ecx_117 s> 0)
                                    void* eax_51 = ebx_2 - edx_100
                                    void* var_3c_5 = eax_51
                                    arg1 = ecx_117
                                    
                                    while (true)
                                        uint32_t esi_42 = zx.d(*(eax_51 + edx_100))
                                        uint32_t eax_52 = zx.d(*edx_100)
                                        int32_t ecx_121 = (eax_52 << 0x10 | eax_52) & 0x7e0f81f
                                        int32_t eax_61 = ((((((esi_42 << 0x10 | esi_42) & 0x7e0f81f)
                                            - ecx_121) * (edi_6 u>> 3)) u>> 5) + ecx_121) & 0x7e0f81f
                                        *edx_100 = (eax_61 u>> 0x10).w | eax_61.w
                                        edx_100 += 2
                                        int32_t* temp26_1 = arg1
                                        arg1 -= 1
                                        
                                        if (temp26_1 == 1)
                                            break
                                        
                                        eax_51 = var_3c_5
                                    
                                    esi_3 = var_c
                                
                                ebx_2 = &ebx_2[ecx_117]
                                eax_47 += ecx_117
                            else if (eax_47 == 0)
                                break
                            
                            if (eax_47 == eax)
                                esi_3 += arg3[4]
                                eax_47 = 0
                                int32_t temp25_1 = var_2c_6
                                var_2c_6 -= 1
                                var_c = esi_3
                                
                                if (temp25_1 == 1)
                                    break
                    else
                        int32_t var_2c_5 = arg2[3]
                        int32_t edx_74 = 0
                        
                        while (true)
                            uint32_t ecx_101 = zx.d(*(ebx_2 + 1))
                            edx_74 += zx.d(*ebx_2)
                            ebx_2 = &ebx_2[1]
                            uint32_t var_14_7 = ecx_101
                            
                            if (ecx_101 != 0)
                                int32_t eax_45 = esi_3 + (edx_74 << 1)
                                uint32_t edi_17 = ecx_101
                                arg1 = ecx_101
                                int16_t* var_10_5 = ebx_2
                                
                                if (((eax_45.b ^ ebx_2.b) & 3) == 0)
                                    if ((ebx_2.b & 3) != 0)
                                        uint32_t ecx_107 = zx.d(*ebx_2)
                                        var_10_5 = &ebx_2[1]
                                        ecx_101 = var_14_7
                                        edi_17 = ecx_101 - 1
                                        *eax_45 =
                                            (((zx.d(*eax_45) & 0xf7de) + (ecx_107 & 0xf7de)) u>> 1).w
                                            + (ecx_107.w & *eax_45 & 0x821)
                                        eax_45 += 2
                                        arg1 = edi_17
                                    
                                    int32_t edx_92 = edx_74
                                    
                                    if (edi_17 u> 1)
                                        int32_t i_3 = ((edi_17 - 2) u>> 1) + 1
                                        int32_t i
                                        
                                        do
                                            int32_t edx_89 = *eax_45
                                            int32_t ecx_110 = *var_10_5
                                            var_10_5 = &var_10_5[2]
                                            *eax_45 = (edx_89 & ecx_110 & 0x8210821)
                                                + (edx_89 u>> 1 & 0x7bef7bef)
                                                + (ecx_110 u>> 1 & 0x7bef7bef)
                                            edi_17 = arg1 - 2
                                            eax_45 += 4
                                            i = i_3
                                            i_3 -= 1
                                            arg1 = edi_17
                                        while (i != 1)
                                        ecx_101 = var_14_7
                                        edx_92 = edx_74
                                    
                                    if (edi_17 != 0)
                                        uint32_t ecx_113 = zx.d(*var_10_5)
                                        ecx_101 = var_14_7
                                        *eax_45 =
                                            (((zx.d(*eax_45) & 0xf7de) + (ecx_113 & 0xf7de)) u>> 1).w
                                            + (ecx_113.w & *eax_45 & 0x821)
                                        edx_92 = edx_74
                                    
                                    ebx_2 = &ebx_2[ecx_101]
                                    edx_74 = edx_92 + ecx_101
                                else
                                    void* ecx_103 = ebx_2 - eax_45
                                    void* var_3c_4 = ecx_103
                                    
                                    while (true)
                                        uint32_t ecx_104 = zx.d(*(ecx_103 + eax_45))
                                        edi_17 -= 1
                                        *eax_45 =
                                            (((zx.d(*eax_45) & 0xf7de) + (ecx_104 & 0xf7de)) u>> 1).w
                                            + (ecx_104.w & *eax_45 & 0x821)
                                        eax_45 += 2
                                        
                                        if (edi_17 == 0)
                                            break
                                        
                                        ecx_103 = var_3c_4
                                    
                                    ebx_2 = &ebx_2[var_14_7]
                                    edx_74 += var_14_7
                            else if (edx_74 == 0)
                                break
                            
                            if (edx_74 == eax)
                                esi_3 += arg3[4]
                                edx_74 = 0
                                int32_t temp27_1 = var_2c_5
                                var_2c_5 -= 1
                                
                                if (temp27_1 == 1)
                                    break
                else if (*(eax_2 + 0x10) != 0x3e0 && *(eax_2 + 0xc) != 0x3e0 && edx_73 != 0x3e0)
                label_60571e:
                    int32_t var_1c_3 = arg2[3]
                    int32_t ecx_126 = 0
                    
                    while (true)
                        ecx_126 += zx.d(*ebx_2)
                        uint32_t edx_104 = zx.d(*(ebx_2 + 1))
                        ebx_2 = &ebx_2[1]
                        
                        if (edx_104 != 0)
                            int32_t ecx_127 = esi_3 + (ecx_126 << 1)
                            int32_t var_28_4 = ecx_127
                            
                            if (edx_104 s> 0)
                                void* ebx_55 = ebx_2 - ecx_127
                                void* var_3c_6 = ebx_55
                                uint32_t var_24_3 = edx_104
                                
                                while (true)
                                    uint32_t edx_105 = zx.d(*(ebx_55 + ecx_127))
                                    int32_t ebx_57 = (&data_8bac68)[zx.d(*(eax_2 + 0x1c))]
                                    int32_t esi_43 = *(eax_2 + 0xc)
                                    uint32_t edx_106 = zx.d(*ecx_127)
                                    uint32_t ecx_130 =
                                        zx.d(*(((esi_43 & edx_106) u>> *(eax_2 + 0x20)) + ebx_57))
                                    int32_t ebx_61 = *(eax_2 + 0x10)
                                    int32_t ecx_132 = (&data_8bac68)[zx.d(*(eax_2 + 0x1d))]
                                    uint32_t edx_109 =
                                        zx.d(*(((ebx_61 & edx_106) u>> *(eax_2 + 0x21)) + ecx_132))
                                    uint32_t ecx_140 = zx.d(*(((*(eax_2 + 0x14) & edx_106)
                                        u>> *(eax_2 + 0x22)) + (&data_8bac68)[zx.d(*(eax_2 + 0x1e))]))
                                    uint32_t edx_121 = ((((zx.d(*(((*(eax_2 + 0x14) & edx_105)
                                        u>> *(eax_2 + 0x22)) + (&data_8bac68)[zx.d(*(eax_2 + 0x1e))]))
                                        - ecx_140) * edi_6) u>> 8) + ecx_140) u>> *(eax_2 + 0x1e)
                                    uint16_t edx_123 = (edx_121 << *(eax_2 + 0x22)).w | (((((
                                        zx.d(*(((ebx_61 & edx_105) u>> *(eax_2 + 0x21)) + ecx_132))
                                        - edx_109) * edi_6) u>> 8) + edx_109) u>> *(eax_2 + 0x1d)
                                        << *(eax_2 + 0x21)).w
                                    char ebx_71 = *(eax_2 + 0x20)
                                    ecx_127 = var_28_4 + 2
                                    var_28_4 = ecx_127
                                    int16_t edx_125 = edx_123 | (((((
                                        zx.d(*(((esi_43 & edx_105) u>> ebx_71) + ebx_57)) - ecx_130)
                                        * edi_6) u>> 8) + ecx_130) u>> *(eax_2 + 0x1c) << ebx_71).w
                                        | (*(eax_2 + 0x18)).w
                                    uint32_t temp16_1 = var_24_3
                                    var_24_3 -= 1
                                    *(ecx_127 - 2) = edx_125
                                    
                                    if (temp16_1 == 1)
                                        break
                                    
                                    ebx_55 = var_3c_6
                                
                                esi_3 = var_c
                            
                            ebx_2 = &ebx_2[edx_104]
                            ecx_126 += edx_104
                        else if (ecx_126 == 0)
                            break
                        
                        if (ecx_126 == eax)
                            esi_3 += arg3[4]
                            ecx_126 = 0
                            int32_t temp15_1 = var_1c_3
                            var_1c_3 -= 1
                            var_c = esi_3
                            
                            if (temp15_1 == 1)
                                break
                else if (edi_6 != 0x80)
                    int32_t var_2c_9 = arg2[3]
                    int32_t eax_67 = 0
                    
                    while (true)
                        eax_67 += zx.d(*ebx_2)
                        uint32_t ecx_179 = zx.d(*(ebx_2 + 1))
                        ebx_2 = &ebx_2[1]
                        
                        if (ecx_179 != 0)
                            int32_t edx_153 = esi_3 + (eax_67 << 1)
                            
                            if (ecx_179 s> 0)
                                void* eax_71 = ebx_2 - edx_153
                                void* var_40_2 = eax_71
                                arg1 = ecx_179
                                
                                while (true)
                                    uint32_t esi_63 = zx.d(*(eax_71 + edx_153))
                                    uint32_t eax_72 = zx.d(*edx_153)
                                    int32_t ecx_183 = (eax_72 << 0x10 | eax_72) & 0x3e07c1f
                                    int32_t eax_81 = ((((((esi_63 << 0x10 | esi_63) & 0x3e07c1f)
                                        - ecx_183) * (edi_6 u>> 3)) u>> 5) + ecx_183) & 0x3e07c1f
                                    *edx_153 = (eax_81 u>> 0x10).w | eax_81.w
                                    edx_153 += 2
                                    int32_t* temp20_1 = arg1
                                    arg1 -= 1
                                    
                                    if (temp20_1 == 1)
                                        break
                                    
                                    eax_71 = var_40_2
                                
                                esi_3 = var_c
                            
                            ebx_2 = &ebx_2[ecx_179]
                            eax_67 += ecx_179
                        else if (eax_67 == 0)
                            break
                        
                        if (eax_67 == eax)
                            esi_3 += arg3[4]
                            eax_67 = 0
                            int32_t temp19_1 = var_2c_9
                            var_2c_9 -= 1
                            var_c = esi_3
                            
                            if (temp19_1 == 1)
                                break
                else
                    int32_t var_2c_8 = arg2[3]
                    int32_t edx_127 = 0
                    
                    while (true)
                        uint32_t ecx_160 = zx.d(*(ebx_2 + 1))
                        edx_127 += zx.d(*ebx_2)
                        ebx_2 = &ebx_2[1]
                        uint32_t var_14_9 = ecx_160
                        
                        if (ecx_160 != 0)
                            int32_t eax_65 = esi_3 + (edx_127 << 1)
                            uint32_t edi_44 = ecx_160
                            arg1 = ebx_2
                            
                            if (((eax_65.b ^ ebx_2.b) & 3) == 0)
                                if ((ebx_2.b & 3) != 0)
                                    uint32_t ecx_166 = zx.d(*ebx_2)
                                    arg1 = &ebx_2[1]
                                    ecx_160 = var_14_9
                                    *eax_65 = (((zx.d(*eax_65) & 0xfbde) + (ecx_166 & 0xfbde)) u>> 1).w
                                        + (ecx_166.w & *eax_65 & 0x421)
                                    eax_65 += 2
                                    edi_44 = ecx_160 - 1
                                
                                int32_t edx_145 = edx_127
                                
                                if (edi_44 u> 1)
                                    int32_t i_4 = ((edi_44 - 2) u>> 1) + 1
                                    int32_t i_1
                                    
                                    do
                                        int32_t edx_142 = *eax_65
                                        int32_t ecx_172 = *arg1
                                        arg1 = &arg1[1]
                                        *eax_65 = (edx_142 & ecx_172 & 0x4210421)
                                            + (edx_142 u>> 1 & 0x7def7def)
                                            + (ecx_172 u>> 1 & 0x7def7def)
                                        eax_65 += 4
                                        edi_44 -= 2
                                        i_1 = i_4
                                        i_4 -= 1
                                    while (i_1 != 1)
                                    esi_3 = var_c
                                    ecx_160 = var_14_9
                                    edx_145 = edx_127
                                
                                if (edi_44 != 0)
                                    uint32_t ecx_175 = zx.d(*arg1)
                                    ecx_160 = var_14_9
                                    *eax_65 = (((zx.d(*eax_65) & 0xfbde) + (ecx_175 & 0xfbde)) u>> 1).w
                                        + (ecx_175.w & *eax_65 & 0x421)
                                    edx_145 = edx_127
                                
                                ebx_2 = &ebx_2[ecx_160]
                                edx_127 = edx_145 + ecx_160
                            else
                                int32_t* ecx_162 = ebx_2 - eax_65
                                arg1 = ecx_162
                                
                                while (true)
                                    uint32_t ecx_163 = zx.d(*(ecx_162 + eax_65))
                                    *eax_65 = (((zx.d(*eax_65) & 0xfbde) + (ecx_163 & 0xfbde)) u>> 1).w
                                        + (ecx_163.w & *eax_65 & 0x421)
                                    eax_65 += 2
                                    uint32_t temp22_1 = edi_44
                                    edi_44 -= 1
                                    
                                    if (temp22_1 == 1)
                                        break
                                    
                                    ecx_162 = arg1
                                
                                esi_3 = var_c
                                ebx_2 = &ebx_2[var_14_9]
                                edx_127 += var_14_9
                        else if (edx_127 == 0)
                            break
                        
                        if (edx_127 == eax)
                            esi_3 += arg3[4]
                            edx_127 = 0
                            int32_t temp21_1 = var_2c_8
                            var_2c_8 -= 1
                            var_c = esi_3
                            
                            if (temp21_1 == 1)
                                break
            else if (ecx_19 == 3)
                int32_t var_30_6 = arg2[3]
                int32_t ecx_68 = 0
                
                while (true)
                    ecx_68 += zx.d(*ebx_2)
                    uint32_t i_6 = zx.d(*(ebx_2 + 1))
                    ebx_2 = &ebx_2[1]
                    
                    if (i_6 != 0)
                        int32_t ecx_69 = ecx_68 * 3
                        char* ecx_70 = ecx_69 + esi_3
                        char* var_1c_2 = ecx_70
                        
                        if (i_6 s> 0)
                            uint32_t i_5 = i_6
                            void* edx_47 = ecx_70 - ecx_69 - var_c + ebx_2 + 1
                            void* var_18_2 = edx_47
                            uint32_t i_2
                            
                            do
                                uint32_t esi_32 = (zx.d(*(edx_47 + 1)) << 8 | zx.d(*edx_47)) << 8
                                    | zx.d(*(edx_47 - 1))
                                int32_t ebx_29 = (&data_8bac68)[zx.d(*(eax_2 + 0x1c))]
                                uint32_t edx_53 =
                                    (zx.d(ecx_70[2]) << 8 | zx.d(ecx_70[1])) << 8 | zx.d(*ecx_70)
                                uint32_t ecx_74 =
                                    zx.d(*(((edx_53 & *(eax_2 + 0xc)) u>> *(eax_2 + 0x20)) + ebx_29))
                                int32_t ebx_34 = (&data_8bac68)[zx.d(*(eax_2 + 0x1d))]
                                uint32_t ecx_77 =
                                    zx.d(*(((edx_53 & *(eax_2 + 0x10)) u>> *(eax_2 + 0x21)) + ebx_34))
                                int32_t ebx_39 = (&data_8bac68)[zx.d(*(eax_2 + 0x1e))]
                                char ebx_40 = *(eax_2 + 0x20)
                                uint32_t edx_56 =
                                    zx.d(*(((edx_53 & *(eax_2 + 0x14)) u>> *(eax_2 + 0x22)) + ebx_39))
                                uint32_t ebx_50 = ((((
                                    zx.d(*(((esi_32 & *(eax_2 + 0x14)) u>> *(eax_2 + 0x22)) + ebx_39))
                                    - edx_56) * edi_6) u>> 8) + edx_56) u>> *(eax_2 + 0x1e)
                                    << *(eax_2 + 0x22)
                                char ebx_51 = *(eax_2 + 0x21)
                                ecx_70 = &var_1c_2[3]
                                var_1c_2 = ecx_70
                                uint32_t edx_68 = ((((
                                    zx.d(*(((esi_32 & *(eax_2 + 0xc)) u>> ebx_40) + ebx_29)) - ecx_74)
                                    * edi_6) u>> 8) + ecx_74) u>> *(eax_2 + 0x1c) << ebx_40 | ebx_50 | ((((
                                    zx.d(*(((esi_32 & *(eax_2 + 0x10)) u>> ebx_51) + ebx_34)) - ecx_77)
                                    * edi_6) u>> 8) + ecx_77) u>> *(eax_2 + 0x1d) << ebx_51
                                int32_t edx_69 = edx_68 | *(eax_2 + 0x18)
                                ecx_70[0xfffffffd] = edx_69.b
                                ecx_70[0xffffffff] = (edx_69 u>> 0x10).b
                                ecx_70[0xfffffffe] = (edx_69 u>> 8).b
                                edx_47 = var_18_2 + 3
                                i_2 = i_5
                                i_5 -= 1
                                var_18_2 = edx_47
                            while (i_2 != 1)
                            esi_3 = var_c
                        
                        ebx_2 += i_6 * 3
                        ecx_68 += i_6
                    else if (ecx_68 == 0)
                        break
                    
                    if (ecx_68 == eax)
                        esi_3 += arg3[4]
                        ecx_68 = 0
                        int32_t temp9_1 = var_30_6
                        var_30_6 -= 1
                        var_c = esi_3
                        
                        if (temp9_1 == 1)
                            break
            else if (ecx_19 == 4)
                int32_t ecx_23 = *(eax_2 + 0x14)
                
                if ((*(eax_2 + 0xc) | *(eax_2 + 0x10) | ecx_23) != 0xffffff
                        || (*(eax_2 + 0x10) != 0xff00 && *(eax_2 + 0xc) != 0xff00 && ecx_23 != 0xff00))
                    int32_t var_28_2 = arg2[3]
                    int32_t ecx_33 = 0
                    
                    while (true)
                        ecx_33 += zx.d(*ebx_2)
                        uint32_t edx_29 = zx.d(ebx_2[1])
                        ebx_2 = &ebx_2[2]
                        
                        if (edx_29 != 0)
                            int32_t ecx_34 = esi_3 + (ecx_33 << 2)
                            int32_t var_1c_1 = ecx_34
                            
                            if (edx_29 s> 0)
                                void* ebx_4 = ebx_2 - ecx_34
                                void* var_30_5 = ebx_4
                                uint32_t var_20_1 = edx_29
                                
                                while (true)
                                    int32_t edx_30 = *(ecx_34 + ebx_4)
                                    int32_t esi_12 = *ecx_34
                                    int32_t ebx_6 = (&data_8bac68)[zx.d(*(eax_2 + 0x1c))]
                                    uint32_t ecx_37 =
                                        zx.d(*(((esi_12 & *(eax_2 + 0xc)) u>> *(eax_2 + 0x20)) + ebx_6))
                                    int32_t ebx_11 = (&data_8bac68)[zx.d(*(eax_2 + 0x1d))]
                                    uint32_t ecx_40 = zx.d(
                                        *(((esi_12 & *(eax_2 + 0x10)) u>> *(eax_2 + 0x21)) + ebx_11))
                                    char ebx_15 = *(eax_2 + 0x22)
                                    int32_t ecx_42 = (&data_8bac68)[zx.d(*(eax_2 + 0x1e))]
                                    uint32_t ecx_45 =
                                        zx.d(*(((esi_12 & *(eax_2 + 0x14)) u>> ebx_15) + ecx_42))
                                    uint32_t ebx_25 = ((((zx.d(
                                        *(((edx_30 & *(eax_2 + 0x10)) u>> *(eax_2 + 0x21)) + ebx_11))
                                        - ecx_40) * edi_6) u>> 8) + ecx_40) u>> *(eax_2 + 0x1d)
                                        << *(eax_2 + 0x21)
                                    char esi_26 = *(eax_2 + 0x20)
                                    uint32_t ecx_63 = ((((
                                        zx.d(*(((edx_30 & *(eax_2 + 0x14)) u>> ebx_15) + ecx_42))
                                        - ecx_45) * edi_6) u>> 8) + ecx_45) u>> *(eax_2 + 0x1e) << ebx_15
                                        | ebx_25 | ((((
                                        zx.d(*(((edx_30 & *(eax_2 + 0xc)) u>> esi_26) + ebx_6))
                                        - ecx_37) * edi_6) u>> 8) + ecx_37) u>> *(eax_2 + 0x1c)
                                        << esi_26
                                    *var_1c_1 = ecx_63 | *(eax_2 + 0x18)
                                    ecx_34 = var_1c_1 + 4
                                    uint32_t temp24_1 = var_20_1
                                    var_20_1 -= 1
                                    var_1c_1 = ecx_34
                                    
                                    if (temp24_1 == 1)
                                        break
                                    
                                    ebx_4 = var_30_5
                                
                                esi_3 = var_c
                            
                            ebx_2 = &ebx_2[edx_29 * 2]
                            ecx_33 += edx_29
                        else if (ecx_33 == 0)
                            break
                        
                        if (ecx_33 == eax)
                            esi_3 += arg3[4]
                            ecx_33 = 0
                            int32_t temp23_1 = var_28_2
                            var_28_2 -= 1
                            var_c = esi_3
                            
                            if (temp23_1 == 1)
                                break
                else if (edi_6 != 0x80)
                    int32_t var_10_2 = arg2[3]
                    int32_t eax_33 = 0
                    
                    while (true)
                        uint32_t edx_23 = zx.d(ebx_2[1])
                        eax_33 += zx.d(*ebx_2)
                        ebx_2 = &ebx_2[2]
                        
                        if (edx_23 != 0)
                            int32_t* ecx_28 = esi_3 + (eax_33 << 2)
                            arg1 = ecx_28
                            
                            if (edx_23 s> 0)
                                void* eax_35 = ebx_2 - ecx_28
                                void* var_30_4 = eax_35
                                uint32_t var_14_5 = edx_23
                                
                                while (true)
                                    int32_t eax_36 = *(ecx_28 + eax_35)
                                    int32_t ecx_29 = *ecx_28
                                    int32_t ecx_30 = ecx_29 & 0xff00
                                    int32_t edx_25 = ecx_29 & 0xff00ff
                                    *arg1 = ((((((eax_36 & 0xff00ff) - edx_25) * edi_6) u>> 8) + edx_25)
                                        & 0xff00ff) | ((((((eax_36 & 0xff00) - ecx_30) * edi_6) u>> 8)
                                        + ecx_30) & 0xff00)
                                    ecx_28 = &arg1[1]
                                    uint32_t temp30_1 = var_14_5
                                    var_14_5 -= 1
                                    arg1 = ecx_28
                                    
                                    if (temp30_1 == 1)
                                        break
                                    
                                    eax_35 = var_30_4
                                
                                esi_3 = var_c
                            
                            ebx_2 = &ebx_2[edx_23 * 2]
                            eax_33 += edx_23
                        else if (eax_33 == 0)
                            break
                        
                        if (eax_33 == eax)
                            esi_3 += arg3[4]
                            eax_33 = 0
                            int32_t temp29_1 = var_10_2
                            var_10_2 -= 1
                            var_c = esi_3
                            
                            if (temp29_1 == 1)
                                break
                else
                    int32_t eax_26 = 0
                    int32_t var_10_1 = arg2[3]
                    
                    while (true)
                        eax_26 += zx.d(*ebx_2)
                        uint32_t edx_18 = zx.d(ebx_2[1])
                        ebx_2 = &ebx_2[2]
                        
                        if (edx_18 != 0)
                            int32_t* ecx_25 = esi_3 + (eax_26 << 2)
                            
                            if (edx_18 s> 0)
                                int32_t* eax_28 = ebx_2 - ecx_25
                                arg1 = eax_28
                                uint32_t var_14_4 = edx_18
                                
                                while (true)
                                    int32_t eax_29 = *ecx_25
                                    *ecx_25 = (((eax_29 & 0xfefefe) + (*(ecx_25 + eax_28) & 0xfefefe))
                                        u>> 1) + (eax_29 & *(ecx_25 + arg1) & 0x10101)
                                    ecx_25 = &ecx_25[1]
                                    uint32_t temp32_1 = var_14_4
                                    var_14_4 -= 1
                                    
                                    if (temp32_1 == 1)
                                        break
                                    
                                    eax_28 = arg1
                            
                            ebx_2 = &ebx_2[edx_18 * 2]
                            eax_26 += edx_18
                        else if (eax_26 == 0)
                            break
                        
                        if (eax_26 == eax)
                            esi_3 += arg3[4]
                            eax_26 = 0
                            int32_t temp31_1 = var_10_1
                            var_10_1 -= 1
                            
                            if (temp31_1 == 1)
                                break
        else
            switch (zx.d(*(eax_2 + 9)) - 1)
                case 0
                    arg1 = arg2[3]
                    int32_t edi_7 = 0
                    
                    while (true)
                        uint32_t eax_6 = zx.d(*(ebx_2 + 1))
                        edi_7 += zx.d(*ebx_2)
                        ebx_2 = &ebx_2[1]
                        
                        if (eax_6 != 0)
                            uint32_t var_50_1 = eax_6
                            int16_t* var_54_1 = ebx_2
                            int32_t var_58_1 = edi_7 + esi_3
                            sub_5cd110()
                            ebx_2 += eax_6
                            edi_7 += eax_6
                        else if (edi_7 == 0)
                            break
                        
                        if (edi_7 == eax)
                            esi_3 += arg3[4]
                            edi_7 = 0
                            int32_t* temp11_1 = arg1
                            arg1 -= 1
                            
                            if (temp11_1 == 1)
                                break
                case 1
                    int32_t var_14_1 = arg2[3]
                    void* edi_8 = nullptr
                    
                    while (true)
                        uint32_t eax_10 = zx.d(*(ebx_2 + 1))
                        edi_8 += zx.d(*ebx_2)
                        ebx_2 = &ebx_2[1]
                        arg1 = eax_10
                        
                        if (eax_10 != 0)
                            uint32_t var_50_2 = eax_10 * 2
                            int16_t* var_54_2 = ebx_2
                            int32_t var_58_2 = esi_3 + (edi_8 << 1)
                            sub_5cd110()
                            ebx_2 = &ebx_2[arg1]
                            edi_8 += arg1
                        else if (edi_8 == 0)
                            break
                        
                        if (edi_8 == eax)
                            esi_3 += arg3[4]
                            edi_8 = nullptr
                            int32_t temp12_1 = var_14_1
                            var_14_1 -= 1
                            
                            if (temp12_1 == 1)
                                break
                case 2
                    int32_t var_14_2 = arg2[3]
                    void* edi_9 = nullptr
                    
                    while (true)
                        edi_9 += zx.d(*ebx_2)
                        uint32_t eax_15 = zx.d(*(ebx_2 + 1))
                        ebx_2 = &ebx_2[1]
                        
                        if (eax_15 != 0)
                            uint32_t eax_16 = eax_15 * 3
                            uint32_t var_50_3 = eax_16
                            int16_t* var_54_3 = ebx_2
                            void* var_58_3 = edi_9 * 3 + esi_3
                            sub_5cd110()
                            ebx_2 += eax_16
                            edi_9 += eax_15
                        else if (edi_9 == 0)
                            break
                        
                        if (edi_9 == eax)
                            esi_3 += arg3[4]
                            edi_9 = nullptr
                            int32_t temp13_1 = var_14_2
                            var_14_2 -= 1
                            
                            if (temp13_1 == 1)
                                break
                case 3
                    int32_t var_14_3 = arg2[3]
                    void* edi_10 = nullptr
                    
                    while (true)
                        uint32_t eax_18 = zx.d(ebx_2[1])
                        edi_10 += zx.d(*ebx_2)
                        ebx_2 = &ebx_2[2]
                        arg1 = eax_18
                        
                        if (eax_18 != 0)
                            uint32_t var_50_4 = eax_18 * 4
                            int16_t* var_54_4 = ebx_2
                            int32_t var_58_4 = esi_3 + (edi_10 << 2)
                            sub_5cd110()
                            ebx_2 = &ebx_2[arg1 * 2]
                            edi_10 += arg1
                        else if (edi_10 == 0)
                            break
                        
                        if (edi_10 == eax)
                            esi_3 += arg3[4]
                            edi_10 = nullptr
                            int32_t temp14_1 = var_14_3
                            var_14_3 -= 1
                            
                            if (temp14_1 == 1)
                                break
    else
        switch (ecx)
            case 1
                int32_t edi_1 = edx_4
                
                while (true)
                    edx_5 += zx.d(*ebx_2)
                    uint32_t ecx_3 = zx.d(*(ebx_2 + 1))
                    ebx_2 = &ebx_2[1]
                    
                    if (ecx_3 != 0)
                        ebx_2 += ecx_3
                        edx_5 += ecx_3
                    else if (edx_5 == 0)
                        break
                    
                    if (edx_5 == eax)
                        edx_5 = 0
                        int32_t temp3_1 = edi_1
                        edi_1 -= 1
                        
                        if (temp3_1 == 1)
                            goto label_604d79
            case 2
                int32_t edi_2 = edx_4
                
                while (true)
                    edx_5 += zx.d(*ebx_2)
                    uint32_t ecx_5 = zx.d(*(ebx_2 + 1))
                    ebx_2 = &ebx_2[1]
                    
                    if (ecx_5 != 0)
                        ebx_2 = &ebx_2[ecx_5]
                        edx_5 += ecx_5
                    else if (edx_5 == 0)
                        break
                    
                    if (edx_5 == eax)
                        edx_5 = 0
                        int32_t temp4_1 = edi_2
                        edi_2 -= 1
                        
                        if (temp4_1 == 1)
                            goto label_604d79
            case 3
                int32_t edi_4 = edx_4
                
                while (true)
                    edx_5 += zx.d(*ebx_2)
                    uint32_t ecx_7 = zx.d(*(ebx_2 + 1))
                    ebx_2 = &ebx_2[1]
                    
                    if (ecx_7 != 0)
                        ebx_2 += ecx_7 * 3
                        edx_5 += ecx_7
                    else if (edx_5 == 0)
                        break
                    
                    if (edx_5 == eax)
                        edx_5 = 0
                        int32_t temp5_1 = edi_4
                        edi_4 -= 1
                        
                        if (temp5_1 == 1)
                            goto label_604d79
            case 4
                int32_t edi_5 = edx_4
                
                while (true)
                    edx_5 += zx.d(*ebx_2)
                    uint32_t ecx_9 = zx.d(ebx_2[1])
                    ebx_2 = &ebx_2[2]
                    
                    if (ecx_9 != 0)
                        ebx_2 = &ebx_2[ecx_9 * 2]
                        edx_5 += ecx_9
                    else if (edx_5 == 0)
                        break
                    
                    if (edx_5 == eax)
                        edx_5 = 0
                        int32_t temp6_1 = edi_5
                        edi_5 -= 1
                        
                        if (temp6_1 == 1)
                            goto label_604d79
    
    if ((*arg3 & 2) != 0)
        sub_5d6380(arg3)
    
    return 0
}
